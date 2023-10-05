#include "tutorial.h"
#include "tutorial06_07.h"

void CTutorial06_07::BuildMultiplicationTables()
{
    for (int y = 0; y < 9; y++)
    {
        for (int x = 0; x < 9; x++)
        {
            mKuku[y][x] = (y + 1) * (x + 1);
        }
    }
}

int CTutorial06_07::CaliculateMultiplicationTable(int x, int y)
{
    int result = mKuku[x - 1][y - 1];
    return result;
}

void CTutorial06_07()
{
    class CTutorial06_07 sample;
   
    std::cout << "�ς����߂�����������͂��Ă�������(1��)\n";
    int x = 0;
    std::cin >> x;

    std::cout << "�ς����߂�����������͂��Ă�������(2��)\n";
    int y = 0;
    std::cin >> y;

    sample.BuildMultiplicationTables();
 
    int result = sample.CaliculateMultiplicationTable(x, y);
    std::cout << result;
}