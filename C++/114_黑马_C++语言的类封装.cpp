#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

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
struct dog
{
	char m_Name[64];
	int m_Age;

	void dogEat()
	{
		cout << m_Name << "�ڳԹ���" << endl;
	}
};

void test01()
{
	Person p1;
	strcpy(p1.m_Name, "zhangsan");
	p1.m_Age = 19;
	p1.personEat();

	dog p2;
	strcpy(p2.m_Name, "����");
	p2.m_Age = 19;
	p2.dogEat();

	//���ò����� �Թ�����Ϊ�ˣ�
	//��Ϊ��Person�ṹ����û��DogEat
	//p1.dogEat();
}

//C++��װ˼��ô��� �����Ժ���Ϊ ��Ϊһ������  �����������е�����
//��װ�ڶ���˼�룺 �����Ժ���Ϊ ����Ȩ�޿���

/*
	struct Ĭ��Ȩ�� public
	class Ĭ��Ȩ�� private
*/

//public  ����Ȩ��      ���� ���Է���  ���� Ҳ���Է���
//protected  ����Ȩ��   ���� ���Է���  ���� �����Է���  ���ӿ��Է��ʸ��׵ı���Ȩ�޵�����
//private    ˽��Ȩ��   ���� ���Է���  ���� �����Է���  ���Ӳ����Է��ʸ��׵�˽��Ȩ�޵�����


class Person2
{
public://����Ȩ��
	string m_Name;
protected://����Ȩ��  ������Է��ʱ���Ȩ��
	string m_Car;
private:
	int m_Pwd;//˽��Ȩ�� ���಻���Է���˽��Ȩ��


public:
	void func()
	{
		m_Name = "wangjunjie";	//����Ȩ�� ���ڿ��Է���
		m_Car = "benchi";		//����Ȩ�� ���ڿ��Է���
		m_Pwd = 111;			//˽��Ȩ�� ���ڿ��Է���
	}
};

class Person3 :public Person2
{
public:
	void func()
	{
		m_Car = "benchi";//������Է��ʸ���ı���Ȩ��
		cout << m_Car << endl;
	
		//m_Pwd = 10;//�����޷����ʸ����˽��Ȩ��
	}

};

void test02()
{
	Person3 p;
	p.m_Name = "wangjunjie";
	cout << p.m_Name << endl;


	p.func();//���Դ�ӡ����ı���Ȩ��



}
int main()
{
	test02();


	system("pause");
	return EXIT_SUCCESS;
}
