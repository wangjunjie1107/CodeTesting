#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

////const修饰常量
//void test01()
//{
//	const int j = 100;
//	//j = 120; //err 只读变量初始化之后不能修改
//
//	const int i;
//	//i = 100; //err 定义的const变量最好初始化，否则不能再次直接赋值
//
//	//C语言的const常量是一个只读变量，并不是一个常量，所以可以通过指针访问内存地址进行修改
//	const int k = 200;
//	int * p = &k;
//	*p = 1000;
//	printf("k = %d\n", k);
//}
//
////const 修饰指针
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	
//	//const 放在*号的左侧，修饰p指向的内存空间不能修改，但指针的指向可以修改
//	const int *p = &a;
//	//*p = 1000; //err 不可修改指针指向的内存空间
//	p = &b;//可以修改p 的指向
//
//
//	//const 放在*号的右侧，修饰q指向的内存空间可以修改，但指针的指向不可以修改
//	int * const q = &a;
//	//*q = &b;//err 不可以修改指针的指向
//	*q = 1000; //可以修改指针指向的内存空间
//
//	//const放在*号的两边，则内存空间和指向都不能修改
//	const int const * p;
//}


//const 指针的用法  
//在传地址的函数参数中 使用const可以避免数据被修改
struct Person {
	char name[64];
	int id;
	int age;
	int score;
};
//每次都对对象进行拷贝，效率低，应该用指针
void printPersonByValue(struct Person person) {
	printf("Name:%s\n", person.name);
	printf("Name:%d\n", person.id);
	printf("Name:%d\n", person.age);
	printf("Name:%d\n", person.score);
}
//但是用指针会有副作用，可能会不小心修改原数据 因此使用const常量来修饰内存，不能让其修改
void printPersonByPointer(const struct Person *person) {
	printf("Name:%s\n", person->name);
	printf("Name:%d\n", person->id);
	printf("Name:%d\n", person->age);
	printf("Name:%d\n", person->score);
}
void test03() {
	struct Person p = { "Obama", 1101, 23, 87 };
	//printPersonByValue(p);
	printPersonByPointer(&p);
}

int main()
{
	//test01();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
