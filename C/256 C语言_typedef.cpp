#include<stdio.h>

/*

typedef为C语言的关键字
	
作用是为一种数据类型(基本类型或自定义数据类型)定义一个新名字，不能创建新类型。

与#define不同，typedef仅限于数据类型，而不是能是表达式或具体的值
	
#define发生在预处理，typedef发生在编译阶段

*/

typedef int INT;
typedef char BYTE;

typedef struct type
{
	INT a;
	BYTE b;
}type;

int main()
{
	INT a;
	type i;
	
	i.a = 10;
	i.b = 'w';
	
	printf("%d\n%c\n", i.a, i.b);
	return 0;
 } 
