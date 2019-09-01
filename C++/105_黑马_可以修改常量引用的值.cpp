#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
	//	int &b = 10; //非法

	const int &b = 10; // 编译器将代码修改为 ：  int temp = 10;  const int &b = temp;

					   //b = 100;

	int * p = (int *)&b;
	*p = 20;

	cout << b << endl;

}
int main() 
{
	//可以修改常量引用的值
	test01();
	

	system("pause");
	return EXIT_SUCCESS;
}
