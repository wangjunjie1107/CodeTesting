#include<stdio.h>


//使用循环嵌套打印杨辉三角


int main()
{

	int i, j, a[11][11];
	
	for(i = 1; i < 11; i++)
	{
		a[i][i] = 1;   //对角线元素全为1	 
		a[i][1] = 1;  //每行第一列元素全为1 
	}	
	
	
	//for循环从第三行到第二列
	for(i = 3; i < 11; i++)
		for(j = 2; j <= i - 1; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];   //第i行第j列等于第i-1行第j-1列的值加上第i-1行第j列的值
			
			
	for(i = 1; i < 11; i++)
	{
		for(j = 1; j <= i; j++)
			printf("%4d",a[i][j]);
		
		printf("\n");
	}
	
	
	return 0;
} 
