#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	char arr[] = "hello world";
	
	if(strchr(arr, 'w') != NULL)
	{
		printf("�ҵ���\n"); 
	}
	else
	{
		printf("û�ҵ�\n"); 
	}
	
	char *p = strstr(arr, "w");
	 //��ʱ��p���൱���ַ�������׵�ַ�� 
	printf("%s\n", p);
	return 0;
	
 } 
