#include<stdio.h>

int MyStrlen(char *s)
{
	char * p = s;
	
	while(*p != '\0')
	{
		p++;
	} 
	
	return p - s;  //��ַ֮��Ĳ�ֵ 
} 

int main()
{
	char arr[] = "abcdefg";
	
	int a = MyStrlen(arr);
	 
	printf("�ַ�������Ϊ��%d\n", a);
	
	return 0;
}
