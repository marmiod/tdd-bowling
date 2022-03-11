#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(bowling)
{
   /* Test cases to run */
   RUN_TEST_CASE(bowling, AllZeros);
   RUN_TEST_CASE(bowling, AllOnes);
   RUN_TEST_CASE(bowling, Spare);
   RUN_TEST_CASE(bowling, Strike);
   RUN_TEST_CASE(bowling, TwoSpares);
   RUN_TEST_CASE(bowling, TwoStrikes);
   RUN_TEST_CASE(bowling, SpareAndStrike);
}