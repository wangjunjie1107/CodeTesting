#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//������
class Animal
{
public:
	virtual void speak()  //�麯��
	{
		cout << "������˵��" << endl;
	}

	virtual void eat(int a)  //�麯��
	{
		cout << "�����ڳԷ�" << endl;
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

	//���� ��д �����е��麯��
	void eat(int a)  //�麯��
	{
		cout << "Сè�ڳԷ�" << endl;
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

	void eat(int a)
	{
		cout << "С���ڳԷ�" << endl;
	}
};

//C++�и����ָ��������� ����ָ������Ķ��� ���ᱨ��
// Animal & animal = c1;  ���������ָ���������
void doSpeak(Animal & animal)
{
	//���ڵ�ַ��󶨣����speak������ַ����ȷ�������ö�����˵��
	//���ǣ����������������è����������è˵���������Ҫ��ַ���
	animal.speak();
}

void test01()
{
	cat c1;
	doSpeak(c1);

	dog d1;
	doSpeak(d1);
}

void test02()
{
	//�麯��ָ��
	cout << "sizeof  Animal = " << sizeof(Animal) << endl;
}

void test03()
{
	Animal * animal = new dog;
	animal->speak();
	animal->eat(10); //������� δ ��д�����е��麯�� ������ָ�����ʱ����ø����еĺ���


	//*(int *)animal �����õ����麯������
	// *(int *)*(int *)animal �����õ��˺�����ڵ�ַ
	((void(*)())(*(int *)*(int *)animal))();

	// *((int*)*(int *)animal +1) �ҵ��Է���ڵ�ַ

	//���ù���������
	//C/C++Ĭ�ϵ��ù���  __cdecl
	//C++���ù���  __stdcall

	//�������� ָ�� stdcall���ù���
	typedef void(__stdcall *FUNCPOINT)(int);
	(FUNCPOINT(*((int*)*(int *)animal + 1)))(10);


}
int main()
{

	test01();
	test02();
	
	test03();
	system("pause");
	return EXIT_SUCCESS;
}




















