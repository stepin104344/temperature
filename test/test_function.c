#include "unity.h"
#include "function.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_do_celsius_fahrenheit(void)
{
  TEST_ASSERT_EQUAL(86.0,do_celsius_fahrenheit(30.0));

}
void test_do_fahrenheit_celsius(void)
{
  TEST_ASSERT_EQUAL(37.0,do_fahrenheit_celsius(100.0));
  //TEST_ASSERT_EQUAL(1, factorial(1));
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
 RUN_TEST(test_do_fahrenheit_celsius);
RUN_TEST(test_do_celsius_fahrenheit);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
