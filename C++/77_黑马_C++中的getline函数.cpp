#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

const int Size = 5;
void displayString(string * str);

int main() 
{
	string arr[Size];

	cout << "输入五个单词：" << endl;
	for (int i = 0; i < Size;i++)
	{
		cout << i + 1 << ": ";
		getline(cin, arr[i]);
	}

	cout << "Your list: " << endl;
	displayString(arr);

	system("pause");
	return EXIT_SUCCESS;
}


void displayString(string * str)
{
	for (int i = 0; i < Size ; i++)
	{
		cout << i + 1 << " ";
		cout << str[i] << endl;
	}
}

