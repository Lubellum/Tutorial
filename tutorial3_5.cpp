#include "tutorial.h"

void tutorial3_5()
{
	int x = 0;

	printf_s("数値を入力してください\n");
	scanf_s("%d", &x);

	printf_s("入力された数値は「%d」です。\n", x);
	printf_s("「%d」を2倍にした数値は「%d」です。\n", x, x * 2);
	printf_s("「%d」を3倍にした数値は「%d」です。\n", x, x * 3);
	printf_s("「%d」を4倍にした数値は「%d」です。\n", x, x * 4);
}