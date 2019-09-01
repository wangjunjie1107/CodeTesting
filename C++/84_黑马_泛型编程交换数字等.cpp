#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
template<typename T>
void Swap(T &a, T &b);

int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);

	char c = 'A';
	char d = 'B';
	Swap(c, d);

	string e = "wangjunjie";
	string f = "lisijia";
	Swap(e, f);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	cout << "f = " << f << endl;

	system("pause");
	return EXIT_SUCCESS;
}


template<typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
