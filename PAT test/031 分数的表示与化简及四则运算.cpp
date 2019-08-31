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
	�����ı�ʾ�뻯��

*/


//�ýṹ���ʾ����
struct Fraction
{
	int up;			//����
	int down;		//��ĸ
};


//�����Լ��
int gcd(int a, int b)
{
	//return !b ? a : gcd(b, a % b);

	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b); //�ݹ���Լ����������С��Χ
	}
}

//�����Ļ���
Fraction reduction(Fraction result)
{
	//1���������Ϊ0����ĸ��Ϊ1
	if (result.up == 0)
	{
		result.down = 1;
	}

	//2�������ĸΪ����������ӷ�ĸ��Ϊ�෴��
	if (result.down < 0)
	{
		result.up = -result.up;
		result.down = -result.down;
	}

	//3�������Ӳ�Ϊ0���򻯼򣬳��Է��ӷ�ĸ�����Լ�����Ի������
	if (result.up != 0)
	{
		int d = gcd(abs(result.up), abs(result.down));	//�����Լ��
		result.up /= d;
		result.down /= d;
	}

	return result;
}

//����<<��ʾʽ
ostream& operator<<(ostream& cout, Fraction s)
{
	cout << s.up << " / " << s.down << endl;
}

//�����ļӷ�
Fraction FractionAdd(Fraction a, Fraction b)
{
	Fraction result;
	
	//����
	result.up = a.up * b.down + b.up * a.down;
	result.down = a.down * b.down;

	//����
	return reduction(result);			
}

//�����ĳ˷�
Fraction FractionMult(Fraction a, Fraction b)
{
	Fraction result;

	//����
	result.up = a.up * b.up;
	result.down = a.down * b.down;

	//����
	return reduction(result);
}

//�����ļ���
Fraction FractionMinu(Fraction a, Fraction b)
{
	Fraction result;

	//����
	result.up = a.up * b.down - b.up * a.down;
	result.down = a.down * b.down;

	//����
	return reduction(result);
}

//�����ĳ���
Fraction FractionDiv(Fraction a, Fraction b)
{
	Fraction result;

	//�������Ϊ0
	if (b.up == 0)
	{
		cout << "��������" << endl;
		result.up = 0;
		result.down = 1;
		return reduction(result);
	}

	//���������Ϊ0
	if (a.up == 0)
	{
		result.up = 0;
		result.down = 1;
		return reduction(result);
	}


	//����  ��һ�������൱�ڳ������ĵ���
	result.up = a.up * b.down;
	result.down = a.down * b.up;

	//����
	return reduction(result);
}

//��ӡ�����Ľ��
void showResult(Fraction r)
{
	r = reduction(r); //����

	if (r.down == 1)
	{
		//����
		cout << r.up << endl;
	}
	else if (abs(r.up) > r.down)
	{
		//�ٷ���
		cout << r.up / r.down << " " << abs(r.up) % r.down << " / " << r.down << endl;
	}
	else
	{
		cout << r.up << " / " << r.down << endl;
	}
}
void test()
{
	//������������
	Fraction a; // 1 / 2 
	a.up = 2;
	a.down = 4;

	Fraction b; // 3 / 4
	b.up = 3;
	b.down = 4;

	//�ӷ�
	showResult(FractionAdd(a, b));
	//����
	showResult(FractionMinu(a, b));
	//�˷�
	showResult(FractionMult(a, b));
	//����
	showResult(FractionDiv(a, b));

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

