#include "tutorial.h"

void Tutorial04_11()
{
	int month = 0;

	std::cout << "月を入力してください。\n";
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		std::cout << "１月：元日、成人の日\n";

	case 2:
		std::cout << "２月：建国記念の日、天皇誕生日\n";

	case 3:
		std::cout << "３月：春分の日\n";

	case 4:
		std::cout << "４月：昭和の日\n";

	case 5:
		std::cout << "５月：憲法記念日、みどりの日、こどもの日\n";
	
	case 6:

	case 7:
		std::cout << "７月：海の日\n";

	case 8:

	case 9:
		std::cout << "９月：敬老の日、秋分の日\n";

	case 10:
		std::cout << "１０月：体育の日\n";

	case 11:
		std::cout << "１１月：文化の日、勤労感謝の日\n";

	case 12:
		break;

	default:
		break;
	}
}