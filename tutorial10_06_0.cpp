struct POSITION
{
    double  latitude;     // 緯度
    double  longitude;    // 経度
};

struct CITYINFO
{
    char    name[50];
    struct POSITION    pos;
};

void ShowCityInfo(struct CITYINFO* aCity, int count)
{
    /* この部分を記述する */
}

void sub(void)
{
    struct CITYINFO aCity[] = { { "東京", 35.41, 139.45 },
                                { "大阪", 34.41, 135.29 },
                                { "名古屋", 35.11, 136.54 } };

    ShowCityInfo(aCity, 3);
}