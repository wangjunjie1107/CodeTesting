#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����ģʽ-��ϯ�స��
//ͨ��һ���� ֻ�ܴ���һ�����󣬹����������

class ChairMan
{
public:

	//4�������ṩgetInstance ��ȡ��ϯָ�룬������ֻ��״̬
	//��ȡ��ϯָ��
	static ChairMan * getInstance()
	{
		return singleMan;
	}

	void getName()
	{
		cout << "wang" << endl;
	}
private:
	//1 ��ֹ���������ϯ���󣬽����캯��˽�л�
	ChairMan()
	{

	}

	//5�����������캯��˽�л�
	ChairMan(const ChairMan &)
	{

	}

	//2 ������ ������ϯ��ָ�룬�����ʼ����ϯ����  ��̬����
	//3��ָ��˽�л�
	static ChairMan * singleMan;
};

//��̬����  ��������  �����ʼ��
ChairMan * ChairMan::singleMan = new ChairMan;

void test01()
{
	ChairMan * c1 = ChairMan::getInstance();
	ChairMan * c2 = ChairMan::getInstance();



	if (c1 == c2)
	{
		cout << "c1 == c2" << endl;
	}
	else
		cout << "c1 != c2" << endl;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
