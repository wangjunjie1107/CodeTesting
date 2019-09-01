#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
		%*s 或 %*d 跳过数据

		%[width]s 读指定宽度的数据

		%[a-z] 匹配 a 到 z 中任意字符(尽可能多的匹配)

		%[aBc] 匹配 a、B、c 中一员，贪婪性

		%[^a] 匹配非 a 的任意字符，贪婪性

		%[^a-z] 表示读取除 a-z 以外的所有字符
*/

void test()
{
	char buf[1024] = { 0 };
	sscanf("123abcd$myname@000qwe", "%*3d%*5s%6s", buf);
	printf("%s\n", buf);

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
