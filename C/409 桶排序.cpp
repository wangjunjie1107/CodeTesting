#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void test01()
{
	int book[1001], i, j, t, n;
	
	//置空
	for ( i = 0; i < 1001; i++)
	{
		book[i] = 0;
	}

	//将要输入n个数
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		//把输入的数记录在相应的下标中
		//相应的数的下标加1
		scanf("%d", &t);
		book[t]++;
	}

	//降序扫描 先打印大的数字 从1000开始
	for (i = 1000; i >= 0; i--)
	{
		for (j = 1; j <= book[i]; j++)
		{
			printf("%d  ", i);//下标中的值为几，说明要打印几次
		}
	}


	
}




void test02()
{
	
}


int main()
{
	test01();	
	//test02();

	system("pause");
	return EXIT_SUCCESS;
}
