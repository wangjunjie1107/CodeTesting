#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*

	���캯���ķ��ࣺ
		���෽ʽ1������  �޲ι��죨Ĭ�Ϲ��죩  �вι���
		���෽ʽ2������  ��������  ��ͨ����
*/

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
	}

	//��������
	//ֵ���ݵı��� ���ǵ��� �������캯��
	Person(const Person & p)
	{	
		this->m_Age = p.m_Age;
		cout << "Person�Ŀ�����������" << endl;	
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;

};

//2�����캯���ĵ���
void test()
{
	//Ĭ�Ϲ��캯���ĵ���
	Person p1;

	//�вι��캯���ĵ���
	Person p2(10);
	Person p3 = Person(10);//��ʾ���вο�����������

	//�������캯���ĵ���
	Person p4(p3);
	Person p5 = Person(p3);//��ʾ�����ÿ������캯��


	//ע������
	//1 �� ��Ҫ�������ŷ� ����Ĭ�Ϲ��캯��
	//		Person p(); �������Ὣ���뿴�� ������������������Ϊ���ڴ�������
	//Person p(); //�����ں�������
	//void func();


	//2������дPerson(10) ��Ϊ�������� 
	//  �������� �ص㣺������ִ����ϣ������ͷ�
	Person(10);
	cout << "---------------------\n";

	//3����Ҫ���ÿ������캯��  ��ʼ����������
	// ��д��Person(p6);  ����������Ϊд�� Person p6  
	//����Ѿ���p4�����ض��� ��������ŵ���ֵû����
	Person(p6);//������൱�� Person p6 

	//4����ʽת���� �ɶ��Ե�
	Person p7 = 10; //������������תΪ Person p7 = Person(10);
	//������ʽת���� ���ÿ������캯��
	Person p8 = p7; //��ʽת��Ϊ Person p8 =  Person(p7);
}

void func(Person p)
{
	//������Ϊ��������
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
