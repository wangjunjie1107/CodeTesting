#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>
#include<ctime>
#include<functional>

/*
merge�㷨 ����Ԫ�غϲ������洢����һ������
ע��:������������������� ,���ұ���ͬ��
@param beg1 ����1��ʼ������
@param end1 ����1����������
@param beg2 ����2��ʼ������
@param end2 ����2����������
@param dest  Ŀ��������ʼ������
*/
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int>vTarget;//Ŀ������
	vTarget.resize(v1.size() + v2.size()); //��������

	//��v1 �� v2 �ϲ�, ���洢�� vTarget ��
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());


	// [](){} ��������  lambda���ʽ
	cout << "------------------------------------\n";
	cout << "�� v1 �� v2 �ϲ�, ���洢�� vTarget �У�merge�㷨��:" << endl;
	cout << "ע��:������������������� ,���ұ���ͬ��" << endl;
	for_each(vTarget.begin(), vTarget.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

/*
sort�㷨 ����Ԫ������
@param beg ����1��ʼ������
@param end ����1����������
@param _callback �ص���������ν��(����bool���͵ĺ�������)
*/

void test02()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//����sort����
	cout << "------------------------------------\n";
	cout << "����sort����:" << endl;
	sort(v1.begin(), v1.end(), greater<int>());
	// [](){} ��������  lambda���ʽ
	//��ӡ��� 
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;



	//����sort����
	cout << "------------------------------------\n";
	cout << "����sort����:" << endl;
	sort(v1.begin(), v1.end(), less<int>());

	// [](){} ��������  lambda���ʽ
	//��ӡ��� 
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

/*
random_shuffle�㷨 ��ָ����Χ�ڵ�Ԫ�������������
@param beg ������ʼ������
@param end ��������������
*/	

void test03()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//ϴ���㷨  �����������
	random_shuffle(v1.begin(), v1.end());

	//������ӡ
	cout << "------------------------------------\n";
	cout << "ϴ���㷨  �����������:" << endl;
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

/*
reverse�㷨 ��תָ����Χ��Ԫ��
@param beg ������ʼ������
@param end ��������������
*/

void test04()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	v1.push_back(888);
	v1.push_back(111);
	v1.push_back(222);
	
	cout << "------------------------------------\n";
	cout << "��תǰ���������" << endl;
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;


	//��ת�㷨
	reverse(v1.begin(), v1.end());

	cout << "------------------------------------\n";
	cout << "��ת����������" << endl;
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

int main() 
{
	//���������
	srand((unsigned int)time(NULL));
	
	test01();
	test02();
	test03();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}
