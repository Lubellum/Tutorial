#include "tutorial.h"
	
// 次のコードに追加し、str の文字列を逆順にして表示するプログラムを完成させなさい。

void tutorial07_12()
{

	char str1[] = "Hello World";
	const int len2 = 30;
	char str2[len2];

	// strの要素を逆順にする
	size_t len = strlen(str1);
	//strcpy_s(str2, len2, str1); // 終端文字分のバッファサイズが不足していた?

	//for (int i = 0; i < len; i++)
	//{
	//	str1[i] = str2[len - i - 1];
	//}

	for (int i = 0; i < len; i++)
	{
		str2[i] = str1[len - i - 1];
	}

	str2[len] = 0;

	printf("%s\n", str2);
}