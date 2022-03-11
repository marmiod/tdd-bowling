#include "bowling.h"

#define MAX_ROLLS 21

static int rolls[MAX_ROLLS] = {0};
static int current_roll = 0;

void roll(int pins)
{
    rolls[current_roll] = pins;
    current_roll++;
}

int score()
{
    int score = 0;

    for(int i; i < MAX_ROLLS; i++)
    {
        score += rolls[i];
    }

    return score;
}