#include "tutorial.h"

void Ttutorial04_13()
{
	int month = 0;

	std::cout << "こちらは月の日数を表示するプログラムです。\n";
	std::cout << "確認したい月を入力してください。\n";

	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		
		std::cout << "31日です\n";
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		
		std::cout << "30日です\n";
		break;

	case 2:
		std::cout << "28日です\n";
		break;

		default:
			std::cout << "該当する数値を入力してください\n";
			break;
	}
}