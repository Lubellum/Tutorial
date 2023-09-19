#include "tutorial.h"

// 次のコードに追加し、str1 に str2 を結合して表示するプログラムを完成させなさい。

void tutorial07_11()
{
	const int max = 100;
	char    str1[max] = "Hello ";
	char    str2[]    = "World";
	//char    str2[] = "Worldaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	// str1にstr2を結合する
	//int len1 = strlen(str1);
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);

	//for (int i = 0, j = 0; j < len2; ++i ,++j)
	//{
	//	str1[len1 + i] = str2[j];
	//}

	assert(len1 + len2 < max);

	for (int i = 0; i < len2; ++i)
	{
		str1[len1 + i] = str2[i];
	}

	printf("%s\n", str1);
}