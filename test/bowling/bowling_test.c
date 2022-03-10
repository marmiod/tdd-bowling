#include "unity/fixture/unity_fixture.h"

#include "bowling.h"

TEST_GROUP(bowling);

void roll_multiple(int num_rolls, int pins)
{
    for(int i = 0 ; i < num_rolls; i++)
    {
        roll(pins);
    }
}

TEST_SETUP(bowling)
{
    /* Init before every test */
}

TEST_TEAR_DOWN(bowling)
{
    /* Cleanup after every test */
}

TEST(bowling, AllZeros)
{
    roll_multiple(20, 0);
    TEST_ASSERT_EQUAL(0, score());
}