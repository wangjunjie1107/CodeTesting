#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������ҵ���� �ᳫ ����ԭ��
//����ԭ�� �� ����չ���п���  ���޸Ľ��йر�

//��̬�ô���������֯�ṹ��������߿ɶ��ԣ���߿���չ��
//��̬��Ӧ�ã�����ָ��ָ���������


/*

	��̬��̬����������
		��1���̳й�ϵ
		��2������д�� �麯��
		��3������  ��д  �����е��麯��

	��̬ʹ�ã�
		��1�������ָ��������� ָ������Ķ���
		��2������ָ�����������д���麯��

	��̬ԭ��
		��1���������������麯�����ڲ������ı�
		��2������vfptr  �麯����ָ�� virtual function pointer
		��3��vfptr -> vftable �麯����
		��4���麯�����ڲ���¼������ڵ�ַ
		��5����������д�����е��麯����������麯�����еĺ�����ڵ�ַ������Ϊ�����麯��
		��6�����ö�̬���ú�����ʱ��ʵ�ֵ�ַ��󶨣����麯�������Һ������

	��д
		��1���м̳�
		��2�����������麯�������麯��
		��3��������д�����е��麯�������麯��
		��4����д�� ����ֵ���͡����������β��б�һ�� 


*/



//���ö�̬ʵ�ּ�����
class AbstractCaculator
{
public:
	//���麯�� 
	//���������˴��麯�� ����������ڳ�����
	//���������޷�ʵ���������
	//��������̳��˳����࣬��ô����������Ҫ��д�����еĴ��麯������������Ҳ�ǳ�����
	virtual int getResult() = 0;

	int m_A;
	int m_B;
};

//�ӷ�������
class AddCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		return m_A + m_B;
	}
};

//����������
class SubCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		return m_A - m_B;
	}
};


//�˷�������
class MulCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		return m_A * m_B;
	}
};


//����������
class DivCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		if (m_B != 0)
		{
			return m_A / m_B;
		}
		else
			return -1;
	}
};


void test01()
{
	//�üӷ�������
	//����ָ��ָ���������   ��̬��Ӧ��
	AbstractCaculator * cal1 = new AddCaculator;
	cal1->m_A = 10;
	cal1->m_B = 20;
	//����ָ����������е���д�ĺ���
	cout<< cal1->getResult() << endl;

	delete cal1;


	//�ü���������
	//����ָ��ָ���������
	AbstractCaculator * cal2 = new SubCaculator;
	cal2->m_A = 100;
	cal2->m_B = 20;
	cout << cal2->getResult() << endl;

	delete cal2;


	//�ó˷�������
	//����ָ��ָ���������
	AbstractCaculator * cal3 = new MulCaculator;
	cal3->m_A = 100;
	cal3->m_B = 200;
	cout << cal3->getResult() << endl;

	delete cal3;


	//�ó���������
	//����ָ��ָ���������
	AbstractCaculator * cal4 = new DivCaculator;
	cal4->m_A = 100;
	cal4->m_B = 20;
	cout << cal4->getResult() << endl;

	delete cal4;
}
int main() 
{

	test01();


	system("pause");
	return 0;
}
