#include "tutorial.h"

void Tutorial07_05()
{
	char string[30];

	// todo: &は必要？ → &はいらない！

	//scanf_s("%s", &string, 30);
	scanf_s("%s", string, 30);

	//printf_s("%s", &string);
	printf_s("%s", string);
}