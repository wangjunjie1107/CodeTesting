#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<time.h>
#include<ctime>

using namespace std;


/*
    ���⣺�����ж�һ�����Ƿ�Ϊ����

	������ֻ�ܱ�1�ͱ�������������1�Ȳ���������Ҳ���Ǻ���

	�����ֻ��Ҫ�жϣ� 2 - ����n ��֮�������û�б�����������
*/

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	//����n
	int sqrN = (int)sqrt(1.0 * n);

	//���� 2-����n �ж�
	for (int i = 2; i < sqrN; i++)
	{
		if (n % i == 0)
		{
			return false;  // n �� i �ı����� n ��������
		}
	}
	return true;//������
}
void test()
{
	int n;
	cin >> n;
	
	while (n > 1)
	{
		if (isPrime(n))
		{
			cout << n << " is a prime." << endl;
		} 
		else
		{
			cout << n << " is not a prime." << endl;
		}

		cin >> n;
	}

	cout << "Error,"<< n << " is not a positive integer." << endl;

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

