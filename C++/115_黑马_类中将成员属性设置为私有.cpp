#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;



//����Ա��������Ϊ˽�еĺô��� 
//���Կ������Զ���Ķ�дȨ��,
//����д�������Լ�����ݵ���Ч��


class Person
{
public:
	//��������
	void setName(string name)
	{
		this->m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return this->m_Name;
	}

	//��������
	void setAge(int age)
	{
		//��⴫��������Ч��
		if (age < 0 || age > 150)
		{
			cout << "����������Ч" << endl;
			return;
		}

		this->m_Age = age;
	}
	//��ȡ����
	int getAge()
	{
		return this->m_Age;
	}

	//���ð���
	void setLover(string lover)
	{
		this->m_Lover = lover;
	}

private:
	string m_Name;   //�ɶ���д
	int m_Age;		 //�ɶ���д
	string m_Lover;  //ֻ��
};

void test()
{
	Person p1;
	//�����ɶ���д
	p1.setName("wangjunjie");
	cout << "p1������Ϊ��" << p1.getName() << endl;

	//����ɶ���д
	p1.setAge(18);
	cout << "p1������Ϊ��" << p1.getAge() << endl;


	p1.setLover("hahaha");//ֻд
}


int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}
