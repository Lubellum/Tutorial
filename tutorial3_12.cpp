#include "tutorial.h"

void tutorial3_12()
{
	int x;

	printf_s("貴方の年齢を入力してください\n");
	scanf_s("%d", &x);

	int LivedDate = x * 365;

	std::cout << "あなたがこれまで生きてきた日数は約 " << LivedDate << " 日です。" << "\n";
}