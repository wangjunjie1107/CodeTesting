#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr1[100] = "Hello ";
	char arr2[50] = "world";
	char arr3[50] = "ABCDEFG";
	
	//�ַ���׷�� 
	strcat(arr1,"��� ");
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	
	//�ַ�������׷�� 
	//ע�⣺����׷�ӻὫ\0׷��,��˲��ò�\0 
	strncat(arr1, arr3, 3);
	printf("%s\n", arr1);
	return 0;
}
