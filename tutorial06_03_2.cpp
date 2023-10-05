#include "tutorial.h"

void Tutorial06_03_2()
{
    int     values[10];
    int     i;

    for (i = 0; i < 10; i++)
        scanf_s("%d", &values[i]);

    printf("\n‹ô”F");

    for (i = 0; i < 10; i++)
    {
        if ((values[i] % 2) == 0)
            printf("%d ", values[i]);
    }

    printf("\nŠï”F");

    for (i = 0; i < 10; i++)
    {
        if ((values[i] % 2) != 0)
            printf("%d ", values[i]);
    }
}