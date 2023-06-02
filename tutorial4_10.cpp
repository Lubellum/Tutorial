#include "tutorial.h"

void tutorial4_10()
{
	int x = 0;
	int y = 0;

	std::cout << "①xに数値を代入してください\n";
	scanf_s("%d", &x);

	std::cout << "②yに数値を代入してください\n";
	scanf_s("%d", &y);

	int xEven     = (x % 2 == 0);
	int xOdd      = (x % 2 == 1);
	int xPositive = (x >= 0);
	int xNegarive = (x < 0);

	int yEven     = (y % 2 == 0);
	int yOdd      = (y % 2 == 1);
	int yPositive = (y >= 0);
	int yNegarive = (y < 0);

	if (x < y && xEven && yEven)
	{
		std::cout << "xはyより小さく、かつ、xとyは共に偶数である。\n";
	}
	else if (x == y && xNegarive)
	{
		std::cout << "xとyは等しく、かつ、負の数である。\n";
	}
	else if (x < y || xEven)
	{
		std::cout << "xはyより小さい、または、xは偶数である。\n";
	}
	else if ((x <= 10 || x >= 100) && (y >= 10 && y <= 100)) // (10 <= y <= 100)
	{
		std::cout << "xは10以下または100以上で、かつ、yは10以上かつ100以下である。\n";
	}
	else if (!(xNegarive && yNegarive))
	{
		std::cout << "「xとyがどちらも負の数」ではない\n";
	}
	else
	{
		std::cout << "(_´Д｀)ﾉ~~ｵﾂｶﾚｰ\n";
	}
}