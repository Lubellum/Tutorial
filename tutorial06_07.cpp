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
   
    std::cout << "Ï‚ð‹‚ß‚½‚¢”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1‚Â–Ú)\n";
    int x = 0;
    std::cin >> x;

    std::cout << "Ï‚ð‹‚ß‚½‚¢”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(2‚Â–Ú)\n";
    int y = 0;
    std::cin >> y;

    sample.BuildMultiplicationTables();
 
    int result = sample.CaliculateMultiplicationTable(x, y);
    std::cout << result;
}