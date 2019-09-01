#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//�������������Խ�� ����ָ�뱻�ͷŵ�ʱ��ֻ���ø�����������������������������������������

//����������Ҫ��������Ҳ��Ҫ��ʵ��
//����������� ���˴�����������ô�������Ҳ���ڳ�����

// ����������� ������ �� ��������������ָ�����ͷŵ�ʱ�򣬻����������������� 
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}

	virtual void speak() = 0; //���麯��


	//�������������Խ�� �������������������������
	//virtual ~Animal()
	//{
	//	cout << "Animal������������" << endl;
	//}


	
	//����������Ҫ��������Ҳ��Ҫ��ʵ��
	//����������� ���˴�����������ô�������Ҳ���ڳ�����
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal����������������" << endl;

}



class Cat :public Animal
{
public:

	Cat(char * name)
	{
		cout << "Cat���캯������" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	//������д ���� �е� ���麯��
	void speak()
	{
		cout << this->m_Name << "Сè��˵��" << endl;
	}

	//���������������� �� ��������  ����ָ�����ͷŵ�ʱ����������������ᱻ���� 
	~Cat()
	{
		if (this->m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete[]this->m_Name;
			this->m_Name = NULL;
		}
	}
	char * m_Name; //����
};



void test01()
{
	//����ָ��ָ���������
	Animal * animal_Cat = new Cat("Tom");
	animal_Cat->speak();

	delete animal_Cat;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
