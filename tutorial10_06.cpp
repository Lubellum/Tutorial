#include "tutorial.h"

struct TPosition
{
    double latitude;     // 緯度
    double longitude;    // 経度
};

struct TCityinfo
{
    char name[50];
    TPosition pos;
};

void ShowCityinfo(TCityinfo* aCity, int aCount)
{
    for (int i = 0; i < aCount; i++)
    {
        printf_s("%s: 緯度:%lf 経度:%lf\n", &aCity[i].name, aCity[i].pos.latitude, aCity[i].pos.longitude);
    }
}

void Tutorial10_06()
{
    struct TCityinfo aCity[] =
    { 
        { "東京",   35.41, 139.45 },
        { "大阪",   34.41, 135.29 },
        { "名古屋", 35.11, 136.54 }
    };

    ShowCityinfo(aCity, 3);
}