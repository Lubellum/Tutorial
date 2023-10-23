#include "tutorial.h"

// �|�C���^�n��
void Swap(int * aNum1, int * aNum2)
{
	int num0 = 0;

	num0 = *aNum1;
	*aNum1 = *aNum2;
	*aNum2 = num0;
}

// �Q�Ɠn��
//void Swap(const int &aNum1, const int &aNum2)
//{
//	int num0 = 0;
//
//	num0 = aNum1;
//	aNum1 = aNum2;
//	aNum2 = num0;
//}

void Tutorial09_09()
{
	const int count = 10;
	int numbers[count] = {};

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &numbers[i]);
	}

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				// �|�C���^�n��
				Swap(&numbers[j], &numbers[j + 1]);

				// �Q�Ɠn��
				//Swap(numbers[j], numbers[j + 1]);
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << numbers[i] << "\n";
	}
}