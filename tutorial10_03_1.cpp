#include "tutorial.h"

struct TPoint
{
	int x = 10;
	int y = 20;
};

void DoubleMember(TPoint* aPoint)
{
	aPoint->x *= 2;
	aPoint->y *= 2;
}

void Tutorial10_03_1()
{
	//// �X�^�b�N�̈�Ɋm��
	//TPoint point; // �X�^�b�N
	//
	//DoubleMember(&point);

	//printf_s("%d\n", point.x);
	//printf_s("%d\n", point.y);

	

	// �q�[�v�̈�Ɋm��
	//void*   point = new TPoint; // �q�[�v�̈� �����ɃA�h���X������n���Ă���B�����A�^���킩��Ȃ��̂�(�ǂꂮ�炢�I�t�Z�b�g�����߂΂悢�̂������炸)�A���[���Z�q�Ń����o�ɃA�N�Z�X���邱�Ƃ��o���Ȃ�
	TPoint* point = new TPoint;   // �q�[�v�̈�
	//TPoint point = new TPoint;    // new�ŃA�h���X��n���Ă��邩��~
	//point->
	
	DoubleMember(point);
	printf_s("%d\n", point->x);
	printf_s("%d\n", point->y);
}