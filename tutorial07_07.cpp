#include "tutorial.h"

void Tutorial07_07()
{
	char string[30];

	scanf_s("%s", string, 30);
	size_t len = strlen(string);
	
	for (int i = 0; i < len; i++)
	{
		printf_s("%c", string[len - i - 1]);
		//std::cout << "\n";
	}
	//printf_s("%s", string);
}