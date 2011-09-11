ぺちぺち
require_once dirname(dirname(__FILE__)) . '/lime.php';

$t = new lime_test();

もし 1 ならば
  $t->pass();
そうでないならば
 $t->fail();
条件終わり


もし 0 ならば
  $t->fail();
そうでないならば
 $t->pass();
条件終わり
