#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Simulates rolling a single six-sided die
int roll_one_die()
{
    return rand() % 6 + 1;
}

int main()
{
    const int NUM_ROLLS = 1000000;
    // Index 0 and 1 are unused (sums of 2 to 12)
    int counts[13] = {0};
    int i;

    srand(time(NULL)); // Seed random number generator

    for (i = 0; i < NUM_ROLLS; i++)
    {
        int die1 = roll_one_die();
        int die2 = roll_one_die();
        int sum = die1 + die2;
        counts[sum]++;
    }

    printf("Sum |   Count   |  Simulated %%  | Theoretical %%\n");
    printf("----|-----------|---------------|----------\n");

    // Theoretical probabilities for sums 2 to 12
    double theory[] = {0, 0, 2.78, 5.56, 8.33, 11.11, 13.89, 16.67, 13.89, 11.11, 8.33, 5.56, 2.78};

    for (int sum = 2; sum <= 12; sum++)
    {
        double sim_percent = ((double)counts[sum] / NUM_ROLLS) * 100;

        printf(" %2d | %9d |    %6.2f%%   |  %5.2f%%\n", sum, counts[sum], sim_percent, theory[sum]);
    }
    return 0;
}