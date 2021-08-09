#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    long int time_start, time_end;
    int one_it = 0, two_it = 0, three_it = 0, four_it = 0, five_it = 0, six_it = 0;
    int r;
    int ITERATIONS = 0x7fffffff;
    if (argc > 1)
    {
        if (!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h")) // Check for help
        {
            printf("Usage: %s [iterations]\n", argv[0]);
            return 0;
        }
        ITERATIONS = atoi(argv[1]);
    }

    srand(time(NULL));
    printf("Running %d iterations\n\n", ITERATIONS);
    time_start = time(NULL);
    for (int i = 0; i < ITERATIONS; ++i)
    {
        r = rand() % 6;
        switch (r)
        {
        case 0:
            one_it++;
            break;
        case 1:
            two_it++;
            break;
        case 2:
            three_it++;
            break;

        case 3:
            four_it++;
            break;

        case 4:
            five_it++;
            break;

        case 5:
            six_it++;
            break;
        }
    }
    time_end = time(NULL);
    printf("%d iterations of 1. Result: %llf%%\n", one_it, (double)one_it / ITERATIONS * 100);
    printf("%d iterations of 2. Result: %llf%%\n", two_it, (double)two_it / ITERATIONS * 100);
    printf("%d iterations of 3. Result: %llf%%\n", three_it, (double)three_it / ITERATIONS * 100);
    printf("%d iterations of 4. Result: %llf%%\n", four_it, (double)four_it / ITERATIONS * 100);
    printf("%d iterations of 5. Result: %llf%%\n", five_it, (double)five_it / ITERATIONS * 100);
    printf("%d iterations of 6. Result: %llf%%\n", six_it, (double)six_it / ITERATIONS * 100);
    printf("\nTotal time: %d seconds\n", time_end - time_start);
    return 0;
}