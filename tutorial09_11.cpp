#include "tutorial.h"

//�֐����ċA�I�ɌĂяo�����Ƃɂ���āA�t�B�{�i�b�`����� n �Ԗڂ̍����v�Z����֐����쐬���Ȃ����B
//�ŏ��̂Q�̍��A0 �Ԗڂ� 0�A1 �Ԗڂ� 1 �Ƃ��܂��B
//���̊֐����g�p���āA11 �Ԗڂ��� 20 �Ԗڂ܂ł̍���\������v���O�������쐬���Ȃ����B

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