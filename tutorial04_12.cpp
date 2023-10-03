#include "tutorial.h"

enum BloodType
{
	A = 1,
	B,
	AB,
	O
};

void TypeAManual()
{
	std::cout << "���Ȃ��͑f���炵���l�i���������l�Ԃł��B\n";
	std::cout << "�{���ʂŐ^�ʖڂȂ��Ȃ��͎��肩��̐M���������A\n";
	std::cout << "�听�����������Ă��܂��B\n";
	std::cout << "���ꂩ����^�ʖڂɃR�c�R�c��݂܂��傤�B\n";
}

void TypeBManual()
{
	std::cout << "�Z�C���Ă悭�����܂��B\n";
	std::cout << "�Ղ�Ղ񂷂�̂͂�߂Ă����܂��傤�B\n";
}

void TypeABManual()
{
	std::cout << "AB�^�̂��Ȃ��́A���i�͉����Ȑl�Ȃ̂ɐg���ɂ͂߂����ጵ�����ł��B\n";
	std::cout << "�����̃I�J�������������瑽�������B\n";
}

void TypeOManual()
{
	std::cout << "�����Ɓc1�ԉ�Ɏh����₷���炵���ł��B\n";
	std::cout << "�ď�͋C��t���܂��傤�B\n";
}

void tutorial4_12()
{
	int num = 0;

	std::cout << "�ƒf�ƕΌ��ɖ������A���t�^�f�f�`�`�`�`�`�`�I�I�I�I�I�I�I\n\n\n";
	std::cout << "���Ȃ��̌��t�^�ɑΉ��������l����͂��Ă�������\n";
	std::cout << BloodType::A  << ": A�^\n";
	std::cout << BloodType::B  << ": B�^\n";
	std::cout << BloodType::AB << ": AB�^\n";
	std::cout << BloodType::O  << ": O�^\n";
	scanf_s("%d", &num);

	switch (num)
	{
		case BloodType::A:
			TypeAManual();
			break;

		case BloodType::B:
			TypeBManual();
			break;

		case BloodType::AB:
			TypeABManual();
			break;

		case BloodType::O:
			TypeOManual();
			break;

		default:
			std::cout << "�Y�����鐔�l����͂��Ă�������\n";
			break;
	}
}
