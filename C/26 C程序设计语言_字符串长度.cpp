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
	printf("字符串有效长度为：%d\n", c);
	
	printf("字符串实际长度为：%d", sizeof(a)); 
	return 0;
}
