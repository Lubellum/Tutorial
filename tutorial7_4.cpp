#include "tutorial.h"

//���̃R�[�h�ɒǉ����A���͂��ꂽ���l�� 16 ���� 2 �i���ŕ\������v���O���������������Ȃ����B

void tutorial7_4()
{

	char sbinary[17];
	int value;
	int i;

	scanf_s("%d", &value);

	//bool numberJudge = isdigit(value);
	for (i = 15; i >= 0; --i)
	{
		sbinary[i] = '0' + (value % 2);
		value /= 2;
	}
	//if (numberJudge)
	//{
	//}

	// �z�� sbinary��'0'��'1'��������

	sbinary[16] = 0;
	printf_s("%s", sbinary);
}