#include<stdio.h>
#include<string.h>

void StringLength(char arr[])
{
	
	//���ַ�ʽ���ַ������� 
	int len1  = strlen(arr);
	printf("�ַ�����Ч����Ϊ��%d\n", len1);
	 
	int i = 0;
	while(arr[i] != '\0')
	{
		i++;
	}
	printf("�ַ�����Ч����Ϊ��%d\n", i);
	
	
}
int main()
{
	char arr[] = "abc";
	
	printf("�ַ���ʵ�ʳ��ȣ�%d\n", sizeof(arr)); 
	StringLength(arr);
	
	return 0; 
}
