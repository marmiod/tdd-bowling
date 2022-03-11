#include "bowling.h"

#define MAX_ROLLS 21

static int rolls[MAX_ROLLS] = {0};
static int current_roll = 0;

void init()
{
    current_roll = 0;
}

void roll(int pins)
{
    rolls[current_roll] = pins;
    current_roll++;
}

int score()
{
    int score = 0;
    int rolls_index = 0;

    for(int frame = 0; frame < 10; frame++)
    {
        if (rolls[rolls_index] + rolls[rolls_index + 1] == 10)
        {
            score += 10 + rolls[rolls_index + 2];
        }
        else
        {
            score += rolls[rolls_index] + rolls[rolls_index + 1];
        }

        rolls_index += 2;
    }

    return score;
}