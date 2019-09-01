#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
1.浅拷贝： 将原对象或原数组的引用直接赋给新对象，新数组，新对象／数组只是原对象的一个引用

2.深拷贝： 创建一个新的对象和数组，将原对象的各项属性的“值”（数组的所有元素）拷贝过来，是“值”而不是“引用”
*/
 
struct Person {
	char *name; //只是一个声明，并未开辟空间
}MyPerson;

int main()
{
	struct Person t1;
	t1.name = malloc(64);
	strcpy(t1.name, "wnagjunjie");


	struct Person t2;
	t2 = t1;
	printf("%s\n", t2.name);//t2.name 指向了为t1开辟的内存 自己并未开辟内存
	
	t2.name = malloc(64); //自身开辟内存后，再进行拷贝
	strcpy(t2.name, t1.name);
	printf("%s\n", t2.name);

	free(t1.name);
	t1.name = NULL;
	free(t2.name);
	t2.name = NULL;

	system("pause");
	return EXIT_SUCCESS;
}
