#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


//��������Ĭ�ϸ�һ�������4������
// ���캯������ʵ�֣�  ������������ʵ�֣� �������죨ֵ������ operator= (ֵ����)

class Person
{
public:

	//Ĭ�Ϲ���
	Person() 
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	};

	//�вι���  
	Person(const char * name)
	{
		cout << "Person�вι��캯������" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	//��������  ���
	Person(const Person & p)
	{
		cout << "Person�������캯������" << endl;
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}

	//���� = �����  ���
	Person & operator=(const Person & p)
	{
		
		cout << "Person�ĸ�ֵ��������� " << endl;

		//���ж϶����Ƿ������ݣ���������ͷŸɾ�
		if (this->m_Name != NULL)
		{
			delete []this->m_Name;
			this->m_Name = NULL;
		}

		//�����¿ռ� �ַ�����
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);

		return *this; //  *this ���� Person ����
	}


	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
		if (this->m_Name != NULL)
		{
			delete[]this->m_Name;
			this->m_Name = NULL;
		}
	}


	char * m_Name;
};


void test01()
{
	Person p1("wangjunjie"); //�вι���

	Person p2(p1);  //��������

	Person p3; //Ĭ�Ϲ���

	p3 = p2; // = ���������


	cout << "p1 = " << p1.m_Name << endl;
	cout << "p2 = " << p2.m_Name << endl;
	cout << "p3 = " << p3.m_Name << endl;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
