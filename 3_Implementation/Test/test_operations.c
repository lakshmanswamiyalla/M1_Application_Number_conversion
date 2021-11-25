#include "unity.h"
#include "nnew.h"

/* Modify these two lines according to the project */
#include "nnew.h"
#define PROJECT_NAME    "main"

/* Prototypes for all the test functions */
void test_and_decimal(void);
void test_binary(void);
void test_octal(void);
void test_hexdecimal(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_and_decimal);
  RUN_TEST(test_binary);
  RUN_TEST(test_octal);
  RUN_TEST(test_hexdecimal);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_and_and(void) {
  TEST_ASSERT_BITS_decimal(56, and_binary(111000));
}
void test_and_and_testcase2(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_or_ro(void) {
  TEST_ASSERT_BITS_decimal(56, or_octal(0o70));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_nt(void) {
  TEST_ASSERT_BITS_decimal(56, hexadecimal(38));
 
}