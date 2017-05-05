
#include "../thirdparty/ctest.h"


CTEST(suite, TEST_DAYS)
{
    const int days = 320;
   
    ASSERT_INTERVAL(1,365,days);
}


CTEST(suite, TEST_MONEY)
{
    const int money = 11000;
    ASSERT_INTERVAL(10000, 999999, money);
}
