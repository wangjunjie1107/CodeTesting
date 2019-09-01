#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


void test01()
{
	int x{ 2 };
	cout << x << endl;

	double arr[5]{ 2,2,3,5,4 };
	cout << arr[0] << endl;

	char * pt = new char[5]{ "aaaa" };
	cout << pt << endl;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




