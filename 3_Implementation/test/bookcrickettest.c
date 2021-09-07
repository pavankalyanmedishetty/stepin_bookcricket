/**
 * @file bookcrickettest.c
 * @author Pavan
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"

/* Modify these two lines according to the project */
#include "bookcricket.h"
#define PROJECT_NAME   "Book_Cricket"

/* Prototypes for all the test functions */
void test_GetPlayerToss(void);




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
  RUN_TEST(test_GetPlayerToss);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_GetPlayerToss(void) {
  TEST_ASSERT_EQUAL(7,GetPlayerToss("David Bhai","Kane Mama",1));
 /* TEST_ASSERT_EQUAL(7,GetPlayerToss("Bairstow","Bhuvaneswar",1));*/
  
}
