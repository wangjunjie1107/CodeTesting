#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


bool test()
{
	string p1 = "wangjunjie";
	string p2 = "wangjunjie";


	if (p1 == p2)
	{
		return true;
	}
	else
		return false;

}
int main()
{
	int a = test();
	cout << a << endl;
	system("pause");
	return EXIT_SUCCESS;

}
