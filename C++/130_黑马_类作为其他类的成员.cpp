#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>


//�ֻ���
class Phone
{
public:
	Phone()
	{
		cout << "Phone��Ĭ�Ϲ��캯������" << endl;
	}

	Phone(string name)
	{
		cout << "Phone���вι��캯������" << endl;
		this->m_PhoneName = name;
	}

	~Phone()
	{
		cout << "Phone��������������" << endl;
	}

	string m_PhoneName;
};


//��Ϸ��
class Game
{
public:
	Game()
	{
		cout << "Game��Ĭ�Ϲ��캯������" << endl;
	}

	Game(string gName)
	{
		cout << "Game���вι��캯������" << endl;
		m_GameName = gName;
	}

	~Game()
	{
		cout << "Game��������������" << endl;
	}

	string m_GameName;
};

//����
class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	//��ʼ���б�ʵ�����Գ�ʼ��
	Person(string name, string pName, string gName) :m_PersonName(name), m_PersonPhone(pName), m_PersonGame(gName)
	{
		cout << "Person���вι��캯������" << endl;
	}

	void playGame()
	{
		cout << this->m_PersonName << "����" << this->m_PersonPhone.m_PhoneName
			<< "��" << this->m_PersonGame.m_GameName << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;

	}


	//���캯��˳�� Phone Game Person 
	//���ߵ������Phone��Game��Ķ����λ�ã����캯������ʱ��Ҳ�෴
	//�����͹���˳���෴  ջ���Ƚ����
	string m_PersonName;
	Game m_PersonGame;
	Phone m_PersonPhone;

	
};

void test01()
{
	//����������� ��Ϊ�����еĳ�Ա�������˳���ǣ�
	//�ȵ������������Ĺ��죬�ٵ��ñ��๹�죬����˳���빹���෴
	
	
	Person p1("Tom", "ƻ��", "�Լ�");
	p1.playGame();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
