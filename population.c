#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years;

    // TODO: Prompt for start size
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    for (years = 0; start < end; years++)
    {
        start = start + start / 3 - start / 4 ;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);

}