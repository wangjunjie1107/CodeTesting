#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


void test01()
{
	//����������n
	int n = 0;
	cout << "������һ��С��1000����������" << endl;
	cin >> n;

	int temple = n;	//�ȼ�סn��ֵ

	int count = 0;//����
	while (n != 1)
	{
		//�ж�n�Ƿ�Ϊ����������������˳�
		if (n <= 0)
		{
			cout << n << " Ϊ�����������������!" << endl;
			break;
		}

		if (n % 2 == 0)
		{
			n /= 2;
			++count;
		}
		else if (n % 2 == 1)
		{
			n = (3 * n + 1) / 2;
			++count;
		}

		
	}

	//����ɹ�����,���ӡ��Ϣ
	if (count > 0)
	{
		cout << "��Ҫ " << count << " �����ܴ� " << temple << " �� 1" << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
