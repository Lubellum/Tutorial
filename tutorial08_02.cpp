#include "tutorial.h"

void tutorial08_02()
{
	char str[] = "hello world";
	char* p;
	
	p = str;
	*p -= 32;
	*(p + 6) -= 32;

	// 'h'��'w'��啶���ɂ���

	printf("%s\n", str);
}