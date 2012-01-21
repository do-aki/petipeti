#!/usr/bin/env php
<?php
require_once dirname(__FILE__) . '/lime.php';

$h = new lime_harness(array(
  'php_cli' => dirname(__FILE__) . '/php-src/sapi/cli/php',
));
$h->register('test');
$h->run();

