#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	//定义字符数组 
	char arr[110];
	
	//输入字符串 
	printf("请输入一个字符串（字符串个数小于100）：\n");
	scanf("%s", arr);
	
	//定义两个指针，指向字符串首部和尾部 
	char * p;
	char * q;
	
	p = arr; //让 p 指向字符串头部
	
	int j = 0; //判断字符数组的长度 
	for(int i = 0; i < 110; i++)
	{
		if(arr[i] != '\0')
		{
			j++;//判断字符数组的长度 
		}
		else
		{
			break; //跳处循环 
		}
	} 
	
	q = (arr + j - 1); //让 q 指向字符数组的尾部
	
	
	//判断是否为回文字符串  注意比较次数 
	int m = 1;
	for(int k = 0; k <= (j / 2); k++)
	{
		if(*(p + k) == *(q - k))
		{
			continue;
		}
		else
		{
			m = 0;
			printf("这个字符串不是回文字符串！");
			break;
		}
	}
	
	while(m)
	{
		printf("这个字符串是一个回文字符串！"); 
		break;
	}
	
	return 0;
 } 
