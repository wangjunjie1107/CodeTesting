#include<stdio.h>

int main()
{
	int a = 100;
	printf("a = %d\n", a); //格式化输出一个字符串
	printf("%p\n", &a);
	printf("%%d\n"); 

	char c = 'a';
	putchar(c); //putchar只有一个参数，就是要输出的char
	putchar('\n'); //输出一个换行符 

	long a2 = 100;
	printf("十进制：%ld\n十六进制：%lx\n八进制：%lo\n", a2, a2, a2); 
	
	long long a3 = 1000;
	printf("长整型十进制：%lld\n长整型十六进制：%llx\n长整型八进制：%llo\n", a3, a3, a3);
	
	int abc = 10;
	printf("abc = '%6d'\n", abc);	
	printf("abc = '%-6d'\n", abc);	
	printf("abc = '%06d'\n", abc);	
	printf("abc = '%-06d'\n", abc);	

	double d = 12.3;
	printf("d = \'%-10.3lf\'\n", d);
	
	return 0; 




 } 
