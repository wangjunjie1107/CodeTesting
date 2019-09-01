#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//������ҵ���� �ᳫ ����ԭ��
//����ԭ�򣺶���չ���п��� ���޸Ľ��йر�

//��̬�ô���������֯�ṹ��������߿ɶ��ԣ���߿���չ��

//���ö�̬ʵ�ּ�����
class AbstractCalculator
{
public:

	//�麯��
	//vfptr virtual function pointer  �麯��ָ��
	virtual int getResult()
	{
		return 0;
	}

	int m_A;
	int m_B;
};

//�ӷ�������
class AddCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_A + m_B;
	}
};

//����������
class SubCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_A - m_B;
	}
};


//�˷�������
class MultCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_A * m_B;
	}
};

//����������
class DivideCalculator :public AbstractCalculator
{

	int getResult()
	{
		if (m_B != 0)
		{
			return m_A / m_B;
		}
		else
		{
			cout << "����Ϊ�㣡" << endl;
			return -1;
		}
	}
};

void test01()
{
	/*
		��̬�����ӹ�ϵ��������д���������������б�����ֵ����ͬ�����ຯ��

		������д��������������ֵ�������б���ͬ 
		�������أ����������뷵��ֵ�޹أ������б�ͬ

		ʹ�ö�̬������ָ��ָ���������

	*/


	//ʹ�üӷ������� 
	cout << "----------ʹ�üӷ�������------------"<< endl;
	AbstractCalculator * cal = new AddCalculator;

	//��ֵ
	cal->m_A = 10;
	cal->m_B = 20;
	//���ú���
	cout << cal->getResult() << endl;
	//�ͷŶѿռ�
	delete cal;

	//ʹ�ü��������� 
	cout << "----------ʹ�ü���������------------" << endl;
	cal = new SubCalculator;
	cal->m_A = 100;
	cal->m_B = 200;
	cout << cal->getResult() << endl;
	delete cal;

	//ʹ�ó˷������� 
	cout << "----------ʹ�ó˷�������------------" << endl;
	cal = new MultCalculator;
	cal->m_A = 20;
	cal->m_B = 10;
	cout << cal->getResult() << endl;
	delete cal;

	//ʹ�ó���������
	cout << "----------ʹ�ó���������------------" << endl;
	cal = new DivideCalculator;
	cal->m_A = 20;
	cal->m_B = 10;
	cout << cal->getResult() << endl;
	delete cal;


	cal = NULL;

}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}

