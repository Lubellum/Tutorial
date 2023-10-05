#include "tutorial.h"

void Tutorial05_13()
{
	int num = 0;
	int sum = 0;

	while (sum < 100)
	{
		std::cout << "数字を入力してください\n";
		scanf_s("%d", &num);

		sum += num;

		std::cout << "合計値： " << sum << "\n";
	}

	// forループで無限ループ
	//for (; ;)
	//{
	//	//std::cout << "数字を入力してください\n";
	//	//scanf_s("%d", &num);

	//	std::cout << num << "\n";
	//}

	//for (num = 0; num < 10; ++num)
	//{
	//	std::cout << num << "\n";
	//}

	//std::cout << "\n";
	//std::cout << num << "\n";
}