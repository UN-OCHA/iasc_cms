vcl 4.0;

backend default {
  .host = "nginx";
  .port = "80";
  .connect_timeout = 120s;
  .first_byte_timeout = 120s;
  .between_bytes_timeout = 120s;
}

sub vcl_recv {
  if (req.restarts == 0) {
    if (req.http.x-forwarded-for) {
      set req.http.x-forwarded-for = req.http.x-forwarded-for + ", " + client.ip;
    } else {
      set req.http.x-forwarded-for = client.ip;
    }
  }

  if (req.method != "GET" &&
    req.method != "HEAD" &&
    req.method != "PUT" &&
    req.method != "POST" &&
    req.method != "TRACE" &&
    req.method != "OPTIONS" &&
    req.method != "DELETE") {
    # Non-RFC2616 or CONNECT which is weird.
    return (pipe);
  }

  if (req.method != "GET" && req.method != "HEAD") {
    # We only deal with GET and HEAD by default.
    return (pass);
  }

  # IASC-258: Do not cache private file responses.
  # This is needed because of the unsetting of req.http.Cookie below.
  if (req.url ~ "^/system/files") {
    return (pass);
  }

  # Whitelist only the Drupal session cookie (secure or otherwise).
  if (req.http.cookie) {
    set req.http.cookie = ";" + req.http.cookie;
    set req.http.cookie = regsuball(req.http.cookie, "; +", ";");
    set req.http.cookie = regsuball(req.http.cookie, ";(S?SESS[a-z0-9]+)=", "; \1=");
    set req.http.cookie = regsuball(req.http.cookie, ";[^ ][^;]*", "");
    set req.http.cookie = regsuball(req.http.cookie, "^[; ]+|[; ]+$", "");
  }

  # Remove a ";" prefix, if present.
  set req.http.cookie = regsub(req.http.cookie, "^;\s*", "");

  # Remove empty cookies.
  if (req.http.cookie ~ "^\s*$") {
    unset req.http.cookie;
  }

  # Skip the Varnish cache for install, update, and cron
  if (req.url ~ "install\.php|update\.php|cron\.php") {
    return (pass);
  }

  if (req.url ~ "\.(aif|aiff|au|avi|bin|bmp|cab|carb|cct|cdf|class|css|dcr|doc|dtd|eot|exe|flv|gcf|gff|gif|grv|hdml|hqx|html|ico|ini|jpeg|jpg|js|mov|mp3|nc|pct|pdf|pdf|png|ppc|pws|otf|svg|swa|swf|swf|ttf|txt|vbs|w32|wav|wbmp|wml|wmlc|wmls|wmlsc|woff|xml|xsd|xsl|zip)") {
    # Don't use Cookie variance for static files. This will let authenticated users
    # get cache hits.
    unset req.http.cookie;

    # Strip itok from static file requests to boost hit rates.
    if (req.url ~ "(\?|&)itok=") {
      set req.url = regsuball(req.url, "itok=[%\.+_A-z0-9-]+&?", "");
    }
    set req.url = regsub(req.url, "(\?&|\?|&)$", "");

    # Strip anything that starts with %3Fgiziip.
    if (req.url ~ "%3Fgiziip") {
      set req.url = regsub(req.url, "%3Fgiziip.*", "");
    }

    # Only cache CSS and JS from the files directory, static files from the profile,
    # or image files from the files directory. (Basically, don't cache PDFs in Varnish.)
    if (req.url ~ "^/(sites/reliefweb\.int/files/(css|js)|profiles/reliefweb)" ||
        req.url ~ "^/sites/reliefweb\.int/files/.*\.(gif|jpe?g|png)") {
      return (hash);
    }
    else {
      return (pass);
    }
  }

  return (hash);
}

sub vcl_hash {
  if (req.http.x-forwarded-proto) {
    hash_data(req.http.x-forwarded-proto);
  }

  if (req.http.authorization) {
    hash_data(req.http.authorization);
  }

  if (req.http.cookie) {
    hash_data(req.http.cookie);
  }
}

sub vcl_backend_response {
  # Strip any cookies before an image/js/css is inserted into cache.
  if (bereq.url ~ "\.(aif|aiff|au|avi|bin|bmp|bmp|cab|carb|cct|cdf|class|css|dcr|doc|dtd|eot|exe|flv|gcf|gff|gif|gif|grv|hdml|hqx|html|ico|ini|jpeg|jpg|jpg|js|mov|mp3|nc|pct|pdf|pdf|png|png|ppc|pws|svg|swa|swf|swf|ttf|txt|vbs|w32|wav|wbmp|wml|wmlc|wmls|wmlsc|woff|xml|xsd|xsl|zip)") {
    unset beresp.http.set-cookie;
  }

  set beresp.http.X-Varnish-TTL = beresp.ttl;

  # Make sure a browser would never cache an uncacheable (e.g. 50x) response.
  if (beresp.ttl <= 0s) {
    set beresp.http.Cache-Control = "no-cache, no-store, must-revalidate";
  } else if (beresp.http.Content-Type ~ "text/html" && beresp.ttl > 0s) {
    # Set a short TTL for HTML to force re-updating against the Drupal page cache.
    set beresp.ttl = 1m;
  }

  # Keep this around for 24 hours past its TTL. This will allow Varnish 4 to
  # re-update it in the background.
  set beresp.grace = 24h;
  set beresp.keep = 24h;

  # You _may_ want to return a hit-for-pass here, or disable it, depending on
  # if you expect to have a lot of non-cacheable responses.
  #
  # The default here will fall through to Varnish's default processing logic
  # which will sent a 2 minute hit-for-pass if this URL returns an uncacheable
  # response.
  #
  # Uncomment the following line to never hit-for-pass.
  return (deliver);
}

sub vcl_deliver {
  set resp.http.X-Varnish-Server = server.hostname;
}
