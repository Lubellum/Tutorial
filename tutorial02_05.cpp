#include "tutorial.h"

void Tutorial02_05()
{
	int x = 3;
	int y = 7;
	int z;

	z = x;
	x = y;
	y = z;

	printf("x = %d, y = %d", x, y);
}