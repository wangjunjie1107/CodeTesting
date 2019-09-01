#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//����ģʽ--��ӡ����
//ͨ��һ���ֻ࣬�ܴ���һ�����󣬹����������
class Printer
{
public:

	//�����ṩgetInstance ��ȡ��ӡ��ָ�룬������ֻ��״̬
	static Printer* getInstance()
	{
		return singlePrinter;
	}

	void printing(string Str)
	{
		cout << Str << endl;
		this->m_count++;
	}

	int m_count = 0;//ͳ�ƴ�ӡ����

private:

	//��ֹ����������󣬽����캯��˽�л�
	Printer() {}; 
	Printer(const Printer& p) {};

	//��̬��Ա����  �������� �����ʼ��
	static Printer* singlePrinter;
};
//�����ʼ��
Printer* Printer::singlePrinter = new Printer;

void test01()
{
	Printer* p1 = Printer::getInstance();
	p1->printing("��ְ����");
	p1->printing("��������");
	p1->printing("��ֵ����");
	p1->printing("��ְ����");
	cout << "��ӡ��ʹ�ô���Ϊ�� " << p1->m_count << endl;


	Printer* p2 = Printer::getInstance();
	p2->printing("��������");
	//�����ڲ�ͬ��ָ�룬��ӡ�����ڵ��ӣ���˵��ʹ����ͬһ������
	cout << "��ӡ��ʹ�ô���Ϊ�� " << p2->m_count << endl;


	//���ִ�����ʽ�����Ĭ�Ϲ��죬�����µĶ���
	//���Ҫ�����캯��˽�л�����ֹ�����������
	//Printer* p3 = new Printer; 
	//p3->printing("��������");
	//cout << "��ӡ��ʹ�ô���Ϊ�� " << p3->m_count << endl;

}



int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
