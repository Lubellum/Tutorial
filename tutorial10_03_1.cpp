#include "tutorial.h"

struct TPoint
{
	int x = 10;
	int y = 20;
};

void DoubleMember(TPoint* aPoint)
{
	aPoint->x *= 2;
	aPoint->y *= 2;
}

void Tutorial10_03_1()
{
	//// スタック領域に確保
	//TPoint point; // スタック
	//
	//DoubleMember(&point);

	//printf_s("%d\n", point.x);
	//printf_s("%d\n", point.y);

	

	// ヒープ領域に確保
	//void*   point = new TPoint; // ヒープ領域 純粋にアドレスだけを渡している。ただ、型がわからないので(どれぐらいオフセットを挟めばよいのか分からず)アロー演算子でメンバにアクセスすることが出来ない
	TPoint* point = new TPoint;   // ヒープ領域
	//TPoint point = new TPoint;    // newでアドレスを渡しているから×
	//point->
	
	DoubleMember(point);
	printf_s("%d\n", point->x);
	printf_s("%d\n", point->y);
}