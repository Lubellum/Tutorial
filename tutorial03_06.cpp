#include "tutorial.h"

void Tutorial03_06()
{
	int x = 0;

	printf_s("���l����͂��Ă�������\n");
	scanf_s("%d", &x);

	printf_s("���͂��ꂽ���l�́u%d�v�ł��B\n", x);
	printf_s("�u%d�v��1��ɂ������l�́u%d�v�ł��B\n", x, x);
	printf_s("�u%d�v��2��ɂ������l�́u%d�v�ł��B\n", x, x * x);
	printf_s("�u%d�v��3��ɂ������l�́u%d�v�ł��B\n", x, x * x * x);
}