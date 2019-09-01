//内存操作函数

#include<string.h>
#include<stdio.h>

void Memset()
{
	int a[10];
	
	//将 a 的内存区域的前 10 个字节以参数 1 填入
	
	//填充的字符，c虽然参数为int，
	//但必须是unsigned char , 范围为0~255
	
	memset(a, 97, sizeof(a));
	
	for(int i = 0; i < 10; i++)
	{
		printf("%c\n", a[i]);
	}
}

void Memcpy()
{
	int a[10] = {1,2,3,5,4,6,8,4,55,44};
	int b[10];
	
	//拷贝 a 所指的内存内容的前n个字节
	//到 b 所指的内存地址上。
	memcpy(b,a,sizeof(a));
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", b[i]);
	}
}

void Memmove()
{
	int a[10] = {1,2,3,5,4,6,8,4,55,44};
	int b[10];
	
	//拷贝 a 所指的内存内容的前n个字节
	//到 b 所指的内存地址上
	
	memmove(b,a,sizeof(a));
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", b[i]);
	}
}

void Memcmp()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,1};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//比较 a 和 b 所指向内存区域的前10个字节
	//相等： 0
	// a > b : >0
	// a < b: <0 
	int value = memcmp(a, b, sizeof(a));
	
	printf("value = %d\n", value);
	
 } 
 
int main()
{
	//Memset();
	//Memcpy();
	//Memmove(); //用法和memcpy()一样
	 Memcmp();
	return 0;
 } 
