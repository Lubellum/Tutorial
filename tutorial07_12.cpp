#include "tutorial.h"
	
// ���̃R�[�h�ɒǉ����Astr �̕�������t���ɂ��ĕ\������v���O���������������Ȃ����B

void tutorial07_12()
{

	char str1[] = "Hello World";
	const int len2 = 30;
	char str2[len2];

	// str�̗v�f���t���ɂ���
	size_t len = strlen(str1);
	//strcpy_s(str2, len2, str1); // �I�[�������̃o�b�t�@�T�C�Y���s�����Ă���?

	//for (int i = 0; i < len; i++)
	//{
	//	str1[i] = str2[len - i - 1];
	//}

	for (int i = 0; i < len; i++)
	{
		str2[i] = str1[len - i - 1];
	}

	str2[len] = 0;

	printf("%s\n", str2);
}