#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//��ӡ����
class Printer
{
private:
	static Printer * singlePrinter;

	Printer() { m_Count = 0; }; //��Ĭ�Ϲ�����Ϊ˽�г�Ա

	Printer(const Printer & ) {};//������������Ϊ˽�г�Ա


public:
	int m_Count;//ͳ�ƴ�ӡ����

	//�ⲿ��ȡ�ӿ�
	static Printer * getInstence()
	{
		return singlePrinter; //����Printer���͵Ķ���
	}

	//���õ���ģʽ�еĳ�Ա����
	void printTest(string text)
	{
		cout << text << endl;
		m_Count++;
	}
};

Printer * Printer::singlePrinter = new Printer;

void test01()
{
	//��ȡ�ӿ� ͨ���ӿڴ��������
	Printer * p1 = Printer::getInstence();


	//���ó�Ա����
	p1->printTest("wangjunjie 18");
	p1->printTest("wangjunjie 19");
	p1->printTest("wangjunjie 20");
	p1->printTest("wangjunjie 21");

	cout << "��ӡ����Ϊ��" << p1->m_Count << endl;

	Printer * p2 = Printer::getInstence();

	p2->printTest("wangjunjie 25");
	cout << "��ӡ����Ϊ��" << p2->m_Count << endl;

	//ͨ��ͬһ���ӿڴ����Ķ���ʹ�õ���ͬһ������ӿڣ����Դ�ӡ�����ظ�

}


int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}


















