#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

//��p���Ƶ�����aת��Ϊʮ���Ƶ�����b
void test()
{
	int a;
	int b = 0;
	int p;

	//��������a �� �����ֵĽ���p
	cin >> a;
	cin >> p;

	//��p���Ƶ�����aת��Ϊʮ���Ƶ�����b
	int produce = 1;
	while (a != 0)
	{
		b = b + (a % 10) * produce;  // a % 10 ��Ϊ��ÿ�λ�ȡ a �ĸ�λ��
		a = a / 10; //ȥ��a�ĸ�λ��
		produce = produce * p;
	}

	cout << b << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

