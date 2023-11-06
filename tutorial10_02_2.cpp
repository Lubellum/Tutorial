#include "tutorial.h"

struct TPrecipitation
{
	int month;
	int precipitation;
};

void Tutorial10_02_2()
{
	// todo:構造体のインスタンスを配列で扱う方法で記述

	TPrecipitation precipitation[4];

	for (int i = 0; i < 4; i++)
	{
		printf_s("何月？");
		scanf_s("%d", &precipitation[i].month);
		printf_s("降水量は？");
		scanf_s("%d", &precipitation[i].precipitation);
	}

	for (int i = 0; i < 4; i++)
	{
		printf_s("%d月  :\n", precipitation[i].month);
		printf_s("降水量:%d\n", precipitation[i].precipitation);
	}
}