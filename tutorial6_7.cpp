#include "tutorial.h"
#include "tutorial6_7.h"

void tutorial6_7::buildMultiplicationTables()
{
    for (int y = 0; y < 9; y++)
    {
        for (int x = 0; x < 9; x++)
        {
            mKuku[y][x] = (y + 1) * (x + 1);
        }
    }
}

int tutorial6_7::caliculateMultiplicationTable(int x, int y)
{
    int result = mKuku[x - 1][y - 1];
    return result;
}

void tutorial6_7()
{
    class tutorial6_7 sample;
   
    std::cout << "Ï‚ð‹‚ß‚½‚¢”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1‚Â–Ú)\n";
    int x = 0;
    std::cin >> x;

    std::cout << "Ï‚ð‹‚ß‚½‚¢”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(2‚Â–Ú)\n";
    int y = 0;
    std::cin >> y;

    sample.buildMultiplicationTables();
 
    int result = sample.caliculateMultiplicationTable(x, y);
    std::cout << result;
}