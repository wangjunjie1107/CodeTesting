#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class MyPrint
{
public:
	//����()�����
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void myPrint(string text)
{
	cout << text << endl;
}

void test01()
{
	MyPrint mp;
	//�º��� ���ʲ��Ǻ��������Ƕ���
	//�������Ķ��� Ҳ��Ϊ ��������
	mp("hello world");
	mp("hahahah");
	myPrint("hello world");
}

//�º��� �ǳ���� û�й̶�д��
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


void test02()
{
	MyAdd m_Add;
	cout << m_Add(1, 3) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;

}
