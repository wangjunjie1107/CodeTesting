#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void test01()
{
	//���������α߳�N   3 <= N <= 20
	int n;
	cin >> n;

	//�����ַ�
	char c;
	cin >> c;

	//���ݱ߳����ַ���������
	int weight = 0; //���� - 2 ,Ҳ�����м�ı���
	if (n % 2 == 0)
	{
		weight = n / 2 - 2;
	}
	else
	{
		weight = n / 2 + 1 - 2;
	}


	//��������ı�
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl; //��һ����ϣ�����

	//����м�ı�
	while (weight != 0)
	{
		//�׸��ַ�
		cout << c; 

		//�м�Ŀո�
		for (int i = 0; i < n - 2; i++)
		{
			cout << " ";
		}

		//���һ���ַ�
		cout << c;

		//����
		cout << endl;

		//������һ
		--weight;
	}


	//����ײ��ı�
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl; //���һ����ϣ�����

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
