#include "tutorial.h"

void Tutorial03_12()
{
	int x;

	printf_s("�M���̔N�����͂��Ă�������\n");
	scanf_s("%d", &x);

	int livedDate = x * 365;

	std::cout << "���Ȃ�������܂Ő����Ă��������͖� " << livedDate << " ���ł��B" << "\n";
}