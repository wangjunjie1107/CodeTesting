#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h> 
#include<limits>
using namespace std;

/*

	��C++�У���һ���������͵������Сֵ

	ʹ�� <limits> ͷ�ļ�

*/


int main()
{
	// unsigned short
	cout << "unsigned short:" << endl;
	cout << "      min = " << numeric_limits<unsigned short>::min() << endl;
	cout << "      max = " << numeric_limits<unsigned short>::max() << endl;

	// short
	cout << "short:" << endl;
	cout << "      min = " << numeric_limits<short>::min() << endl;
	cout << "      max = " << numeric_limits<short>::max() << endl;

	// int
	cout << "int:" << endl;
	cout << "      min = " << numeric_limits<int>::min() << endl;
	cout << "      max = " << numeric_limits<int>::max() << endl;

	// long
	cout << "long:" << endl;
	cout << "      min = " << numeric_limits<long>::min() << endl;
	cout << "      max = " << numeric_limits<long>::max() << endl;

	// long long
	cout << "long long:" << endl;
	cout << "      min = " << numeric_limits<long long>::min() << endl;
	cout << "      max = " << numeric_limits<long long>::max() << endl;

	
	system("pause");
	return EXIT_SUCCESS;
}

