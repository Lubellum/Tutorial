#include "tutorial.h"

void Tutorial09_07()
{
	char chara = 0;
	scanf_s("%c", &chara, 1);

	if (chara >= 'a' && chara <= 'z')
	{
		chara -= 32;
	}

	printf_s("%c", chara);
}