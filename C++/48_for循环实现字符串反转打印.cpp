
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>

using namespace std;

//for循环实现字符串反转打印
int main() 
{
	char arr[] = "wangjunjie";

	for (int i = strlen(arr) - 1; i >= 0;i--)
	{
		char ch = arr[i];
		cout << ch;
	}

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}

