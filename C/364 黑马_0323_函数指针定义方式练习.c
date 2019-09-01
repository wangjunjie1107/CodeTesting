#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func(int a, char b)
{
	printf("%d, %c\n", a, b);
}

void test()
{
	typedef void(myFunc)(int, char);
	myFunc * p = func;
	p(1000, 'a');

	typedef void(*myFunc2)(int, char);
	myFunc2 q = func;
	q(2000, 'b');

	void(*f)(int, char) = func;
	f(3000, 'c');

}
int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}
