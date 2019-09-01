#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;


class ChairMan
{
public:
	//�����ṩgetInstance ��ȡ��ϯָ�룬������ֻ��״̬
	static ChairMan * getInstance()
	{

		return singleMan;
	}

//1 ��ֹ���������ϯ���󣬽����캯��˽�л�
private:
	//���캯��˽�л�
	ChairMan() 
	{
		//����ʱ���� ������main����֮ǰ����֮ǰ��ӡ
		cout << "��ϯ�Ĵ���" << endl;
	}; 

	//�������캯��˽�л�
	ChairMan(const ChairMan &) {};

	//˽�о�̬��Ա����
	// ������ ������ϯ��ָ�룬�����ʼ����ϯ����
	static ChairMan * singleMan;

};

//��̬��Ա��ʼ��  �����ʼ����ϯ����
ChairMan * ChairMan::singleMan = new ChairMan;



void test01()
{
	ChairMan * c1 = ChairMan::getInstance();
	ChairMan * c2 = ChairMan::getInstance();

	if (c1 == c2)
	{
		cout << "c1==c2" << endl;
	}
	else
	{
		cout << "c1!=c2" << endl;
	}
}


int main()
{
	cout << "main�����ĵ���" << endl;

	test01();


	system("pause");
	return EXIT_SUCCESS;
}

