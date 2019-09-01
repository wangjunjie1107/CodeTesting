#include "STD.c"

#include<stddef.h>  //offsetof函数的头文件
					//offsetof（结构体类型， 属性） 
 
typedef struct Person
{
	int a; // 0-3
	char p[64]; // 4- 67
	char b; //68
	int c;//69-72
	double d;//73-80
}MyPerson;

int main()
{
		printf("a属性的偏移量为：%d\n", offsetof(struct Person, a));
		printf("p属性的偏移量为：%d\n", offsetof(struct Person, p[64]));
		printf("b属性的偏移量为：%d\n", offsetof(struct Person, b));
		printf("c属性的偏移量为：%d\n", offsetof(struct Person, c));
		printf("d属性的偏移量为：%d\n", offsetof(struct Person, d));

	return 0;
}
 
