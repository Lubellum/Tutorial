#include "tutorial.h"

void Tutorial04_01()
{
	int x = 0;
	int y = 0;

	printf_s("1�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%d", &x);

	printf_s("2�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%d", &y);

	std::cout << x << "\n";
	std::cout << y << "\n";

	if (x > y)
	{
		std::cout << "1�ڂ�2�ڂ��傫���ł�\n";
	} 
	else if (x == y)
	{
		std::cout << "1�ڂ�2�ڂ͓������l�ł�\n";
	}
	else if (x < y)
	{
		std::cout << "1�ڂ�2�ڂ�菬�����ł�\n";
	}
	else
	{
		std::cout << "�G���[\n";
	}
}