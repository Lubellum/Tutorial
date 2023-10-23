#include "tutorial.h"

void UpperAlphabet(char aChara)
{
	if (aChara >= 'a' && aChara <= 'z')
	{
		aChara -= 32;
	}
}

void Tutorial09_07()
{
	char chara = 0;
	scanf_s("%c", &chara, 1);

	UpperAlphabet(chara);

	printf_s("%c", chara);
}