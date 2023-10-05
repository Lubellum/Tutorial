#include "tutorial.h"

void Tutorial03_06()
{
	int x = 0;

	printf_s("数値を入力してください\n");
	scanf_s("%d", &x);

	printf_s("入力された数値は「%d」です。\n", x);
	printf_s("「%d」を1乗にした数値は「%d」です。\n", x, x);
	printf_s("「%d」を2乗にした数値は「%d」です。\n", x, x * x);
	printf_s("「%d」を3乗にした数値は「%d」です。\n", x, x * x * x);
}