#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������
class Animal
{
public:
	virtual void speak() //�麯��
	{
		cout << "������˵��" << endl;
	}
};

//è��
class cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//Animal & animal = c1;
//C++ �и����ָ������� ����ָ������Ķ��� ���ᱨ��
void doSpeak(Animal & animal)
{
	//���ڵ�ַ��󶨣����speak������ַ����ȷ�������ö�����˵��
	//���ǣ����������������è����������è˵���������Ҫ��ַ���
	//��ַ��� virtual
	animal.speak();
}

void test01()
{
	cat c1;
	doSpeak(c1);

	dog d1;
	doSpeak(d1);

	Animal a1;
	doSpeak(a1);
}

int main() 
{	

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




