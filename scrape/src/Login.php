<?php

namespace IASC;

use Goutte\Client;

class Login {

  protected $sso = 'http://singleone.unocha.org/OCHASingleOne/pageloader.aspx?page=login&pubappid=IASCAdmin&redirect=http%3a%2f%2fwebapps.humanitarianinfo.org%2fIASCadmin%2fpageloader.aspx%3fpage%3d&processlogin=b2000_admin';

  public $crawler;
  public $client;

  public function __construct($username, $password) {
    $this->client = new Client();
    $this->crawler = $this->client->request('GET', $this->sso);

    // Select the form
    $form = $this->crawler->selectButton('Login')->form();

    // Submit the form passing an array of values
    $this->crawler = $this->client->submit($form,
      array(
        '_ctl3:TextEmail' => $username,
        '_ctl3:TextPassword' => $password,
      )
    );
  }
}
