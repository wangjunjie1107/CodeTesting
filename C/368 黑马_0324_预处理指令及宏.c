#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//预处理指令
//1 头文件包含
// "" 自定义头文件 <> 系统头文件

//2 宏定义
//宏常量 不重视作用域
//没有数据类型
//可以利用 #undef 卸载宏
//宏函数 用于频繁短小的函数  封装为宏函数
//声明时候 主要保证运算完整性

void test01()
{
	#define MAX 1000
	#undef MAX
}


//3 条件编译
#define DEBUG
#ifdef DEBUG
#if 0
void func()
{
	printf("debug1\n");
}
#else
void func()
{
	printf("debug2\n");
}
#endif

#else
void func()
{
	printf("release版本调用\n");
}
#endif

void func1(char * p)
{
	if (p == NULL)
	{
		//__LINE__ 当前行
		// __FILE__ 当前文件 绝对路径
		printf("文件：%s 的 %d 行出错了！\n", __FILE__, __LINE__);
		
		//当前日期
		printf("日期：%s\n", __DATE__);

		//当前时间  左右为两个下划线
		printf("时间：%s\n", __TIME__);
	}

	return;
}

//特殊宏
void test02()
{
	func1(NULL);
}

int main()
{
	func();

	//printf("%d\n", MAX);

	test02();

	system("pause");
	return EXIT_SUCCESS;
}

