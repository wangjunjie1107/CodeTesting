#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main() 
{
	char arr[20] = {0};
	cin.getline(arr, 20); //��������
	cout << arr << endl;


	string str1;
	getline(cin, str1); //�ַ�������
	cout << str1 << endl;

	string str = "wangjunjie";
	cout << str.size() << endl;//���������з�


	system("pause");
	return EXIT_SUCCESS;
}
