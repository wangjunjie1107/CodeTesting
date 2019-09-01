#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//函数指针数组
void func1(int a)
{
	printf("func1的调用\n");
}
void func2(int b)
{
	printf("func2的调用\n");
}
void func3(int c)
{
	printf("func3的调用\n");
}

void test04()
{
	//函数指针数组定义方式
	void(*p[3])(int);

	//指针数组 要以数组的方式给下标赋值
	p[0] = func1;
	p[1] = func2;
	p[2] = func3;

	/*p[0](1);
	p[1](2);
	p[2](3);*/


	for (int i = 0; i < 3;i++)
	{
		p[i](i);
	}

}

int main() {
	
	test04();


	system("pause");
	return EXIT_SUCCESS;
}
