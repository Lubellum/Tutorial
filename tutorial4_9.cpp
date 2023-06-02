#include "tutorial.h"

void tutorial4_9()
{
	int DayofWeek = 0;
	int PeriodofTime = 0;

	std::cout << "fŽ@‚·‚é—j“ú‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	std::cout << "“ú:0@ŒŽ:1@‰Î:2@…:3@–Ø:4@‹à:5@“y:6\n";
	scanf_s("%d", &DayofWeek);

	std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	std::cout << "Œß‘O:0@ŒßŒã:1@–éŠÔ:2\n";
	scanf_s("%d", &PeriodofTime);


	switch (DayofWeek)
	{
	case 0:

		if (PeriodofTime == 0)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}
		break;

	case 1:

		if (PeriodofTime == 0)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}
		break;

	case 2:

		if (PeriodofTime == 0)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}

	case 3:

		if (PeriodofTime == 0)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}
		break;

	case 4:

		if (PeriodofTime == 0)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}
		break;

	case 5:

		if (PeriodofTime == 0)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}
		break;

	case 6:

		if (PeriodofTime == 0)
		{
			std::cout << "‰c‹Æ’†‚Å‚·\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "‹xf‚Å‚·\n";
		}
		else
		{
			std::cout << "fŽ@‚·‚éŽžŠÔ‘Ñ‚Í0,1,2‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		}
		break;

	default:
		std::cout << "fŽ@‚·‚é—j“ú‚Í0,1,2,3,4,5,6‚Ì’†‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
		break;
	}
}