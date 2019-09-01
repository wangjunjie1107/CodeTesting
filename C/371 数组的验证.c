#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{

	int arr[][3] =
	{
		{1,2,3},
		{ 4,5,6},
		{ 7,8,9 },
	};

	for (int i = 0;i < 3;i++)
	{
		//先与数组下标[]结合，再与解引用标志结合
		printf("%d\n", *(arr)[i]);//二维数组名 加 1，移动的步长为 一个一维数组
	}

	int(*p)[3] = arr;//指向数组的指针 p = arr
	
	printf("p = %d\n", p);
	printf("arr = %d\n", arr);

	printf("%d\n", **(p + 1));//每次p加1移动一个一维数组的距离
	printf("%d\n", *(*p+1));//	而p解引用一次后，就变成了指向一维数组的指针，一次加1，移动一个int的距离



	system("pause");
	return EXIT_SUCCESS;
}