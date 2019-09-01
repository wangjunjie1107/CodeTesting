#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//加一个判断，如果是C++编译器运行下面这个文件，就用C的方式链接里面的函数

#ifdef __cplusplus //两个下划线 __ c plus  plus
extern "C" {
#endif 


#pragma  once
#include <stdio.h>

	void show();

#ifdef __cplusplus
}
#endif 


void show()
{
	printf("hello world\n");
}


//特殊声明：告诉编译器 后面show函数 不要用C++的方式链接，用C语言方式链接
extern "C" void show();

void test01()
{
	show(); // C++下可能将函数名称改为： _Z4showv
}

int main() {

	test01();


	system("pause");
	return EXIT_SUCCESS;
}


