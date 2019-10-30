#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define maxn 105
int array[maxn] = { 0 }; 
int main()
{
	int x;
	int n = 0;
	
	//利用scanf的返回值来判断输入是否终止或有效 
	while(scanf("%d", &x) == 1)
	{
		array[n++] = x;
	} 
	
	//逆序输出
	for(int i = n - 1; i > 0; --i)
	{
		printf("%d ", array[i]);
	}
	
	//保证行首和行尾均无空格，所以array[0]单独输出 
	printf("%d\n", array[0]);
	
	return 0;
} 
