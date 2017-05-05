#include <stdio.h>
#include "../thirdparty/ctest.h"
#include "../src/deposit.h"
  
CTEST(suite, TEST_DEPOSIT){
    const int result = 72000;
    int days= 15;
    int money = 80000;
    int real_result = less_days(money,days);
    printf("Test for vklad less than 100000 and 0-30 day  ");
    ASSERT_EQUAL( result, real_result);
    }

CTEST(suite, TEST_DEPOSIT_2){
    const int  result = 81600;
    int days= 50;
    int money = 80000;
    int real_result = less_100000(money,days);
    printf("Test for vklad less than 100000 and 31-120 day ");
    ASSERT_EQUAL( result, real_result);
    }

CTEST(suite, TEST_DEPOSIT_3){
    const int  result = 84800;
    int days= 200;
    int money = 80000;
    int real_result = less_100000(money,days);
    printf("Test for vklad less than 100000 and 121-240 day ");
    ASSERT_EQUAL( result, real_result);
    }

CTEST(suite, TEST_DEPOSIT_4){
    const int  result = 89600;
    int days = 300;
    int money = 80000;
    int real_result = less_100000(money,days);
    printf("Test for vklad less than 100000 and 240-365 day");
    ASSERT_EQUAL( result, real_result);
    }
    
CTEST(suite, TEST_DEPOSIT_5){
    const int  result = 162000;
    int days= 15;
    int money = 180000;
    int real_result = less_days(money,days);
    printf("Test for vklad more than 100000 and 0-30 day ");
    ASSERT_EQUAL( result, real_result);
}

CTEST(suite, TEST_DEPOSIT_6){
    const int  result = 185400;
    int days= 50;
    int money = 180000;
    int real_result = more_100000(money,days);
    printf("Test for vklad more than 100000 and 31-120 day ");
    ASSERT_EQUAL( result, real_result);
}

CTEST(suite, TEST_DEPOSIT_7){
    const int  result = 194400;
    int days= 200;
    int money = 180000;
    int real_result = more_100000(money,days);
    printf("Test for vklad more than 100000 and 120-240 day ");
    ASSERT_EQUAL( result, real_result);
}

CTEST(suite, TEST_DEPOSIT_8){
    const int  result = 206999;
    int days= 300;
    int money = 180000;
    int real_result = more_100000(money,days);
    printf("Test for vklad more than 100000 and 240-365 day ");
    ASSERT_EQUAL( result, real_result);
   }

