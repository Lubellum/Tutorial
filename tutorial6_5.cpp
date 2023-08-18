#include "tutorial.h"

// 次のコードに追加し、入力された数値を 16 桁の 2 進数で表示するプログラムを完成させなさい。

void tutorial6_5()
{
	int binary[16];
	int value;
	int i;

	scanf_s("%d", &value);

	// 配列 binaryに0か1を代入する
	for (i = 15; i >= 0; --i)
	{
		binary[i] = value % 2;
		value /= 2;
	}

	for (i = 0; i < 16; i++)
	{
		printf_s("%d", binary[i]);
	}
}