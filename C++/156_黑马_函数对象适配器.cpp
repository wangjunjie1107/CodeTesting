#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional> //�ڽ��������� ͷ�ļ�
#include<string>

class MyPrint :public binary_function<int, int, void>
{
public:
	void operator()(int num, int start)const
	{
		cout << "num = " << num << "   start = " << start << "  sum = " << num + start << endl;
	}
};

//1����������������
//1.1 ��  bind2nd  bind1st
//1.2 �̳� public binary_function<��������,�������� ,����ֵ����>
//1.3 ��const  ʹ�ò����޸�thisָ��

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10;i++)
	{
		v.push_back(i);
	}
	cout << "��������ʼ�ۼ�ֵ��" << endl;
	int start;
	cin >> start;

	//bind2nd ��ʾ�������Ὣ start �� �����б��еĵڶ���ֵ��ƥ��
	for_each(v.begin(), v.end(), bind2nd(MyPrint(), start));

	//bind1nd ��ʾ�������Ὣ start �� �����б��еĵ�һ��ֵ��ƥ��
	for_each(v.begin(), v.end(), bind1st(MyPrint(), start));

}

//2��ȡ��������
class GreaterFive :public unary_function<int, bool>
{
public:
	bool operator()(int val)const
	{
		return val > 5;  //ȡ����������ʹ�ý������С��5�ĵ�һ����
	}
};
//2.1 ȡ�������� not1
//2.2 �̳� public unary_function<��������,����ֵ����>
//2.3 ��const
void test02()
{
	//һԪȡ��������
	vector<int>v;
	for (int i = 0; i < 10;i++)
	{
		v.push_back(i);
	}
	//vector<int>::iterator ret = find_if(v.begin(), v.end(), not1( GreaterFive()));


	//ȡ����������ʹ�ý������С��5�ĵ�һ����  not1(bind2nd(greater<int>(), 5))
	//greater<int>()  �ڽ��������� ͷ�ļ� include<functional>
	vector<int>::iterator ret = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), 5)));
	if (ret != v.end())
	{
		cout << "�ҵ�С��5������Ϊ" << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//��Ԫȡ��������   not2(less<int>())  ����  
	//not2(greater<int>()) ����
	sort(v.begin(), v.end(), not2(greater<int>()));
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
}

//3������ָ��������
void myPrint(int val, int start)
{
	cout << val + start << " ";
}

void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	cout << endl;

	cout << "��������ʼ�ۼ�ֵ��" << endl;
	int start;
	cin >> start;

	//��myPrint����ָ�� ����� ��������  ����
	//���� prt_fun
	for_each(v.begin(), v.end(), bind2nd( ptr_fun(myPrint), start ));
	cout << endl;

}


//4����Ա����������
class Person
{
public:

	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "������ " << this->m_Name << "���䣺 " << this->m_Age << endl;
	}

	void addAge()
	{
		this->m_Age++;
	}
};

void test04()
{
	vector<Person>v1;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	
	//ʵ�����
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);


	vector<Person *>v2;


	Person * p5 = new Person(p1);
	Person * p6 = new Person(p2);
	Person * p7 = new Person(p3);
	Person * p8 = new Person(p4);


	//ָ������
	v2.push_back(p5);
	v2.push_back(p6);
	v2.push_back(p7);
	v2.push_back(p8);

	cout << endl;

	//����mem_fun_ref �� ʵ���Ա������������
	cout << "����mem_fun_ref �� ʵ���Ա������������" << endl;


	for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::showPerson));
	for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::addAge));
	
	cout << "-----------  �����1��  --------------" << endl;

	for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::showPerson));


	cout << endl;

	//����mem_fun �� ָ�����ͳ�Ա������������
	cout << "����mem_fun �� ָ�����ͳ�Ա������������" << endl;

	for_each(v2.begin(), v2.end(), mem_fun(&Person::showPerson));
	for_each(v2.begin(), v2.end(), mem_fun(&Person::addAge));

	cout << "-----------  �����1��  --------------" << endl;

	for_each(v2.begin(), v2.end(), mem_fun(&Person::showPerson));

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
