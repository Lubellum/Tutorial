#include "tutorial.h"

enum BloodType
{
	A = 1,
	B,
	AB,
	O
};

void TypeAManual()
{
	std::cout << "‚ ‚È‚½‚Í‘f°‚ç‚µ‚¢lŠi‚ðŽ‚Á‚½lŠÔ‚Å‚·B\n";
	std::cout << "™{’ –Ê‚Å^–Ê–Ú‚È‚ ‚È‚½‚ÍŽü‚è‚©‚ç‚ÌM—Š‚àŒú‚­A\n";
	std::cout << "‘å¬‚·‚éŠí‚ðŽ‚Á‚Ä‚¢‚Ü‚·B\n";
	std::cout << "‚±‚ê‚©‚ç‚à^–Ê–Ú‚ÉƒRƒcƒRƒc—ã‚Ý‚Ü‚µ‚å‚¤B\n";
}

void TypeBManual()
{
	std::cout << "’Z‹C‚Á‚Ä‚æ‚­•·‚«‚Ü‚·B\n";
	std::cout << "‚Õ‚ñ‚Õ‚ñ‚·‚é‚Ì‚Í‚â‚ß‚Ä‚¨‚«‚Ü‚µ‚å‚¤B\n";
}

void TypeABManual()
{
	std::cout << "ABŒ^‚Ì‚ ‚È‚½‚ÍA•’i‚Í‰·Œú‚Èl‚È‚Ì‚Ég“à‚É‚Í‚ß‚Á‚¿‚áŒµ‚µ‚¢‚Å‚·B\n";
	std::cout << "‚¤‚¿‚ÌƒIƒJƒ“‚ª‚»‚¤‚¾‚©‚ç‘½•ª‚»‚¤B\n";
}

void TypeOManual()
{
	std::cout << "‚¦‚Á‚Æc1”Ô‰á‚ÉŽh‚³‚ê‚â‚·‚¢‚ç‚µ‚¢‚Å‚·B\n";
	std::cout << "‰Äê‚Í‹C‚ð•t‚¯‚Ü‚µ‚å‚¤B\n";
}

void tutorial4_12()
{
	int num = 0;

	std::cout << "“Æ’f‚Æ•ÎŒ©‚É–ž‚¿‚½AŒŒ‰tŒ^f’f``````IIIIIII\n\n\n";
	std::cout << "‚ ‚È‚½‚ÌŒŒ‰tŒ^‚É‘Î‰ž‚µ‚½”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	std::cout << BloodType::A  << ": AŒ^\n";
	std::cout << BloodType::B  << ": BŒ^\n";
	std::cout << BloodType::AB << ": ABŒ^\n";
	std::cout << BloodType::O  << ": OŒ^\n";
	scanf_s("%d", &num);

	switch (num)
	{
		case BloodType::A:
			TypeAManual();
			break;

		case BloodType::B:
			TypeBManual();
			break;

		case BloodType::AB:
			TypeABManual();
			break;

		case BloodType::O:
			TypeOManual();
			break;

		default:
			std::cout << "ŠY“–‚·‚é”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
			break;
	}
}
