#include<stdio.h>

int main()
{
	//两个初始化数组，追加到第三个数组中 
	char a[] = "abcdefg";
	char b[] = "higklmn";
	char c[100];
	
	int i = 0; //计数 
	
	while(a[i] != '\0')
	{
		c[i] = a[i];
		i++;
	}
	
	int j = 0;
	
	while(b[j] != '\0')
	{
		c[i + j] = b[j];
		j++;
	}
	
	c[i + j] = 0;//字符串结束符
	 
	for(int k = 0; k <= i + j; k++)
	{
		printf("%c", c[k]);
		
	}
	
	return 0; 
 } 
