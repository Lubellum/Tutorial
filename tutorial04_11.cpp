#include "tutorial.h"

void tutorial4_11()
{
	int month = 0;

	std::cout << "������͂��Ă��������B\n";
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		std::cout << "�P���F�����A���l�̓�\n";

	case 2:
		std::cout << "�Q���F�����L�O�̓��A�V�c�a����\n";

	case 3:
		std::cout << "�R���F�t���̓�\n";

	case 4:
		std::cout << "�S���F���a�̓�\n";

	case 5:
		std::cout << "�T���F���@�L�O���A�݂ǂ�̓��A���ǂ��̓�\n";
	
	case 6:

	case 7:
		std::cout << "�V���F�C�̓�\n";

	case 8:

	case 9:
		std::cout << "�X���F�h�V�̓��A�H���̓�\n";

	case 10:
		std::cout << "�P�O���F�̈�̓�\n";

	case 11:
		std::cout << "�P�P���F�����̓��A�ΘJ���ӂ̓�\n";

	case 12:
		break;

	default:
		break;
	}
}