#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

/*
�����㷨 ��������Ԫ��
@param beg ��ʼ������
@param end ����������
@param _callback  �����ص����ߺ�������
@return ��������
*/


//��������  MyPrint()
struct MyPrint
{
	int m_Count;

	MyPrint()
	{
		m_Count = 0;
	}

	void operator()(int val)
	{
		cout << val << endl;
		m_Count++;
	}
};

//�ص����� myPrint
void myPrint(int val)
{
	cout << val << endl;
	
}


//1��for_each����ʹ��
void test01()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}


	//�ص����� myPrint
	for_each(v.begin(), v.end(), myPrint);


	//��������  MyPrint()
	for_each(v.begin(), v.end(), MyPrint());
}

//2��for_each �з���ֵ
void test02()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	//��������  MyPrint()  ����ֵҲΪ��������
	MyPrint mp1 = for_each(v.begin(), v.end(), MyPrint());
	cout << "mp1��countֵΪ��" << mp1.m_Count << endl;


}


class MyPrint2:public binary_function<int,int,void>
{
public:
	void operator()(int val, int start)const
	{
		cout << val + start << endl;
	}
};

//3��for_each���԰󶨲���
void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�󶨳�ʼֵ 1000
	for_each(v.begin(), v.end(), bind2nd(MyPrint2(), 1000));
}

/*
transform�㷨 ��ָ����������Ԫ�ذ��˵���һ������
ע�� : transform �����Ŀ�����������ڴ棬������Ҫ������ǰ������ڴ�
@param beg1 Դ������ʼ������
@param end1 Դ��������������
@param beg2 Ŀ��������ʼ������
@param _cakkback �ص��������ߺ�������
@return ����Ŀ������������
*/

class MyTransform
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

void test04()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;//Ŀ������
	vTarget.resize(v.size()); //��������


	//�� v �����е����� �� �������� �ķ�ʽ ���˵� Ŀ������
	// ��������ķ�ʽ  return val + 100;

	transform(v.begin(), v.end(), vTarget.begin(), MyTransform());


	//��ӡ
	for_each(vTarget.begin(), vTarget.end(), myPrint);
}

int main() 
{
	test01();
	test02();
	test03();
	test04();


	system("pause");
	return EXIT_SUCCESS;
}
