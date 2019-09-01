#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

#include "Person.hpp"

void test01()
{
	Person<string, int>p1("wangjunjie", 25);
	p1.showPerson();
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}













