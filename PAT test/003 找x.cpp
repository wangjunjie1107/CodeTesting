#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void test01()
{
	//���� n ֵ
	int n; 
	cin >> n;

	//���� n ����ֵ������ͬ������
	int number[200] = { 0 };    // n���Ϊ200�����������СΪ200
	for (int i = 0; i < n; i++)
	{
		cin >> number[i];
	}

	//���� x 
	int x;
	cin >> x;

	//������������x��ͬ�����֣����������±�
	for (int i = 0; i < n; i++)
	{
		if (x == number[i])
		{
			cout << i << endl;
			exit(0);//�ҵ���㲻�ٲ�ѯ��ֱ�ӽ�������
		}
	}

	cout << -1 << endl;  //δ�ҵ��Ļ������-1
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
