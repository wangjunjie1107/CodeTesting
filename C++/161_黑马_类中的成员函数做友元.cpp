#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>


class Building;
class GoodGay
{
public:

	GoodGay();

	//ֻ��visit�����Ա���� �����Է���Building�е�˽�г�Ա����������������
	void  visit();

	void  visit2();

	Building * building;
};


class Building
{
	//���еĳ�Ա�����������Ԫ
	friend void GoodGay::visit();

public:
	Building();
private:
	string m_BedRoom;
};

Building::Building()
{
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	//��Ա���� visit2 ���������Ԫ �޷�����˽�г�Ա
	//cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void test()
{
	GoodGay g1;
	g1.visit();

}

int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}
