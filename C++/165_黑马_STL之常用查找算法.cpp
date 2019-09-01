#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
#include<numeric>

/*

//����
v3.resize( min( v1.size() + v2.size(), max(v1.size(), v2.size()) ) );


*/


/*
find�㷨 ����Ԫ��
@param beg ������ʼ������
@param end ��������������
@param value ���ҵ�Ԫ��
@return ���ز���Ԫ�ص�λ��
*/
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	//����Ԫ��5�Ƿ����
	vector<int>::iterator ret = find(v.begin(), v.end(), 5);
	if (ret != v.end())
	{
		cout << "�ҵ���Ԫ��5��" << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}


	//���Ҵ���5��Ԫ��  ���ú�������
	vector<int>::iterator ret2 = find_if(v.begin(), v.end(), GreaterFive());
	if (ret2 != v.end())
	{
		cout << "�ҵ��˴���5��Ԫ�أ�" << *ret2 << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

//find �Զ����������ݲ���
class Person
{
public:

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}


	//�Զ������� �Ƚ�  Ҫ���� == �����
	bool operator==(const Person & p)
	{
		return this->m_Age == p.m_Age && this->m_Name == p.m_Name;
	}


	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���� p4 ������  
	Person p("ddd", 40);
	
	//�Զ����������ݲ���  �����ʵ����� 
	//������ṩ�������� ���������� == ��������ɱȽ�
	vector<Person>::iterator ret = find(v.begin(), v.end(), p);
	if (ret != v.end())
	{
		cout << "�ҵ��� ������" << (*ret).m_Name << " ���䣺 " << ret->m_Age << endl;
	}
}


//find_if �Զ����������ݲ���   binary_function ��Ԫ    unary_function һԪ
class MyCompare :public binary_function<Person *, Person *, bool>
{
public:
	bool operator()(Person * p1, Person * p2)const
	{
		if (p1->m_Age == p2->m_Age && p1->m_Name == p2->m_Name)
		{
			return true;
		}
		return false;
	}
};


void test03()
{
	vector<Person *>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	Person * person = new Person("bbb", 20);

	//bind2nd( MyCompare(), person) ������
	vector<Person *>::iterator ret = find_if(v.begin(), v.end(), bind2nd( MyCompare(), person));
	
	if (ret != v.end())
	{
		cout << "�ҵ���Ԫ�������� " << (*ret)->m_Name << " ���䣺 " << (*ret)->m_Age << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}


/*
adjacent_find�㷨 ���������ظ�Ԫ��
@param beg ������ʼ������
@param end ��������������
@param  _callback �ص���������ν��(����bool���͵ĺ�������)
@return ��������Ԫ�صĵ�һ��λ�õĵ�����
*/

void test04()
{
	vector<int>v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(5);

	vector<int>::iterator ret = adjacent_find(v.begin(), v.end());
	if (ret != v.end())
	{
		cout << "�ҵ������ظ�Ԫ��Ϊ�� " << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

/*
binary_search�㷨 ���ֲ��ҷ�
ע��: �����������в�����
@param beg ������ʼ������
@param end ��������������
@param value ���ҵ�Ԫ��
@return bool ���ҷ���true ����false
*/

//ע��: �����������в�����
void test05()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	//ע�⣺�����������������У�����
	//���ֲ��ҷ�
	bool ret = binary_search(v.begin(), v.end(), 6);
	
	
	if (ret)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

/*
count�㷨 ͳ��Ԫ�س��ִ���
@param beg ������ʼ������
@param end ��������������
@param  value�ص���������ν��(����bool���͵ĺ�������)
@return int����Ԫ�ظ���
*/

void test06()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);

	//ͳ��5���ֵĴ���
	int num = count(v.begin(), v.end(), 5);
	cout << "5�ĸ���Ϊ��" << num << endl;

}

/*
count_if�㷨 ͳ��Ԫ�س��ִ���
@param beg ������ʼ������
@param end ��������������
@param  callback �ص���������ν��(����bool���͵ĺ�������)
@return int����Ԫ�ظ���
*/


//��������  GreaterFive1() �ֳ�Ϊ �º���
class GreaterFive1
{
public:
	bool operator()(int val)
	{
		return val >= 5;
	}
};
void test07()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);

	//���Ҵ��ڵ���5��Ԫ�صĸ���   ��������  GreaterFive1()
	int num = count_if(v.begin(), v.end(), GreaterFive1());
	cout << "���ڵ���5�ĸ���Ϊ��" << num << endl;
}


int main() 
{

	test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();



	system("pause");
	return EXIT_SUCCESS;
}
