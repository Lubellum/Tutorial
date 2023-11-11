#include "tutorial.h"

struct TExamResult
{
	char name[40];
	int score = 50;	
	char judgeGrade;
};

char JudgeGrade(const TExamResult &aStudent)
{
	if (aStudent.score >= 80)
	{
		return 'A';
	}
	else if (aStudent.score >= 70)
	{
		return 'B';
	}
	else if (aStudent.score >= 60)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}

void Tutorial10_04()
{
	TExamResult student1;

	// scanf�͒l�����������Ă��邩��A�ϐ��̐擪�̃A�h���X���K�v���@������
	printf_s("���k�̖��O�́H\n");
	scanf_s("%s", student1.name, 40);
	printf_s("�e�X�g�̓_���́H\n");
	scanf_s("%d", &student1.score);

	student1.judgeGrade = JudgeGrade(student1);

	printf_s("���k��  :%s\n", student1.name);
	printf_s("�_��    :%d\n", student1.score);
	printf_s("���є���:%c\n", student1.judgeGrade);
}