#include "tutorial.h"
#include "tutorial4_7.h"

void tutorial4_7::JudgeGrades1()
{
	int x = 0;

	std::cout << "テストの点数を入力してください\n";
	scanf_s("%d", &x);

	if (x >= 60)
	{
		std::cout << "合格です\n";
	}
	else
	{
		std::cout << "不合格です\n";
	}
}

void tutorial4_7::JudgeGrades2()
{
	int x = 0;

	std::cout << "テストの点数を入力してください\n";
	scanf_s("%d", &x);

	if (x >= 80)
	{
		std::cout << "たいへんよくできました\n";
	}
	else if (x >= 60)
	{
		std::cout << "よくできました\n";
	}
	else
	{
		std::cout << "ざんねんでした\n";
	}
}

void tutorial4_7::JudgeGrades3()
{
	int x = 0;

	std::cout << "テストの点数を入力してください\n";
	scanf_s("%d", &x);

	if (x >= 80)
	{
		std::cout << "優\n";
	}
	else if (x >= 70)
	{
		std::cout << "良\n";
	}
	else if (x >= 60)
	{
		std::cout << "可\n";
	}
	else
	{
		std::cout << "不可\n";
	}
}