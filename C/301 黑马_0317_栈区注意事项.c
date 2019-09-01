#include "STD.c"

char * func()
{
	char p[] = "wangjunjie"; //在栈区存储，函数执行完成后被释放 
	printf("%s\n", p);
	
	return p;
}

int main()
{
	char * p = func(); 
	
	printf("%s\n", p);  //在main函数中打印会出现乱码 
	
	return 0;
 } 
