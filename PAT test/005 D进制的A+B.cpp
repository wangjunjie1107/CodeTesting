#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


void test()
{
	int numberA;
	int numberB;
	int numberD;

	//����A��B
	cin >> numberA;
	cin >> numberB;

	//����D������
	cin >> numberD;

	//����A+B�ĺ�
	int sum = numberA + numberB;

	//��ʮ���Ƶ� sum  ת��Ϊ numberD ������  numΪλ��
	int z[100] = { 0 };
	int num = 0; 
	while (sum != 0)
	{
		z[num++] = sum % numberD;
		sum = sum / numberD;
	}

	//��ӡ���
	for (int i = num - 1; i >= 0; --i)
	{
		cout << z[i];
	}
	cout << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

