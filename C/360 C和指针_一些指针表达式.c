#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void test()
{
	char p = 'a';
	char * temp = &p;

	printf("表达式：\n\tchar p = 'a';\n\tchar * temp = &p;\n\n"); //打印表达式

	printf("&p 表示 字符a的地址：%d\n\n\n", &p);
	printf("temp 表示 字符a的地址：%d\n\n\n", temp);
	printf("&temp 表示 字符指针temp的地址：%d\n\n\n", &temp);
	printf("*temp 表示 字符指针temp指向的内存中的值：%c\n\n\n", *temp);
	printf("*temp + 1 表示 字符指针temp指向的内存中的值 再加上1 表示字母b：%c\n\n\n", *temp + 1);
	printf("*(temp + 1) 表示 将字符指针temp指向的内存的位置加1，然后再解引用，结果是未定义的\n\n\n");
	printf("++temp 表示 temp指向的内存的下一个位置,因为未定义，所以结果并不合法：%d\n\n\n");
	printf("temp++ 表示 temp指向的内存的下一个位置，因为未定义，所以结果并不合法\n\n\n");
	printf("*++temp 表示先将指针后移，然后解引用\n\n\n");
	temp = &p;
	printf("*temp++ 表示 ++操作符产生temp的一份拷贝，然后++操作符增加temp的值，最后在temp的拷贝上指向间接访问操作：%c\n\n\n", *temp++);
	temp = &p;
	printf("++*temp 表示 先对temp进行解引用，然后将解引用的值加1:%c\n\n\n", ++*temp);
	temp = &p;
	printf("(*temp)++ 表示 先对temp进行解引用，然后将解引用的值加1  使用后缀表达式进行++，要加括号，因为它的优先级比较高:%c\n\n\n", (*temp)++);
	temp = &p;
	printf("++*++temp 表示 先对temp进行++，然后将解引用，然后对解引用出来的值进行+1  结果是未定义的，因为并没有初始化temp+1的内存\n\n\n");

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
