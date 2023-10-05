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

	// 'h'‚Æ'w'‚ð‘å•¶Žš‚É‚·‚é

	printf("%s\n", str);
}