#include "../Unity/unity.h"
#include "../Inc/fun.h"

/* Prototypes for all the test functions */
void test_checkBalance(void);
void test_moneyDeposit(void);
void test_moneyWithdraw(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_checkBalance);
  RUN_TEST(test_moneyDeposit);
  RUN_TEST(test_moneyWithdraw);
  //RUN_TEST(test_negative_total);
  //RUN_TEST(test_negative_net_total);
  //RUN_TEST(test_negative_grand_total);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_checkBalance(void){
    float bal = 15000;
    float ans1 = 15000, ans2 = 15000, ans3 = 1000;
    TEST_ASSERT_EQUAL(ans1, checkBalance(bal));
    TEST_ASSERT_EQUAL(ans2, checkBalance(bal));

    // Failed Test Case
    TEST_ASSERT_EQUAL(ans3, checkBalance(bal));
}

void test_moneyDeposit(void){
    float bal = 15000;
    float ans1 = 4000,ans2 = 10000,ans3 = 1000, ans4 =5000 ;
    TEST_ASSERT_EQUAL(19000, moneyDeposit(ans1,bal));
    TEST_ASSERT_EQUAL(20000, moneyDeposit(ans2,bal));
    TEST_ASSERT_EQUAL(16000, moneyDeposit(ans3,bal));
    
    // Failed Test Case
    TEST_ASSERT_EQUAL(34000, moneyDeposit(ans4,bal));
}

void test_moneyWithdraw(void){
    float bal = 15000;
    float ans1 = 5000, ans2 = 600, ans3 = 12000, ans4 = 4000; 
    TEST_ASSERT_EQUAL(10000, moneyWithdraw(ans1,bal));
    TEST_ASSERT_EQUAL(14400, moneyWithdraw(ans2,bal));
    TEST_ASSERT_EQUAL(3000, moneyWithdraw(ans3,bal));

    // Failed Test Case
    TEST_ASSERT_EQUAL(2500, moneyWithdraw(ans4,bal));
}
