#include<stdio.h>
#include<string.h>
#include<stdlib.h>

union vars
{
	double a;
	float b;
	int c;
	short d;
	char f;
	char arr[12];
}var;

int main()
{
	//共用体大小16个字节，其中4个字节无效
	//16 = 2 * 8；
	//根据最大数据类型，找最大字节长度
	//double 最大，占8个字节，arr[12]，使用两个double
	//因此是16个字节
	 
	//共用体中最后一块被赋值的，是准确的
	//之前赋值的数据会被覆盖 
	printf("%d\n", sizeof(var));
	
	return 0;
}
