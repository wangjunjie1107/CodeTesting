#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "Hello World";
	char arr2[100];
	char arr3[100];
	
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	
	//���޿��� 
	//������Ŀ���ַ��� Դ�ַ��� �ַ�����
	//ע:���޿������Ὣ\0������Ŀ���ַ�����
	strncpy(arr3, arr1, 5);
	
	arr3[6] = '\0'; //�������Ҫ�ֶ����Ͻ�����
	 
	printf("%s\n", arr3);
	
	return 0;
 } 
