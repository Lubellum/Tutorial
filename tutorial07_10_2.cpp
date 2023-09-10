#include "tutorial.h"

void tutorial7_10_2()
{
    char    str[100];
    int     i, j;

    scanf_s("%s", str, 100);

    for (i = 0, j = 0; str[i] != 0; i++)
    {
        if (!('a' <= str[i] && str[i] <= 'z'))
            str[j++] = str[i];
    }

    str[j] = 0;

    printf("%s", str);
}