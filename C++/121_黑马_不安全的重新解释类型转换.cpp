#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{

};

class Other
{

};
//4、重新解释类型转换 reinterpret_cast  可以随意转换 最不安全
void test01()
{
	int a = 10;

	//将 int 型转换为 int *  不安全
	int * p = reinterpret_cast<int *>(a);

	Base * base = NULL;
	//将一种类指针转换为另一种类指针  不安全
	Other * other = reinterpret_cast<Other *>(base);
}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
