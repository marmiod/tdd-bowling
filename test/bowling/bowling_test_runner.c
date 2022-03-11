#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(bowling)
{
   /* Test cases to run */
   RUN_TEST_CASE(bowling, AllZeros);
   RUN_TEST_CASE(bowling, AllOnes);
   RUN_TEST_CASE(bowling, Spare);
}