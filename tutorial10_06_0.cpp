struct POSITION
{
    double  latitude;     // �ܓx
    double  longitude;    // �o�x
};

struct CITYINFO
{
    char    name[50];
    struct POSITION    pos;
};

void ShowCityInfo(struct CITYINFO* aCity, int count)
{
    /* ���̕������L�q���� */
}

void sub(void)
{
    struct CITYINFO aCity[] = { { "����", 35.41, 139.45 },
                                { "���", 34.41, 135.29 },
                                { "���É�", 35.11, 136.54 } };

    ShowCityInfo(aCity, 3);
}