#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int years = 0;
    // TODO: Prompt for start size
    do
    {
        x = get_int("Start size ");
    }
    while (x < 9);
    // TODO: Prompt for end size
    do
    {
        y = get_int("End Size ");
    }
    while (y < x);
    //TODO: Calculate number of years until we reach threshold
    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        years++;
    }
    // TODO: Print number of years
    if (x >= y)
    {
        printf("Years: %i\n", years);
    }
}
