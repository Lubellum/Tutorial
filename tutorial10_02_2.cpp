#include "tutorial.h"

struct TPrecipitation
{
	int month;
	int precipitation;
};

void Tutorial10_02_2()
{
	TPrecipitation precipitation[4];

	for (int i = 0; i < 4; i++)
	{
		printf_s("�����H");
		scanf_s("%d", &precipitation[i].month);
		printf_s("�~���ʂ́H");
		scanf_s("%d", &precipitation[i].precipitation);
	}

	for (int i = 0; i < 4; i++)
	{
		printf_s("%d��  :\n", precipitation[i].month);
		printf_s("�~����:%d\n", precipitation[i].precipitation);
	}
}