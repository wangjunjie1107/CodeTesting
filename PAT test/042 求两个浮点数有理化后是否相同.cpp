#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>

using namespace std;

/*
	������������

		һ��N�� ��ʾҪ�����λ��   N < 100

		һ��A������������ʾҪ�������

		һ��B������������ʾҪ�������

		A �� B ����0  С��10��100�η�


	��������ô���,�Ƚ�����������Ȼ��Ƚ�

*/

int n = 0;

char numberA[102] = { 0 };
int countA = 0;				//����
int pointPositionA = 0;	    //��¼С�����λ��
string a1;

char numberB[102] = { 0 };
int countB = 0;				//����
int pointPositionB = 0;	    //��¼С�����λ��
string b1;


//������A����
void significant_digitsA()
{
	//���������λ��Ϊ0 ����С��0��ֱ�ӷ���
	if (n <= 0)
	{
		return;
	}

	//���������λ���������ֱ������Чλ������ֱ�ӷ��أ���������
	if (n > countA)
	{
		return;
	}

	//����,��nλ֮�������ȫ����Ϊ0
	for (int i = n; i < countA; i++)
	{
		numberA[i] = 0;
	}
	return;
}

//������B����
void significant_digitsB()
{
	//���������λ��Ϊ0 ����С��0��ֱ�ӷ���
	if (n <= 0)
	{
		return;
	}

	//���������λ���������ֱ������Чλ������ֱ�ӷ��أ���������
	if (n > countB)
	{
		return;
	}

	//����,��nλ֮�������ȫ����Ϊ0
	for (int i = n; i < countB; i++)
	{
		numberB[i] = 0;
	}
	return;
}

//����֮��ĶԱ�
bool compareAandB()
{
	for (int i = 0; i < n; i++)
	{
		if (numberA[i] != numberB[i])
		{
			return false;
		}
	}
	return true;
}

//�����������
void replace_numberA()
{
	//�����λΪ0����ȫ��Ϊ0
	if (numberA[0] == '0')
	{
		for (int i = 0; i < n; i++)
		{
			numberA[i] = 0;
		}
	}

	//���ĩβΪС���㣬��ʡ����
	if (numberA[n - 1] == '.')
	{
		numberA[n - 1] = 0;

		a1 = "0.";
		a1 += numberA;
		a1 += "*10";
		cout << a1;
		if (pointPositionA > 0)
		{
			cout << "^";
			cout << pointPositionA - 1;

		}
		else
		{
			cout << "^";
			cout << countA;
		}

		return;
	}

	a1 = "0.";
	a1 += numberA;
	a1 += "*10";
	cout << a1;
	if (pointPositionA > 0)
	{
		cout << "^";
		cout << pointPositionA - 1;

	}
	else
	{
		cout << "^";
		cout << countA;
	}
	return;
}
void replace_numberB()
{
	//�����λΪ0����ȫ��Ϊ0
	if (numberB[0] == '0')
	{
		for (int i = 0; i < n; i++)
		{
			numberB[i] = 0;
		}
	}

	//���ĩβΪС���㣬��ʡ����
	if (numberB[n - 1] == '.')
	{
		numberB[n - 1] = 0;

		b1 = "0.";
		b1 += numberB;
		b1 += "*10";
		cout << b1;
		if (pointPositionB > 0)
		{
			cout << "^";
			cout << pointPositionB - 1;

		}
		else
		{
			cout << "^";
			cout << countB;
		}
		return;
	}

	b1 = "0.";
	b1 += numberB;
	b1 += "*10";
	cout << b1;
	if (pointPositionB > 0)
	{
		cout << "^";
		cout << pointPositionB - 1;

	}
	else
	{
		cout << "^";
		cout << countB;
	}

	return;
}
void test()
{
	//������n
	cin >> n;

	//Ȼ������A��B�����ַ�������ʽ��ȡ
	string a;
	string b;
	cin >> a;
	cin >> b;

	//�� a �� b ת�����ַ�������
	for (int i = 0; i < a.length(); i++)
	{
		numberA[countA++] = a[i];
		if (a[i] == '.')
		{
			//��¼��С�����λ��
			pointPositionA = countA;
		}
	}

	for (int i = 0; i < b.length(); i++)
	{
		numberB[countB++] = b[i];
		if (b[i] == '.')
		{
			//��¼��С�����λ��
			pointPositionB = countB;
		}
	}

	//����������
	significant_digitsA();
	significant_digitsB();

	//�����ֽ��жԱ�,����������һ�� ��ֻ���һ����
	if (compareAandB() == true)
	{
		cout << "Yes" << " ";
		replace_numberA();
		cout << endl;
	}
	else
	{
		cout << "No" << " ";
		replace_numberA();
		cout << " ";
		replace_numberB();
		cout << endl;
	}
}

int main()

{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

