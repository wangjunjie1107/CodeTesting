#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;


//��ǰ���߱����� Building����ᴴ����
//Ŀǰʹ��ʱ���Ȳ�Ҫ����
class Building;


class GoodGay  //��
{
public:

	GoodGay();

	void visit();

	Building * building;
};


class Building  //��
{
	//��GoodGay����Ϊ Building��ĺ����ѣ�
	//���Է���Building����˽�г�Ա
	friend class GoodGay;
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

//���캯��������ʵ��
Building::Building() 
{
	m_BedRoom = "����";
	m_SittingRoom = "����";
}

//���캯��������ʵ��
GoodGay::GoodGay()  
{
	building = new Building;
}

//���г�Ա����������ʵ��
void GoodGay::visit()	
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

