#include "STD.c"

#define MYADD(x,y) ((x)+(y))

//宏函数注意：保证运算的完整性  加括号
//宏函数使用场景：将频繁短小的函数，封装为宏函数
//优点：以空间换时间  不用再入栈和出栈

int MyAdd(int x, int y)
{
	return x + y;
} 

void test01()
{
	int a = 10;
	int b = 20;
	//((10) + (20)) * 20 
	printf("a + b = %d\n", MYADD(a, b) * 20);
	
}

int main()
{
	test01();
	
	return 0;
}
