#include<stdio.h>
#include<string.h>

int myStrLen(const char * p) 
{
	int n = 0;
	
	while(*p != '\0') //�ַ�����������λ��
	{
		n++; //������ 1 
		p++;//�ַ���ָ����� 
	} 
	
	return n; 
} 

void strTest()
{
	printf("�������ַ���(100���ַ�����)��\n");
	
	char str[100] = { 0 };
	gets(str); 
	
	int len = myStrLen(str);
	
	
	printf("�ַ����ĳ���Ϊ�� %d\n", len);
	 
}
int main()
{
	strTest();
	
	return 0;	
}
