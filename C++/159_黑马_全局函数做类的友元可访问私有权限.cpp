#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Building
{

	//��ȫ�ֺ�������Ԫ
	friend void goodGay(Building & building);

public:
	//����
	string m_SittingRoom;
protected:
	//����
	string m_Cooking;
private:
	//����
	string m_BedRoom;


public:
	Building()
	{
		m_SittingRoom = "����";
		m_Cooking = "����";
		m_BedRoom = "����";
	}
};


//�û��� ȫ�ֺ��� ���Է��ʿ��� Ҳ���Է�������
void goodGay(Building & building)
{
	cout << "�û������ڷ��ʣ�" << building.m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ�" << building.m_Cooking << endl;

	cout << "�û������ڷ��ʣ�" << building.m_BedRoom << endl;
}

void bedGay(Building & building)
{
	cout << "�û������ڷ��ʣ�" << building.m_SittingRoom << endl;

	//������Ԫ ���ɷ��ʱ���Ȩ���µĳ�Ա
	//cout << "�û������ڷ��ʣ�" << building.m_Cooking << endl;

	//������Ԫ ���ɷ���˽�г�Ա
	//cout << "�û������ڷ��ʣ�" << building.m_BedRoom << endl;
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
