#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

/*
set_intersection�㷨 ������set���ϵĽ���
ע��:�������ϱ�������������
@param beg1 ����1��ʼ������
@param end1 ����1����������
@param beg2 ����2��ʼ������
@param end2 ����2����������
@param dest  Ŀ��������ʼ������
@return Ŀ�����������һ��Ԫ�صĵ�������ַ
*/

//set_intersection�㷨 ������set���ϵĽ���
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//��Ž��������
	vector<int>v3;
	//Ϊ�����������㹻�Ŀռ� ��Ҳ����̫��
	v3.resize(min(v1.size(), v2.size()));
	//�󽻼�
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	
	//��ӡ  ע��ڶ���������  �����ķ���ֵ  Ҳ����Ŀ�����������һ��Ԫ�صĵ�������ַ
	for_each(v3.begin(), itEnd, [](int val){cout << val << " ";});
	cout << endl;
}

/*
set_union�㷨 ������set���ϵĲ���
ע��:�������ϱ�������������
@param beg1 ����1��ʼ������
@param end1 ����1����������
@param beg2 ����2��ʼ������
@param end2 ����2����������
@param dest  Ŀ��������ʼ������
@return Ŀ�����������һ��Ԫ�صĵ�������ַ
*/

void test02()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//����������
	vector<int>v3;
	//��
	v3.resize(v1.size() + v2.size());
	//�󲢼�
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());


	//��ӡ
	for_each(v3.begin(), itEnd, [](int val) {cout << val << " ";});
	cout << endl;
}

/*
set_difference�㷨 ������set���ϵĲ
ע��:�������ϱ�������������
@param beg1 ����1��ʼ������
@param end1 ����1����������
@param beg2 ����2��ʼ������
@param end2 ����2����������
@param dest  Ŀ��������ʼ������
@return Ŀ�����������һ��Ԫ�صĵ�������ַ
*/
void test03()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}


	vector<int>v3;
	v3.resize(max(v1.size(), v2.size()));
	//��  0 1 2 3 4     v1����v2�Ĳ
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	//��ӡ
	for_each(v3.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;



	//�ߵ� �� �  10 11 12 13 14    v2����v1�Ĳ
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());

	//��ӡ
	for_each(v3.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;


}
int main()
{

	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
