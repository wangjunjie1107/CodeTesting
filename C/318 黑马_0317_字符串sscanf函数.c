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


//跳过数据
void test01()
{
	char buf[1024] = { 0 };
	//跳过前面的数字
	//匹配第一个字符是否是数字，如果是，则跳过
	//如果不是则停止匹配
	sscanf("123456aaaa", "%*d%s", buf);
	printf("buf:%s\n", buf);
}

//读取指定宽度的数据
void test02()
{
	char buf[1024] = { 0 };
	sscanf("123456aaaa", "%7s", buf);
	printf("buf:%s\n", buf);
}

//匹配字符 a-z
void test03()
{
	char buf[1024] = { 0 };
	//跳过前面的数字
	//先匹配第一个字符，判断字符是否是 a-z 中的字符，如果是匹配
	//如果不是停止匹配
	sscanf("1abciabriav5555", "%*d%[a-z]", buf);
	printf("buf:%s\n", buf);
}

//匹配字符 aBc 中的任何一个
void test04()
{
	char buf[1024] = { 0 };
	//跳过前面的数字
	//先匹配第一个字符是否是 aBc 中的一个，如果是，则匹配，如果不是则停止匹配
	//直到第一个不是aBc的字符，就停止匹配
	sscanf("1BcccBBBcaasssascacsacscabciabriav5555", "%*d%[aBc]", buf);
	printf("buf:%s\n", buf);
}

//匹配非a的字符
void test05()
{
	char buf[1024] = { 0 };
	//跳过前面的数字
	//先匹配第一个字符是否不是a，如果是，则匹配，如果不是则停止匹配
	sscanf("1BcccBBBcaasssascacsacscabciabriav5555", "%*d%[^a]", buf);
	printf("buf:%s\n", buf);
}


//匹配非a - z 的任意字符
void test06()
{
	char buf[1024] = { 0 };
	//跳过前面的数字
	//先匹配第一个字符是否是a-z，如果不是，则匹配，如果是则停止匹配
	sscanf("1221432BcccBBBcaasssascacsacscabciabriav5555", "%[^a-z]", buf);
	printf("buf:%s\n", buf);
}
int main()
{
	//跳过字符
	//test01();
	
	//读取指定宽度的数据
	//test02();

	//匹配字符a-z
	//test03();

	//匹配字符 aBc 中的任何一个
	//test04();

	//匹配非a的字符
	//test05();

	//匹配非a - z 的任意字符
	test06();
	system("pause");
	return EXIT_SUCCESS;
}
