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
    init();
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

TEST(bowling, AllOnes)
{
    roll_multiple(20, 1);
    TEST_ASSERT_EQUAL(20, score());
}

TEST(bowling, Spare)
{
    roll(5);
    roll(5);
    roll_multiple(18, 1);
    TEST_ASSERT_EQUAL((10 + 1) + 18, score());
}

TEST(bowling, Strike)
{
    roll(10);
    roll_multiple(18, 1);
    TEST_ASSERT_EQUAL((10 + 1 + 1) + 18, score());
}

TEST(bowling, TwoSpares)
{
    roll(5);
    roll(5);
    roll(5);
    roll(5);
    roll_multiple(16, 1);
    TEST_ASSERT_EQUAL((10 + 5) + (10 + 1) + 16, score());
}

TEST(bowling, TwoStrikes)
{
    roll(10);
    roll(10);
    roll_multiple(16, 1);
    TEST_ASSERT_EQUAL((10 + 10 + 1) + (10 + 1 + 1) + 16, score());
}

TEST(bowling, SpareAndStrike)
{
    roll(6);
    roll(4);
    roll(10);
    roll_multiple(16, 1);
    TEST_ASSERT_EQUAL((10 + 10) + (10 + 1 + 1) + 16, score());
}