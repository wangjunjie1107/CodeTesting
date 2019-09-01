#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#pragma once   //用来防止头文件被重复包含

//#pragma pack(show)  //默认对齐模数为8

//#pragma pack(1)  //更改对齐模数为1  对齐模数 可以改为 2的n次方


#define MAX(a,b) ( ( a ) > ( b ) ? ( a ) : ( b ) )

int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	
	printf("x = %d,y = %d, z = %d\n", x, y, z);
	//x=6，y=10,z=9
	system("pause");
	return EXIT_SUCCESS;
}
