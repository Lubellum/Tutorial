#include "tutorial.h"

void Tutorial07_03_1()
{
	char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's','t','u','v','w','x','y','z' };
	//char alhabet = 'a';
	int size = sizeof(alphabet);

	int number;

	std::cin >> number;

	//printf_s("%s", alphabet);

	for (int i = 0; i < size; i++)
	{
		std::cout << alphabet[i] << " ";
		
		if ( (i + 1) % number == 0)
		{
			std::cout << "\n";
		}
	}
}