#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

//��ǰ���߱����� Building����ᴴ����
//Ŀǰʹ��ʱ���Ȳ�Ҫ����
class Building;

class GoodGay
{
public:

	GoodGay();

	void visit();

	Building * building;
};

class Building
{ 
	//��������Ԫ  ���Է���Building����˽�г�Ա
	friend class GoodGay;

public:
	
	Building();

	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()//���캯������ʵ��
{
	m_BedRoom = "����";
	m_SittingRoom = "����";
}

GoodGay::GoodGay()//���캯������ʵ��
{
	building = new Building;
}

void GoodGay::visit()//��Ա��������ʵ��
{
	cout << "�û��������ڷ��ʣ� " << building->m_SittingRoom << endl;
	
	cout << "�û��������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
