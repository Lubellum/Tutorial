#include "tutorial.h"

struct TExamResult
{
	char name[40];
	int score = 50;	
	char judgeGrade;
};

char JudgeGrade(const TExamResult &aStudent)
{
	if (aStudent.score >= 80)
	{
		return 'A';
	}
	else if (aStudent.score >= 70)
	{
		return 'B';
	}
	else if (aStudent.score >= 60)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}

void Tutorial10_04()
{
	TExamResult student1;

	// scanfは値を書き換えているから、変数の先頭のアドレスが必要→　＆いる
	printf_s("生徒の名前は？\n");
	scanf_s("%s", student1.name, 40);
	printf_s("テストの点数は？\n");
	scanf_s("%d", &student1.score);

	student1.judgeGrade = JudgeGrade(student1);

	printf_s("生徒名  :%s\n", student1.name);
	printf_s("点数    :%d\n", student1.score);
	printf_s("成績判定:%c\n", student1.judgeGrade);
}