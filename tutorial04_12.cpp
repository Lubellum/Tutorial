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
	std::cout << "あなたは素晴らしい人格を持った人間です。\n";
	std::cout << "几帳面で真面目なあなたは周りからの信頼も厚く、\n";
	std::cout << "大成する器を持っています。\n";
	std::cout << "これからも真面目にコツコツ励みましょう。\n";
}

void TypeBManual()
{
	std::cout << "短気ってよく聞きます。\n";
	std::cout << "ぷんぷんするのはやめておきましょう。\n";
}

void TypeABManual()
{
	std::cout << "AB型のあなたは、普段は温厚な人なのに身内にはめっちゃ厳しいです。\n";
	std::cout << "うちのオカンがそうだから多分そう。\n";
}

void TypeOManual()
{
	std::cout << "えっと…1番蚊に刺されやすいらしいです。\n";
	std::cout << "夏場は気を付けましょう。\n";
}

void Tutorial04_12()
{
	int num = 0;

	std::cout << "独断と偏見に満ちた、血液型診断〜〜〜〜〜〜！！！！！！！\n\n\n";
	std::cout << "あなたの血液型に対応した数値を入力してください\n";
	std::cout << BloodType::A  << ": A型\n";
	std::cout << BloodType::B  << ": B型\n";
	std::cout << BloodType::AB << ": AB型\n";
	std::cout << BloodType::O  << ": O型\n";
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
			std::cout << "該当する数値を入力してください\n";
			break;
	}
}
