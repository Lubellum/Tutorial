#include "tutorial.h"

void tutorial7_10_1()
{
    // todo: 2�߂̔z��ɑ啶�����������āA�Ō��2�ڂ̔z���\������
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