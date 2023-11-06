#include "tutorial.h"

struct TPoint
{
	int x = 0;
	int y = 0;
};

TPoint DoubleMember(TPoint aPoint)
{
	aPoint.x *= 2;
	aPoint.y *= 2;

	return aPoint;
}

void Tutorial10_03_2()
{
	TPoint point;

	point.x = 2;
	point.y = 3;

	point = DoubleMember(point);

	printf_s("%d\n", point.x);
	printf_s("%d\n", point.y);
}