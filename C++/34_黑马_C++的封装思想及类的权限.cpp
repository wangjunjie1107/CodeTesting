#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

/*
	C++��װ˼��ô��������Ժ���Ϊ��Ϊһ�����壬�����������е�����

	��װ�ڶ���˼�룺�����Ժ���Ϊ ����Ȩ�޿���

	struct �� class �����𣿣���

		struct Ĭ��Ȩ�� public
		class  Ĭ��Ȩ�� private

*/

//��
struct Person
{
	char m_Name[64];
	int m_Age;

	void personEat()
	{
		cout << m_Name << "�ڳ��˷�" << endl;
	}
};

//��
struct Dog
{
	char m_Name[64];
	int m_Age;

	void DogEat()
	{
		cout << m_Name << "�ڳԹ���" << endl;
	}
};

void test01()
{
	Person p1;
	strcpy(p1.m_Name, "wangjunjie");
	p1.m_Age = 25;
	p1.personEat();

	Dog dog;
	strcpy(dog.m_Name, "����");
	dog.m_Age = 5;
	dog.DogEat();
}


/*

	public	  ����Ȩ��    ���ڿ��Է��� ������Է���
	protected ����Ȩ��    ���ڿ��Է��� ���ⲻ���Է���   ���ӿ��Է��ʸ��׵ı���Ȩ�޵�����
	private   ˽��Ȩ��    ���ڿ��Է��� ���ⲻ���Է���   ���Ӳ����Է��ʸ��׵�˽��Ȩ�޵�����

*/

class Person2
{
public:			//����Ȩ��
	string m_Name;
protected:		//����Ȩ��
	string m_car;
private:		//˽��Ȩ��
	int m_Pwd;

public:
	void func()
	{
		m_Name = "zhangsan";//����Ȩ��  ���ڿ��Է���
		m_car = "������";   //����Ȩ��  ���ڿ��Է���
		m_Pwd = 12345;     //˽��Ȩ��   ���ڿ��Է���
	}
};

void test02()
{
	Person2 p1;
	p1.m_Name = "zhangsan";
	cout << p1.m_Name << endl;


	//p1.m_car = "falali";   //����Ȩ��  ������ �����Է��ʵ�
	
	//p1.m_Pwd = 123;		//˽��Ȩ��  ������ �����Է���

}


int main() {

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
