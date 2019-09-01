//把输入 一次一个字符的复制到输出 
 
//EOF定义在头文件<stdio.h>中，是个整型数，其具体数值是什么并不重要
//只要它与任何char类型的值都不相同即可 

#include<stdio.h>

int main()
{
	char c;
	while((c = getchar())!= EOF) //EOF是 end of file
		putchar(c); 
	
	//验证EOF的值 为 -1 
	int a;
	a = EOF;
	printf("EOF = %d\n", a); 
	return 0; 
}
