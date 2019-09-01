#include<stdio.h>

int main()
{
	short a = -10;
	int b = -10;
	long c = -10l; //或者10L
	long long d = -10LL; //或者10ll
	
	//打印各变量在内存所占的字节 
	printf("sizeof(a) = %u\n", sizeof(a)); 
	printf("sizeof(b) = %u\n", sizeof(b)); 
	printf("sizeof(c) = %u\n", sizeof(c)); 
	printf("sizeof(d) = %u\n\n", sizeof(d)); 
	
	//打印各变量的值 
	printf("short a = %hd\n", a);
	printf("int b = %d\n", b);
	printf("long c = %ld\n", c);
	printf("long long d = %lld\n\n", d);
	
	unsigned short a2 = 20u;
	unsigned int b2 = 20u;
	unsigned long c2 = 20ul;
	unsigned long long d2 = 20ull;
	
	printf("unsigned short a = %hu\n", a2);
	printf("unsigned int b = %u\n", b2);
	printf("unsigned long c = %lu\n", c2);
	printf("unsigned long long d = %llu\n", d2);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
}
