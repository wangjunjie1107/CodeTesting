#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string> 
using namespace std;




//����CPU
class CPU
{
public:
	virtual void calculate() = 0; //���麯��
};

//�����Կ�
class VideoCard
{
public:
	virtual void display() = 0;//���麯��
};

//�����ڴ���
class Memory
{
public:
	virtual void storage() = 0;//���麯��
};


//��������̼�

//CPU������
class Cpu01 :public CPU
{
public:
	//��д�����鹹����
	void calculate()
	{
		cout << "     CPU����װ������Cpu01" << endl;
	}
};

class Cpu02 :public CPU
{
public:
	//��д�����鹹����
	void calculate()
	{
		cout << "     CPU����װ������Cpu02" << endl;
	}
};

//�Կ�������
class Card01 :public  VideoCard
{
public:
	//��д�����鹹����
	void display()
	{
		cout << "     �Կ�����װ������Card01" << endl;
	}
};

class Card02 :public  VideoCard
{
public:
	//��д�����鹹����
	void display()
	{
		cout << "     �Կ�����װ������Card02" << endl;
	}
};



//�ڴ�������
class Memory01 :public Memory
{
public:
	//��д�����鹹����
	void storage()
	{
		cout << "     �ڴ�����װ������Memory01" << endl;
	}
};

class Memory02 :public Memory
{
public:
	//��д�����鹹����
	void storage()
	{
		cout << "     �ڴ�����װ������Memory02" << endl;
	}
};




//��װ
class Computer
{
public:

	//Ĭ�Ϲ���
	Computer() {};

	//�вι���
	Computer(CPU * cpu, VideoCard * videocard, Memory * memory)
	{
		this->m_Cpu = cpu;
		this->m_Card = videocard;
		this->m_Memory = memory;
	}

	//�����������
	CPU * m_Cpu;
	VideoCard * m_Card;
	Memory * m_Memory;


	//��װ����
	void doWork()
	{
		cout << "----------------------------------" << endl;
		cout << "          ������װ��ɣ�          " << endl;
		cout << "����̣�" << endl;


		this->m_Cpu->calculate();
		this->m_Card->display();
		this->m_Memory->storage();


		cout << "----------------------------------" << endl;

	}

	//��������
	~Computer()
	{
		if (this->m_Cpu != NULL)
		{
			delete this->m_Cpu;
			this->m_Cpu = NULL;
		}
		if (this->m_Card != NULL)
		{
			delete this->m_Card;
			this->m_Card = NULL;
		}
		if (this->m_Memory != NULL)
		{
			delete this->m_Memory;
			this->m_Memory = NULL;
		}

		cout << "�����ڴ��Ѿ��ͷţ�" << endl;
	}

};


void test01()
{
	//���� ��Ӷ��� ��װ  Ĭ�Ϲ���
	Computer c1;
	c1.m_Cpu = new Cpu02;
	c1.m_Card = new Card01;
	c1.m_Memory = new Memory02;
	c1.doWork();

	//���� ��Ӷ��� ��װ  �вι���
	CPU * cpu02 = new Cpu01;
	VideoCard * card02 = new Card01;
	Memory * memory02 = new Memory02;
	Computer c2(cpu02, card02, memory02);
	c2.doWork();


	//�����ͷ�������������ִ��

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
