#include "unity/fixture/unity_fixture.h"

#include "bowling.h"

TEST_GROUP(bowling);

TEST_SETUP(bowling)
{
    /* Init before every test */
}

TEST_TEAR_DOWN(bowling)
{
    /* Cleanup after every test */
}

TEST(bowling, FirstTest)
{
    TEST_FAIL_MESSAGE("Implement your test!");
}