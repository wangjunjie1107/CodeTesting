#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main() 
{
	char arr[20] = {0};
	cin.getline(arr, 20); //数组输入
	cout << arr << endl;


	string str1;
	getline(cin, str1); //字符串输入
	cout << str1 << endl;

	string str = "wangjunjie";
	cout << str.size() << endl;//不包括换行符


	system("pause");
	return EXIT_SUCCESS;
}
