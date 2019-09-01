#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>    //  accumulateͷ�ļ�  �ۼ�
#include <iterator>

/*
accumulate�㷨 ��������Ԫ���ۼ��ܺ�
@param beg ������ʼ������
@param end ��������������
@param value�ۼ�ֵ
*/
void test01()
{
	vector<int>v;
	for (int i = 1;i <= 100;i++)
	{
		v.push_back(i);
	}

	//����3 �ۼ���ʼ��ֵ
	int sum = accumulate(v.begin(), v.end(),0);
	cout << sum << endl;
}

/*
fill�㷨 �����������Ԫ��
@param beg ������ʼ������
@param end ��������������
@param value t���Ԫ��
*/

void test02()
{
	vector<int>v;
	v.resize(10);

	//�����������Ԫ��
	fill(v.begin(), v.end(), 100);

	//���� copy ������ӡ
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main() 
{

	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}

