#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Building
{
	//��ȫ�ֺ��� goodGay��Ϊ����Building�еĺ����ѣ����Է���˽�г�Ա
	friend void goodGay(Building & building);

public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	//����
	string m_SittingRoom;
private:
	//����
	string m_BedRoom;
};

//�û��� ȫ�ֺ��� ���Է��ʿ��� Ҳ���Է�������
void goodGay(Building & building)
{
	cout << "�û������ڷ��ʣ� " << building.m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ� " << building.m_BedRoom << endl;
}

void badGay(Building & building)
{
	cout << "�û������ڷ��ʣ� " << building.m_SittingRoom << endl;

	//cout << "�û������ڷ��ʣ� " << building.m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(building);
}


int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

