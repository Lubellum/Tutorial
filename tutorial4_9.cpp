#include "tutorial.h"

void tutorial4_9()
{
	int DayofWeek = 0;
	int PeriodofTime = 0;

	std::cout << "診察する曜日を入力してください\n";
	std::cout << "日:0　月:1　火:2　水:3　木:4　金:5　土:6\n";
	scanf_s("%d", &DayofWeek);

	std::cout << "診察する時間帯を入力してください\n";
	std::cout << "午前:0　午後:1　夜間:2\n";
	scanf_s("%d", &PeriodofTime);


	switch (DayofWeek)
	{
	case 0:

		if (PeriodofTime == 0)
		{
			std::cout << "休診です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "休診です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "休診です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}
		break;

	case 1:

		if (PeriodofTime == 0)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "営業中です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}
		break;

	case 2:

		if (PeriodofTime == 0)
		{
			std::cout << "休診です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "営業中です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}

	case 3:

		if (PeriodofTime == 0)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "休診です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}
		break;

	case 4:

		if (PeriodofTime == 0)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "営業中です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}
		break;

	case 5:

		if (PeriodofTime == 0)
		{
			std::cout << "休診です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "営業中です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}
		break;

	case 6:

		if (PeriodofTime == 0)
		{
			std::cout << "営業中です\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "休診です\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "休診です\n";
		}
		else
		{
			std::cout << "診察する時間帯は0,1,2の中から選択してください\n";
		}
		break;

	default:
		std::cout << "診察する曜日は0,1,2,3,4,5,6の中から選択してください\n";
		break;
	}
}