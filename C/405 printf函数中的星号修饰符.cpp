#include<stdio.h>


int main()
{
	char * str = "wangjunjie";
	printf("%*s\n", 15, str);  // *ָ����������
	
	
	char buffer[1024] = { 0 }; 
	scanf("%*2s%s",buffer);  // *2s �������������ǰ�����ַ� 
	printf("%s\n",buffer); 
	
	
	return 0; 
	
} 
