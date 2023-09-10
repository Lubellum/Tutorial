#include "tutorial.h"

void tutorial7_10_1()
{
    // todo: 2つめの配列に大文字だけを入れて、最後に2つ目の配列を表示する
    char    str[100];
    char    str2[100];
    int     i, j;

    scanf_s("%s", str, 100);

    for (i = 0, j = 0; str[i] != 0; i++)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            str2[j++] = str[i];
    }

    str2[j] = 0;

    printf("%s", str2);
}