#include "tutorial.h"

struct TExamResult2
{
	char name[40];
	int score;
	char judgeGrade2;
};

char JudgeGrade2(TExamResult2* aStudent)
{
	if (aStudent->score >= 80)
	{
		return 'A';
	}
	else if (aStudent->score >= 70)
	{
		return 'B';
	}
	else if (aStudent->score >= 60)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}

void Tutorial10_05()
{
	const int num = 4;
	TExamResult2 students[num];
	int i = 0;

	for (i = 0; i < num; i++)
	{
		printf_s("生徒の名前は？(%d人目)\n", i + 1);
		scanf_s("%s", &students[i].name, 40);
		printf_s("テストの点数は？(%d人目)\n", i + 1);
		scanf_s("%d", &students[i].score);
		printf_s("\n");
	}

	for (i = 0; i < num; i++)
	{
		students[i].judgeGrade2 = JudgeGrade2(&students[i]);
	}

	for (i = 0; i < num; i++)
	{
		printf_s("%d人目\n", i + 1);
		printf_s("生徒名  :%s\n", students[i].name);
		printf_s("点数    :%d\n", students[i].score);
		printf_s("成績判定:%c\n\n", students[i].judgeGrade2);
	}
}