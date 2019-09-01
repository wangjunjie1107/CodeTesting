#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:
	
	Person()
	{
		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
	}
	
	Person(int a)
	{
		cout << "Person ���вι��캯������" << endl;
	}

	Person(const Person & p)
	{
		cout << "Person �Ŀ������캯������" << endl;
	}

	~Person()
	{
		cout << "Person ��������������" << endl;
	}
};


/*

 C �� C++ ���������ڴ���ͷ��ڴ������
	
	��1��C��malloc  C++ �� new
	��2��malloc --- free
	��3��new ----- delete	
	��4��malloc free �����ǿ⺯��
	��5��new delete �����������
	��6��malloc ���ص��������� void *
	��7��new ���ص����������Ǵ����Ķ����ָ������

*/


void test01()
{
	//new ����� Ҳ���ڶ��������ڴ�ռ�
	Person * p1 = new Person;

	Person * p2 = new Person(10);

	Person * p3 = new Person(*p2);

	//������ͷ�new �����Ķ������ùؼ���delete 
	delete p1;
	delete p2;
	delete p3;

	//ָ��ָ���
	p1 = NULL;
	p2 = NULL;
	p3 = NULL;
}

// 2��ע������
// ��Ҫ�� void * ����new�����Ķ��� ԭ���޷��ͷ�
void test02()
{
	void * p1 = new Person;
	delete p1;//�޷��ͷ�  �Ҳ���p1


	Person * p = new Person;
	delete p;
	p = NULL;//delete ֮�� ָ��Ҫ ָ���

	if (p == NULL)
	{
		cout << "p���ͷ���" << endl;
	}
}

//3������new�ڶ�����������
void test03()
{	
	//�������new�ڶ������� �Զ����������ݵ����飬
	//������Ĭ�Ϲ��캯��
	Person * PersonArray = new Person[10];
	
	delete[]PersonArray;

	//�����ջ�Ͽ������飬����û��Ĭ�Ϲ��캯��
	Person p[2] = { Person(1),Person(2) };
	
}
int main()
{

	//test01();

	test02();

	//test03();

	system("pause");
	return EXIT_SUCCESS;
}










