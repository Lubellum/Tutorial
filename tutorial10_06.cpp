#include "tutorial.h"

struct TPosition
{
    double latitude;     // �ܓx
    double longitude;    // �o�x
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
        printf_s("%s: �ܓx:%lf �o�x:%lf\n", &aCity[i].name, aCity[i].pos.latitude, aCity[i].pos.longitude);
    }
}

void Tutorial10_06()
{
    struct TCityinfo aCity[] =
    { 
        { "����",   35.41, 139.45 },
        { "���",   34.41, 135.29 },
        { "���É�", 35.11, 136.54 }
    };

    ShowCityinfo(aCity, 3);
}