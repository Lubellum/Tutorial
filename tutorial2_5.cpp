#include "tutorial.h"

void tutorial2_5()
{
	int x = 3;
	int y = 7;
	int z;

	z = x;
	x = y;
	y = z;

	printf("x = %d, y = %d", x, y);
}