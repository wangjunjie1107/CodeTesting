#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//用迭代的方法计算斐波那契数列
void test01(int n)
{
	long result;
	long previous_result;
	long next_old_result;

	result = previous_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_old_result = previous_result;
		previous_result = result;
		result = next_old_result + previous_result;
	}

	printf("%d\n", result);
	return;
}

//用递归方法计算斐波那契数列 效率很低 很多值被重复计算了多次
//当你使用递归方式实现一个函数之前，先问问你自己使用递归带来的好处是否抵得上它的代价。
//而且你必须小心：这个代价可能比初看上去要大的多
long test02(int n)
{
	int result;
	if (n <= 2)
		return 1;

	else
		return test02(n - 1) + test02(n - 2);
}
int main() 
{
	//用迭代的方法计算斐波那契数列
	int n = 3;
	test01(n);

	//用递归方法计算斐波那契数列
	long result;
	result = test02(n);
	printf("%d\n", result);

	system("pause");
	return EXIT_SUCCESS;
}
