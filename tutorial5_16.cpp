#include "tutorial.h"

void tutorial5_16()
{
	int number = 0;
	int factorCount = 0;

	std::cout << "このプログラムは、入力された数値が素数か否か判定するプログラムです。\n";
	std::cout << "数値を入力してください。\n";

	scanf_s("%d", &number);


	// 入力された数値以下に因数があるかどうか判別する
	//for (int i = 0; i < number; i++)
	//{
	//	// todo: number - 1の時、%(i+1)の部分が必ず条件を満たしてしまう
	//	if ( (i >= 4) && (number % (i + 1) == 0) )
	//	{
	//		++factorCount;
	//	}
	//}

	for (int i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			++factorCount;
			break;
		}
	}

	if (factorCount > 0)
	{
		std::cout << "入力された数値は素数ではありません。\n";
	}
	else
	{
		std::cout << "入力された数値は素数です。\n";
	}
}