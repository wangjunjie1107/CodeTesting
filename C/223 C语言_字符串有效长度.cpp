#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[] = "asd";  //ĩβ���н�����  \0 
	
	int len = strlen(arr);
	
	printf("�ַ�����Ч���ȣ�%d\n", len);
	
	printf("�ַ������ȣ�%d\n", sizeof(arr));
	
	int index = 0;
	
	while(arr[index] != '\0')
	{
		index++;
	}
	
	printf("�ַ�����Ч���ȣ�%d\n", index); 
	
	return 0; 
}
