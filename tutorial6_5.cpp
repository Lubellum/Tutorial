#include "tutorial.h"

// ���̃R�[�h�ɒǉ����A���͂��ꂽ���l�� 16 ���� 2 �i���ŕ\������v���O���������������Ȃ����B

void tutorial6_5()
{
	int binary[16];
	int value;
	int i;

	scanf_s("%d", &value);

	// �z�� binary��0��1��������
	for (i = 15; i >= 0; --i)
	{
		binary[i] = value % 2;
		value /= 2;
	}

	for (i = 0; i < 16; i++)
	{
		printf_s("%d", binary[i]);
	}
}