#include "tutorial.h"

void Tutorial03_12()
{
	int x;

	printf_s("‹M•û‚Ì”N—î‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &x);

	int livedDate = x * 365;

	std::cout << "‚ ‚È‚½‚ª‚±‚ê‚Ü‚Å¶‚«‚Ä‚«‚½“ú”‚Í–ñ " << livedDate << " “ú‚Å‚·B" << "\n";
}