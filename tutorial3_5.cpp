#include "tutorial.h"

void tutorial3_5()
{
	int x = 0;

	printf_s("���l����͂��Ă�������\n");
	scanf_s("%d", &x);

	printf_s("���͂��ꂽ���l�́u%d�v�ł��B\n", x);
	printf_s("�u%d�v��2�{�ɂ������l�́u%d�v�ł��B\n", x, x * 2);
	printf_s("�u%d�v��3�{�ɂ������l�́u%d�v�ł��B\n", x, x * 3);
	printf_s("�u%d�v��4�{�ɂ������l�́u%d�v�ł��B\n", x, x * 4);
}