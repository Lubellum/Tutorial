#include "tutorial.h"

void tutorial4_9()
{
	int DayofWeek = 0;
	int PeriodofTime = 0;

	std::cout << "�f�@����j������͂��Ă�������\n";
	std::cout << "��:0�@��:1�@��:2�@��:3�@��:4�@��:5�@�y:6\n";
	scanf_s("%d", &DayofWeek);

	std::cout << "�f�@���鎞�ԑт���͂��Ă�������\n";
	std::cout << "�ߑO:0�@�ߌ�:1�@���:2\n";
	scanf_s("%d", &PeriodofTime);


	switch (DayofWeek)
	{
	case 0:

		if (PeriodofTime == 0)
		{
			std::cout << "�x�f�ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�x�f�ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�x�f�ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}
		break;

	case 1:

		if (PeriodofTime == 0)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}
		break;

	case 2:

		if (PeriodofTime == 0)
		{
			std::cout << "�x�f�ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}

	case 3:

		if (PeriodofTime == 0)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�x�f�ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}
		break;

	case 4:

		if (PeriodofTime == 0)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}
		break;

	case 5:

		if (PeriodofTime == 0)
		{
			std::cout << "�x�f�ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}
		break;

	case 6:

		if (PeriodofTime == 0)
		{
			std::cout << "�c�ƒ��ł�\n";
		}
		else if (PeriodofTime == 1)
		{
			std::cout << "�x�f�ł�\n";
		}
		else if (PeriodofTime == 2)
		{
			std::cout << "�x�f�ł�\n";
		}
		else
		{
			std::cout << "�f�@���鎞�ԑт�0,1,2�̒�����I�����Ă�������\n";
		}
		break;

	default:
		std::cout << "�f�@����j����0,1,2,3,4,5,6�̒�����I�����Ă�������\n";
		break;
	}
}