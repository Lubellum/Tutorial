#include "tutorial.h"

void Tutorial08_02()
{
	char str[] = "hello world";
	char* p;
	
	p = str;
	//p[0] -= 32;
	//p[6] -= 32;
	*p -= 32;
	*(p + 6) -= 32;

	// 'h'と'w'を大文字にする

	printf("%s\n", str);
}