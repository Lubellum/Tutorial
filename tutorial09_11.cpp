#include "tutorial.h"

//関数を再帰的に呼び出すことによって、フィボナッチ数列の n 番目の項を計算する関数を作成しなさい。
//最初の２つの項、0 番目を 0、1 番目を 1 とします。
//この関数を使用して、11 番目から 20 番目までの項を表示するプログラムを作成しなさい。

void CliculateFibonacciNumber(unsigned long long * aFibonacciNumbers, int aMax)
{
	aFibonacciNumbers[0] = 0;
	aFibonacciNumbers[1] = 1;

	for (int i = 2; i < aMax; i++)
	{
		aFibonacciNumbers[i] = aFibonacciNumbers[i - 2] + aFibonacciNumbers[i - 1];
	}
}

void Tutorial09_11()
{
	const int min = 11;
	const int max = 90;

	unsigned long long fibonacciNumbers[max] = {};

	CliculateFibonacciNumber(fibonacciNumbers ,max);

	for (int i = min; i < max; i++)
	{
		printf_s("%lld\n", fibonacciNumbers[i]);
	}
}