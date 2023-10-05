#include "tutorial.h"

void Tutorial05_17()
{
	int number = 0;
	bool factorFlag = 0;
	int start = 2;

	std::cout << "このプログラムは、入力された数値を素因数分解するプログラムです。\n";
	std::cout << "数値を入力してください。\n";

	scanf_s("%d", &number);

	//for (int i = 2; 1 < number; ++i)
	//{
	//	// todo: 2で割り切った結果が0となってしまい、無限ループしてしまう
	//	while ( (number % i) == 0)
	//	{
	//		std::cout << i << "\n";
	//		number /= i;
	//	}
	//}

	while (number > 1)
	{
		// whileで、複数買いまわす際に、2回目以降iが2からスタートしてしまうので、既に使用した数を再度使用しないように変数化
		for (int i = start; i <= number; ++i)
		{
			if (number % i == 0)
			{
				printf("%d\n", i);
				number = number / i;
				start = i;
				break;
			}
		}
	}
}