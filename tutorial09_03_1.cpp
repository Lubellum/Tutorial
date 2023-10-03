#include "tutorial.h"

//２つの整数の大きい方を選ぶ関数を作成しなさい。２つの int 型引数を取り、大きい方の数値を戻り値として返すこと。

//また、int 型の変数 x、y、z にそれぞれ数値を入力し、作成した関数を使用して最も大きい数値を表示するプログラムを作成しなさい。

namespace
{

	int ConparisonNumber(int aLeft, int aRight)
	{
		if (aLeft > aRight)
		{
			return aLeft;
		}
		else
		{
			return aRight;
		}
	}

	int ConparisonNumber(int aX, int aY, int aZ)
	{
		if ( ConparisonNumber(aX, aY) == ConparisonNumber(aX, aZ) )
		{
			return aX;
		}
		else if (ConparisonNumber(aY, aX) == ConparisonNumber(aY, aZ))
		{
			return aY;
		}
		else
		{
			return aZ;
		}
	}

}

void Tutorial09_03_1()
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf_s("数字を入力してください(2回)\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	int biggerNum = ConparisonNumber(x, y);
	printf_s("「%d」の方が大きいです。\n", biggerNum);

	
	printf_s("数字を入力してください(3回)\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	int biggestNum = ConparisonNumber(x, y, z);
	printf_s("「%d」が一番大きいです。\n", biggestNum);
}