#include "tutorial.h"
	
// ���̃R�[�h�ɒǉ����Astr �̕�������t���ɂ��ĕ\������v���O���������������Ȃ����B

void tutorial7_12()
{

	char str[] = "Hello World";
	char str2[30];


	// str�̗v�f���t���ɂ���
	size_t len = strlen(str);
	strcpy_s(str2, len + 1, str); // �I�[�������̃o�b�t�@�T�C�Y���s�����Ă���

	for (int i = 0; i < len; i++)
	{
		str[i] = str2[len - i - 1];
	}

	printf("%s\n", str);
}