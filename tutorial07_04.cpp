#include "tutorial.h"

//次のコードに追加し、入力された数値を 16 桁の 2 進数で表示するプログラムを完成させなさい。

void tutorial7_4()
{

	char sbinary[17];
	int value;
	int i;

	scanf_s("%d", &value);

	//bool numberJudge = isdigit(value);
	for (i = 15; i >= 0; --i)
	{
		sbinary[i] = '0' + (value % 2);
		value /= 2;
	}
	//if (numberJudge)
	//{
	//}

	// 配列 sbinaryに'0'か'1'を代入する

	sbinary[16] = 0;
	printf_s("%s", sbinary);
}