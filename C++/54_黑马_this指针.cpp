#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Person
{
public:
	//ÿһ���Ǿ�̬��Ա�����ڲ������ؼ���һ��thisָ��
	Person(int age)
	{
		//this���Խ�����Ƴ�ͻ
		this->age = age;
	}

	Person& personAddAge(Person & p)
	{
		this->age += p.age;//p.ageÿ�ζ�Ϊ10����Ϊ������� p

		//���� p2 �����ã�Ҳ���� p2 �ı���
		return *this;  // *thisָ��p2�ı���  
					  //thisָ��p2��ָ��
	}

	int age;
};

void test01()
{
	Person p1(10);//���ù��캯��
	cout << "p1������Ϊ�� " << p1.age << endl;

	Person p2(10);

	//��ʽ���˼��  p2.personAddAge(p1) ���ǿ������캯�����ã�ֻ����ͨ���Ա���������� 
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
	cout << "p2������Ϊ�� " << p2.age << endl;


}
int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}

