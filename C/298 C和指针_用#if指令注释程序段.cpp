#include<stdio.h>
#include<string.h>

int main()
{
	printf("wangjunjie  ");
	printf("love  ");
	printf("lisijia");
	
	//利用#if指令 从逻辑上删除一段代码 
	#if 0
	
	printf("\nhaha"); //不会出现在输出中， 因为被注释掉了 
	
	#endif
	
	return 0; 
	
}
