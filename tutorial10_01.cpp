#include "tutorial.h"

//int 型のメンバー x と y を持つ構造体 POINT を定義し、以下のプログラムを実行しなさい。

struct POINT
{
    int x;
    int y;
};

void Tutorial10_01()
{
    POINT aBigDipper[] =
    {
        { 1, 0},
        {11, 1},
        {25, 2},
        { 8, 5},
        {26, 6},
        {36, 9},
        {46,12},
        {58,12},
    };

    char    space[15][62];
    int     i, j;

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 62; j++)
        {
            space[i][j] = '0';
        }
        space[i][j - 2] = 10;
        space[i][j - 1] = 13;

        //space[i][j] = 0;
    }
    space[14][61] = 0;


    for (i = 0; i < 8; i++)
        space[aBigDipper[i].y][aBigDipper[i].x] = '*';

    //for (i = 0; i < 15; i++)
    //    printf("%s\n", space[i]);

    printf("%s", space);
}