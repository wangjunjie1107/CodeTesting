#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}

	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	//��ȡ����
	int getAge()
	{
		return m_Age;
	}

	//��������
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}

	//��������
	void setLover(string Lover)
	{
		m_Lover = Lover;
	}


private:

	string m_Name;//�ɶ���д

	int m_Age = 18;//�ɶ� ����д ��������������

	string m_Lover;//ֻд
};



//����Ա��������Ϊ˽�еĺô��� 
//		���Կ������Զ���Ķ�дȨ��,����д�������Լ�����ݵ���Ч��


void test01()
{
	Person p1;



	//���� �ɶ���д  ֻ��ͨ�����еĳ�Ա�������ж�д����������ֱ�Ӷ�д
	p1.setName("wangjunjie");
	cout << "p1������Ϊ�� " << p1.getName() << endl;




	//���� �ɶ�  ��д ���������Ƶ�д��
	//ֻ��ͨ�����еĳ�Ա�������ж�д����������ֱ�Ӷ�д
	p1.setAge(200);
	cout <<"p1������Ϊ�� "<< p1.getAge() << endl;




	//���� ֻ��д   ֻ��ͨ�����еĳ�Ա��������д����������ֱ�Ӷ�д
	p1.setLover("hahaha");
	//cout << p1.m_Lover << endl;//ֻд״̬�������Զ�
}


int main() 
{

	test01();
	system("pause");
	return EXIT_SUCCESS;
}
