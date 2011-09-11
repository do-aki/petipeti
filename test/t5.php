ぺちぺち
require_once dirname(dirname(__FILE__)) . '/lime.php';

$t = new lime_test();


$t->is_deeply(1 が 2 より小さい, true);
$t->is_deeply(1 が 0 より大きい, true);
$t->is_deeply(1 が 1 以上, true);
$t->is_deeply(1 が 1 以下, true);
$t->is_deeply(1 が 1 より小さい, false);
$t->is_deeply(1 が 1 より大きい, false);
$t->is_deeply(1 が 2 以上, false);
$t->is_deeply(1 が 0 以下, false);

