#include "tutorial.h"

//�Q�̐����̑傫������I�Ԋ֐����쐬���Ȃ����B�Q�� int �^���������A�傫�����̐��l��߂�l�Ƃ��ĕԂ����ƁB

//�܂��Aint �^�̕ϐ� x�Ay�Az �ɂ��ꂼ�ꐔ�l����͂��A�쐬�����֐����g�p���čł��傫�����l��\������v���O�������쐬���Ȃ����B

namespace
{

	int ConparisonNumber(int aLeft, int aRight)
	{
		if (aLeft > aRight)
		{
			return aLeft;
		}
		else
		{
			return aRight;
		}
	}

	int ConparisonNumber(int aX, int aY, int aZ)
	{
		if ( ConparisonNumber(aX, aY) == ConparisonNumber(aX, aZ) )
		{
			return aX;
		}
		else if (ConparisonNumber(aY, aX) == ConparisonNumber(aY, aZ))
		{
			return aY;
		}
		else
		{
			return aZ;
		}
	}

}

void Tutorial09_03_1()
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf_s("��������͂��Ă�������(2��)\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	int biggerNum = ConparisonNumber(x, y);
	printf_s("�u%d�v�̕����傫���ł��B\n", biggerNum);

	
	printf_s("��������͂��Ă�������(3��)\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	int biggestNum = ConparisonNumber(x, y, z);
	printf_s("�u%d�v����ԑ傫���ł��B\n", biggestNum);
}