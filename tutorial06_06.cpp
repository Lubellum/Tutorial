#include "tutorial.h"

// ���̃R�[�h�ɒǉ����A���\��\������v���O���������������Ȃ����B

void Tutorial06_06()
{
    int kuku[9][10];
    int x, y;

    // �z�� kuku �ɒl��������

    for (int y = 0; y < 9; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            kuku[y][x] = (y + 1) * (x + 1);
        }
    }

    for (y = 0; y < 9; y++)
    {
        for (x = 0; x < 10; x++)
        {
            printf(" %2d", kuku[y][x]);
        }

        printf("\n");
    }
}