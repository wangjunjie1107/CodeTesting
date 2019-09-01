#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyAdd
{
	friend ostream & operator<<(ostream & cout, const MyAdd & m);
	
public:
	MyAdd(int a)
	{
		this->m_Num = a;
	}

	//���� ���� ++
	//������β������intռλ����������������ʶ������Ǻ���++
	MyAdd  operator++(int)
	{
		//�� ��¼ԭ����ֵ
		MyAdd temp = *this;

		//��++
		this->m_Num++;

		//�ٽ���¼��ֵ����
		return temp;
	}

	//���� ���� --
	MyAdd  operator--(int)
	{
		MyAdd temp = *this;
		this->m_Num--;
		return temp;
	}


	//���� ǰ��++
	MyAdd & operator++()
	{
		// �� ++
		this->m_Num++;
		
		//�󷵻�����
		return *this;
	}

	//���� ǰ��--
	MyAdd & operator--()
	{
		this->m_Num--;
		return *this;
	}

private:
	int m_Num;
};

//Ϊ�˿��Բ�����ʽ��̵�Ч�� ����<<�����
ostream & operator<<(ostream & cout, const MyAdd & m)
{
	cout << m.m_Num;
	return cout;
}

void test()
{
	MyAdd a(10);

	cout << "a++ " << a++ << "  " << a << endl;
	cout << "a-- " << a-- << "  " << a << endl;
	cout << "++a " << ++a << "  " << a << endl;
	cout << "--a " << a-- << "  " << a << endl;

}

// ++i  Ч�� ���� i++  ��Ϊ ����++ �� ����--  ��Ҫ����һ����ʱ����
int main() 
{

	test();




	system("pause");
	return EXIT_SUCCESS;
}
