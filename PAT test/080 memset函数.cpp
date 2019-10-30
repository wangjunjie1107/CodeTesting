#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

// memset的头文件为 string.h

// 建议使用memset赋值0或-1，因为memset使用的是按字节赋值，即对每个字节赋同样的值，这样组成int型的4个字节就会被赋成同样的值。
// 而由于0的二进制补码为全0， -1的二进制补码全为1，不容易弄错。
// 如果要对数据赋其他数字（比如1），请使用fill函数
 
int main()
{
	int a[3] = {1,2,3};
	//0
	memset(a, 0, sizeof(a));
	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//-1
	memset(a, -1, sizeof(a));
	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//1 
	memset(a, 1, sizeof(a));
	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	 
	 
	return 0;
} 
