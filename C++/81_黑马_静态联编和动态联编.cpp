#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������
class Animal
{
public:
	virtual void speak()//�麯��
	{
		cout << "������˵��" << endl;
	}
	virtual void eat(int a)//�麯��
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
	void eat(int a)  
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

void test01()
{
	cat c1;
	c1.eat(10);

	dog d1;
	d1.eat(10);

	Animal a1;
	a1.eat(0);
}
void test02()
{
	//����ָ��ָ���������
	Animal * animal = new cat;
	animal->eat(10);
}

void test03()
{

	Animal * animal = new cat;
	animal->eat(10);

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
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}




