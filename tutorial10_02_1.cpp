#include "tutorial.h"

struct TPrecipitation
{
	enum num : int
	{
		january, // 0Žn‚Ü‚è
		february,
		march,
		april,
		may,
		june,
		july,
		august,
		september,
		october,
		nobember,
		december, // 12ŒŽ(ŽÀ’l‚Í11)

		max,
	};

	int month[num::max];
	int precipitation[num::max];
};

void Tutorial10_02_1()
{
	TPrecipitation precipitation;
	
	//precipitation.month[0] = 1;
	//precipitation.precipitation[0] = 100;

	//precipitation.month[1] = 2;
	//precipitation.precipitation[1] = 150;

	//precipitation.month[2] = 3;
	//precipitation.precipitation[2] = 200;

	//precipitation.month[3] = 4;
	//precipitation.precipitation[3] = 250;

	precipitation.month[TPrecipitation::num::january] = 1;
	precipitation.precipitation[TPrecipitation::num::january] = 100;

	precipitation.month[TPrecipitation::num::february] = 2;
	precipitation.precipitation[TPrecipitation::num::february] = 150;

	precipitation.month[TPrecipitation::num::march] = 3;
	precipitation.precipitation[TPrecipitation::num::march] = 200;

	precipitation.month[TPrecipitation::num::april] = 4;
	precipitation.precipitation[TPrecipitation::num::april] = 250;

	for (int i = 0; i < 4; i++)
	{
		std::cout << precipitation.month[i] << "ŒŽF" << precipitation.precipitation[i] << "mm\n";
	}
}