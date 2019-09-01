#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row; //行数
	int i,j,k; //参数
	
	printf("请输入行数：");
	scanf("%d", &row);
	 
	for(i = 1; i <= row; i++)
	{
		//打印空格，最后一行不需要空格，所以行数减一
		for(j = 1; j <= row - i; j++)  // j <= row - i  注意 
		{
			printf(" ");	
		}	
		
		//打印星星，后一行星星的数量是前一行的 2n-1倍 
		for(k = 1; k <= 2 * i  - 1; k++) 
		{
			printf("*"); 
		} 
		printf("\n"); //换行，继续打印下一行的空格和星星 
	}
	
	system("pause"); // pause 暂停的意思 
	
	return 0;
} 
