#include "tutorial.h"

void Tutorial05_10()
{
	int viewCount = 0;

	std::cout << "こちらのプログラムは、入力された数字の分だけ「*」を表示します。\n";
	std::cout << "表示させたい個数を入力してください。\n";

	scanf_s("%d", &viewCount);

	for (int i = 0; i < viewCount; i++)
	{
		std::cout << "*";

		// 10個毎に改行
		if ( (i + 1 >= 10) && ( (i + 1) % 10 == 0) )
		{
			std::cout << "  " << i + 1 << "\n";
		}
	}
}