#include "tutorial.h"

void Tutorial03_12()
{
	int x;

	printf_s("貴方の年齢を入力してください\n");
	scanf_s("%d", &x);

	int livedDate = x * 365;

	std::cout << "あなたがこれまで生きてきた日数は約 " << livedDate << " 日です。" << "\n";
}