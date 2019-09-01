#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//    "xyz" + 1 表示一个指针，指向字符串的第2个字符：y
//    *"xyz"  表示解引用一个指向字符串的指针，结果是：x
//   "xyz"[2]  表示字符z

//神秘函数 根据参数值的一定比例打印相应的星号
void mystery(int n)
{
	
	n /= 10; 
	printf("%s\n", "**********" + 10 - n);
}
int main()
{
	void(*fp)(int) = mystery;//函数指针

	
	fp(100);
	
	system("pause");
	return EXIT_SUCCESS;
}
