#include "tutorial.h"

void Ttutorial04_13()
{
	int month = 0;

	std::cout << "������͌��̓�����\������v���O�����ł��B\n";
	std::cout << "�m�F������������͂��Ă��������B\n";

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
		
		std::cout << "31���ł�\n";
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		
		std::cout << "30���ł�\n";
		break;

	case 2:
		std::cout << "28���ł�\n";
		break;

		default:
			std::cout << "�Y�����鐔�l����͂��Ă�������\n";
			break;
	}
}