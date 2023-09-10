#include "tutorial.h"
	
// 次のコードに追加し、str の文字列を逆順にして表示するプログラムを完成させなさい。

void tutorial7_12()
{

	char str[] = "Hello World";
	char str2[30];


	// strの要素を逆順にする
	size_t len = strlen(str);
	strcpy_s(str2, len + 1, str); // 終端文字分のバッファサイズが不足していた

	for (int i = 0; i < len; i++)
	{
		str[i] = str2[len - i - 1];
	}

	printf("%s\n", str);
}