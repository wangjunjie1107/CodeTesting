#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * RemoveSpace(char arr[], int len)
{
	//ָ��������׵�ַ��ĩβ��ַ 
	char * start  = arr;
	char * end = arr + len - 1; //�����o��ʼ�� 
	
	//ȥ��ĩβ�Ŀո� 
	while(*end == ' ' && end > start) 
	{
		end--;
	}
	//ȥ���ո��ĩβ����\0 
	*(end + 1) = '\0';
	
	while(*start == ' ' && start < end)
	{
		start++;
	}
	
	return start;
}


int main()
{
	char arr[] = "   nihao   ";
	int len = sizeof(arr) - 1;//��Ч���� 
	char * p = RemoveSpace(arr, len);
	
	printf("%s\n", p);
	
	return 0;
}
