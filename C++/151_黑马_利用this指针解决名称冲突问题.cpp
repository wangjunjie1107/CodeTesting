#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	int age;


	//ÿһ���Ǿ�̬��Ա�����ڲ�
	//   �����ؼ���һ��thisָ��
	Person(int age)
	{
		//this���Խ�����Ƴ�ͻ


		//���Ƴ�ͻ ����������ʶ�Ǹ��ǲ������Ǹ��Ǳ���ֵ����  �ᵼ�½������
		//age = age;


		//����thisָ����
		this->age = age; 
	}

	Person& personAddAge(Person & p)
	{
		this->age += p.age;
		//*this �� p2 �ı���  
		//this�� p2 �Ĵ�ŵ�ַ
		return *this; 
	}

};

void test01()
{
	Person p1(10);
	cout << "p1������Ϊ�� " << p1.age << endl;


	Person p2(10);

	// ���� p2 �������� p1 ������
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1); //��ʽ���˼��

	cout << "p2������Ϊ�� " << p2.age << endl;

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
