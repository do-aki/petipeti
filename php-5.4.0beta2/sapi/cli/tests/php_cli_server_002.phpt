--TEST--
$_SERVER variable
--INI--
allow_url_fopen=1
--SKIPIF--
<?php
include "skipif.inc"; 
if (substr(PHP_OS, 0, 3) == 'WIN') {
    die ("skip not for Windows");
}
?>
--FILE--
<?php
include "php_cli_server.inc";
php_cli_server_start('var_dump($_SERVER["DOCUMENT_ROOT"], $_SERVER["SERVER_SOFTWARE"]);');
var_dump(file_get_contents("http://" . PHP_CLI_SERVER_ADDRESS));
?>
--EXPECTF--	
string(%d) "string(%d) "%s/tests"
string(%d) "PHP %s Development Server"
"
