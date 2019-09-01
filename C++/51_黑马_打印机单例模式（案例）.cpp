#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

//��ӡ����
class Printer
{
public:
	static Printer * getInstance()
	{
		return singlePrinter;//����˽�о�̬��Ա����
	}

	void printTest(string text)
	{
		cout << text << endl;
		m_Count++;
	}

	int m_Count;//ͳ�ƴ�ӡ����

private:
	Printer() 
	{
		m_Count = 0;
	};//���캯��˽�л�
	Printer(const Printer &) {};//��������˽�л�
	static Printer * singlePrinter;
};

Printer * Printer::singlePrinter = new Printer;

void test01()
{
	Printer * p1 = Printer::getInstance();

	p1->printTest("wangjunjie");
	p1->printTest("wangjunjie");
	p1->printTest("wangjunjie");

	cout << "��ӡ����Ϊ�� " << p1->m_Count << endl;

	Printer * p2 = Printer::getInstance();

	p2->printTest("wangjunjie");
	cout << "��ӡ����Ϊ�� " << p2->m_Count << endl;


}
int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}

