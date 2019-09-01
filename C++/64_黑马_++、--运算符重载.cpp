#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyInter
{
	
	friend ostream& operator<<(ostream & cout, MyInter myInt);
		
public:
	MyInter()
	{
		num = 0;
	}

	//���ص��������
	//ǰ��
	MyInter& operator++()
	{
		//��++
		num++;
		//�󷵻�����
		return *this;
	}

	//���� 
	//������β������intռλ����������������ʶ������Ǻ���++
	MyInter operator++(int)
	{
		//�� ��¼ԭ��ֵ
		MyInter temp = *this;
		//��++
		num++;
		//�ٽ���¼��ֵ����
		return temp;
	}


	//���ؼ������
	//ǰ��
	MyInter& operator--()
	{
		//��--
		num--;
		//�󷵻�����
		return *this;
	}

	//���� 
	//������β������intռλ����������������ʶ������Ǻ���--
	MyInter operator--(int)
	{
		//�� ��¼ԭ��ֵ
		MyInter temp = *this;
		//��--
		num--;
		//�ٽ���¼��ֵ����
		return temp;
	}
private:
	int num;
};

//ȫ�ֺ�������<<
ostream& operator<<(ostream & cout, MyInter myInt)
{
	cout << myInt.num;
	return cout;
}


//ǰ�õ���
void test01()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << ++(++myInt) << endl; //  2 
	cout << myInt << endl;   // 2
}

//���õ���
void test02()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << myInt++ << endl; // 0

	cout << myInt << endl; // 1
}


//ǰ�õݼ�
void test03()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << --(--myInt) << endl; //  -2
	cout << myInt << endl;   // -2
}

//���õݼ�
void test04()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << myInt-- << endl; // 0

	cout << myInt << endl; // -1
}

int main()
{
	//test01();

	//test02();


	test03();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}
