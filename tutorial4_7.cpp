#include "tutorial.h"

class tutorial4_7
{
public:

	void JudgeGrades1();
	void JudgeGrades2();
	void JudgeGrades3();

	//void JudgeGrades1(int x);
	//void JudgeGrades2(int x);
	//void JudgeGrades3(int x);
};

void tutorial4_7::JudgeGrades1()
{
	int x = 0;

	std::cout << "�e�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &x);

	if (x >= 60)
	{
		std::cout << "���i�ł�\n";
	}
	else
	{
		std::cout << "�s���i�ł�\n";
	}
}

void tutorial4_7::JudgeGrades2()
{
	int x = 0;

	std::cout << "�e�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &x);

	if (x >= 80)
	{
		std::cout << "�����ւ�悭�ł��܂���\n";
	}
	else if (x >= 60)
	{
		std::cout << "�悭�ł��܂���\n";
	}
	else
	{
		std::cout << "����˂�ł���\n";
	}
}

void tutorial4_7::JudgeGrades3()
{
	int x = 0;

	std::cout << "�e�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &x);

	if (x >= 80)
	{
		std::cout << "�D\n";
	}
	else if (x >= 70)
	{
		std::cout << "��\n";
	}
	else if (x >= 60)
	{
		std::cout << "��\n";
	}
	else
	{
		std::cout << "�s��\n";
	}
}