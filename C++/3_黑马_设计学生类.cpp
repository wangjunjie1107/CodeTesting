#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

/*
���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
*/

class Student
{
	//����Ȩ��
public:

	//�����ڲ�д������ �� ����   ��Ϊ��Ա 
	//����   --- ��Ա����   ��Ա����
	//����   --- ��Ա����   ��Ա����

	//��Ϊ ���� ���� ����ѧ��

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

	//����ѧ��
	void setId(int id)
	{
		m_Id = id;
	}
	//��ȡѧ��
	int getId()
	{
		return m_Id;
	}

	//��ʾѧ����Ϣ
	void showInfo()
	{
		cout << "������ " << m_Name << " ѧ�ţ� " << m_Id << endl;

	}

	//����
	//����
	string m_Name;

	//ѧ��
	int m_Id;

};

void test01()
{
	////����ѧ������

	//Student s1; //ͨ���� ��������Ĺ���  ʵ����

	//s1.m_Name = "����";
	//s1.m_Id = 1;
	//s1.showInfo();
	////cout << "������ " << s1.m_Name << " ѧ�ţ� " << s1.m_Id << endl;


	//Student s2;

	//s2.setName("����");
	//s2.setId(2);

	////cout << "������ " << s2.getName() << " ���䣺 "<<  s2.getId() << endl;
	//s2.showInfo();

	Student s3;

	s3.setName("wangjunjie");
	s3.setId(333);
	s3.showInfo();
}


int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
