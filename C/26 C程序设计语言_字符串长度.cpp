#include<stdio.h>

int MyStrlen(char s[])
{
	int i;
	
	while(s[i] != '\0')
		++i;
	return i; 
}

int main()
{
	char a[] = "wangjunjie";
	
	int c = MyStrlen(a);
	printf("�ַ�����Ч����Ϊ��%d\n", c);
	
	printf("�ַ���ʵ�ʳ���Ϊ��%d", sizeof(a)); 
	return 0;
}
