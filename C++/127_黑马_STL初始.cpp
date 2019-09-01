#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector> //��������
#include<algorithm>//��׼�㷨ͷ�ļ�

using namespace std;

//������ ���տ�ʼ�������Ϊһ��ָ��������ָ��
//  ÿ�����������Լ����еĵ�����  vector<int>::iterator  vector<Person>::iterator
//	����(container) 
//	�㷨(algorithm) 
//	������(iterator)


void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//��������
	vector<int>v; //������ myArray<int>myIntArray


	//��������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//���õ��������������е�����

	//v.begin();  //��ʼ������ ָ�������е�һ��Ԫ��
	vector<int>::iterator itBegin = v.begin();

	//v.end() ����������  ָ�����������һ��Ԫ�ص���һ��λ�õĵ�ַ
	vector<int>::iterator itEnd = v.end();

	//��һ�ֱ�����ʽ  while ѭ��
	while(itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ�����ʽ  forѭ��
	for (vector<int>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)
	{
		cout << *itBegin << endl;
	}

	//�����ֱ�����ʽ  STL�����㷨
	for_each(v.begin(), v.end(), myPrint);
}



//ͨ��STL����  �Զ����������� 
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
};

//��ӡ�Զ�����������  ֵ����
void myPrintPerson1(Person p)
{
	cout << "������" << p.m_Name << "  ���䣺" << p.m_Age << endl;
}
//��ӡ�Զ�����������  ָ�봫��
void myPrintPerson2(Person * p)
{
	cout << "������" << (*p).m_Name << "  ���䣺" << (*p).m_Age << endl;
}

//�Զ�����������  STL ʹ��
void test02()
{
	//��������
	vector<Person *>v;

	Person p1("aaa", 100);
	Person p2("bbb", 200);
	Person p3("ccc", 300);
	Person p4("ddd", 400);
	Person p5("eee", 500);

	//��������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//��һ�ֱ���
	//for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	//{
	//	// *it   ---  Person
	//	cout << "������" << (*it).m_Name << "  ���䣺" << (*it).m_Age << endl;
	//}
	
	//�ڶ��ֱ���
	//for_each(v.begin(), v.end(), myPrintPerson1);
	for_each(v.begin(), v.end(), myPrintPerson2);
}





//С�����Ĵ�ӡ
void myPrintVectorSmall(int val)
{
	cout << val << " " ;
}
//�������Ĵ�ӡ
void myPrintVectorBig(vector<int>v)
{
	//�������Ĵ�ӡǶ��С�����Ĵ�ӡ����
	for_each(v.begin(), v.end(), myPrintVectorSmall);
	cout << endl;
}
//����Ƕ������
void test03()
{
	vector<vector<int>>v; //���ƶ�ά����

	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	vector<int>v5;

	//ÿ��int�������5������
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1); 
		v2.push_back(i + 10);
		v3.push_back(i + 100);
		v4.push_back(i + 1000);
		v5.push_back(i + 10000);
	}

	//��С�������뵽��������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);

	//���������� 
	//��һ�ֱ�����ʽ forѭ��
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// *it  ---- vector<int>
		for (vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
		{
			cout << *(vit) << " ";
		}
		cout << endl;
	}

	//�ڶ��ֱ�����ʽ 
	//for_each(v.begin(), v.end(), myPrintVectorBig);

}

int main() 
{
	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
