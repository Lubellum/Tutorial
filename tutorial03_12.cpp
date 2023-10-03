#include "tutorial.h"

void tutorial3_12()
{
	int x;

	printf_s("‹M•û‚Ì”N—î‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &x);

	int LivedDate = x * 365;

	std::cout << "‚ ‚È‚½‚ª‚±‚ê‚Ü‚Å¶‚«‚Ä‚«‚½“ú”‚Í–ñ " << LivedDate << " “ú‚Å‚·B" << "\n";
}