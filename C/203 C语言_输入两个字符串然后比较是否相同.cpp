#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	
	//输入两个字符串 
	printf("请说明两个字符串的长度：");
	int len1;
	int len2;
	scanf("%d", &len1);
	scanf("%d", &len2);
	
	printf("请输入第一个字符串："); 
	for(int i = 0; i < len1 ; i++)
	{
		scanf("%c", &str1[i]);
	}
	printf("请输入第二个字符串："); 
	for(int i = 0; i < len2 ; i++)
	{
		scanf("%c", &str2[i]);
	}
	
	//比较两个字符串
	if(len1 != len2)  //比较长度 
	{
		printf("两个字符串不相同"); 
	}
	
	int j;
	
	for(j = 0; j < len1; j++)
	{
		if(str1[j] == str2[j])
			continue;
		else
		{
			printf("两个字符串不相同"); 
			break;
		}
			
	}
	
	while(j == len1)
	{
		printf("两个字符串相同");
		break; 
	}
		
	return 0; 
} 
