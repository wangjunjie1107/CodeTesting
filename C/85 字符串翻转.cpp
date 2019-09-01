#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//�ַ�����ת
//��һ�ַ�ʽ ����[]���з�ת 
void reverseString01(char * str)
{	
	int len = strlen(str);
	//��ʼλ���±�
	int start = 0;
	
	//����λ���±�
	int end = len - 1;	
	
	while(start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		
		start++;
		end--;	
	}
} 


void test01()
{
	char str[] = "abc";
	
	reverseString01(str);
	
	printf("%s\n", str);
} 
 
//�ڶ��ַ�ʽ ����ָ��   ָ��Ϊʲô�ܷ�ת�ַ������� 
void reverseString02(char * str)
{
	int len = strlen(str);
	
	char * start = str;	
	char * end = str + len - 1;
	
	while(start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		
		printf("%s\n", str);
		
		start++;
		end--; 
	}
} 
void test02()
{
	char str[] = "abcdefghi";
	
	reverseString02(str);
	
	printf("%s\n", str);
} 

int main()
{
	test02();
	
	return 0;
}













