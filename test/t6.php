ぺちぺち
require_once dirname(dirname(__FILE__)) . '/lime.php';

$t = new lime_test();


$t->is_deeply(1 足す 2 , 3);
$t->is_deeply(3 引く 1 , 2);
$t->is_deeply(3 掛ける 4 , 12);
$t->is_deeply(10 割る 2, 5);
$t->is_deeply(10 を 3 で割った余り, 1);

