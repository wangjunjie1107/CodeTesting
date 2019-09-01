#include<stdio.h>
#include<limits.h>
#include<float.h>
#define PI 3.141592654 
 //编译时替换 习惯上用大写表示符号常量  

int main(void)
{
	printf("%d\n", INT_MAX); 
	printf("%d\n", INT_MIN); 
	printf("%lld\n", LLONG_MAX); 
	printf("%lld\n", LLONG_MIN); 
	printf("%d\n", CHAR_BIT); 
	printf("%lld\n", DBL_MAX); 
	printf("%d\n", FLT_MIN);  
	return 0;
	
}
