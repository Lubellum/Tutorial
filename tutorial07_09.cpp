#include "tutorial.h"

void tutorial7_9()
{
	const int count = 20;
	char string[5 * count + 1];
	//char string2[] = "SPAM";
	//string = string2;
	
	for (int i = 0; i < count; i++)
	{
		string[(5 * i) + 0] = 'S';
		string[(5 * i) + 1] = 'P';
		string[(5 * i) + 2] = 'A';
		string[(5 * i) + 3] = 'M';
		string[(5 * i) + 4] = ' ';
	}

	string[5 * count] = 0;

	printf_s("%s", string);
	//printf_s("%s", string[5 * count]);
}