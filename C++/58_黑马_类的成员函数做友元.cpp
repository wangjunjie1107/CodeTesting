#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Building;
class GoodGay
{


	//���еĳ�Ա������Ϊ��һ�������Ԫ
	friend void Building::Building1();
	//����Ϊ��һ�������Ԫ
	friend class Building;
	//ȫ�ֺ�����Ϊ�����Ԫ
	friend void printer(GoodGay & goodgay);

public:
	GoodGay();//���캯��

	//ֻ��visit�����Ա���� �����Է���Building�е�˽�г�Ա����������������
	void visit();

	void visit2();

	Building * building;
};

class Building
{
	//���߱����� GoodGay���е�visit���� �Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
	//���г�Ա������Ϊ�����Ԫ
	friend void GoodGay::visit();
	//friend void GoodGay::visit2();

public:
	Building();

	void Building1() {};

	string m_SittingRoom;

private:
	string m_BedRoom;
	int m_A;
};

//���캯������ʵ��
Building::Building() 
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
	m_A = 100;
}

GoodGay::GoodGay()
{
	building = new Building;
}


//��Ա����������ʵ��
void GoodGay::visit()
{
	cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_A << endl;

	cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_SittingRoom << endl;
	
	cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_BedRoom << endl;
}

//��Ա����������ʵ��
void GoodGay::visit2()
{
	cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_SittingRoom << endl;

	//����Building�ĺ����ѣ����ʲ���˽�г�Ա
	cout << "�û��ѵ�visit�������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void printer(GoodGay & goodgay)
{

}
void test01()
{
	GoodGay gg;
	gg.visit();
	//gg.visit2();
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

