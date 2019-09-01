#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include <map>
#include <ctime>

enum { No, CAIWU, RENLI, YANFA };

/*
//��˾������Ƹ��5��Ա����5��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//��Ա��Ϣ��: ���� ���ʵ����
//ͨ��Multimap������Ϣ�Ĳ��� ���� ��ʾ
//�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ
*/

class Worker
{
public:
	string m_Name; //����
	int m_Salary; //����
};


//����Ա��
void createWorker(vector<Worker> & v)
{
	//С����
	string nameSeed = "ABCDEFGHIJ";

	for (int i = 0;i < 10;i++)
	{
		Worker worker;

		//��ʼ��Ա�� ����
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		//��ʼ��Ա������
		worker.m_Salary = rand() % 10000 + 10000; // 10000-19999
		
		//��Ա�����뵽 vector ������
		v.push_back(worker);
	}
}

//����Ա������
void setGroup(vector<Worker> & v, multimap<int, Worker> & m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end();it++)
	{
		int dId = rand() % 3 + 1; //1 - 3

		//�����ű�� �� ��Ա ���� ��map������
		
		//  ���ַ���ʵ�� ���� ����
		//m.insert(pair<int, Worker>(dId, *it));
		//m.insert(multimap<int, Worker>::value_type(dId, *it));

		m.insert(make_pair(dId, *it));
	}
}

//�ֲ�����ʾ��Ա
void showGroup(multimap<int, Worker> & m)
{
	cout << "��������Ա��Ϣ���£�" << endl;

	multimap<int, Worker>::iterator pos = m.find(CAIWU);

	int num = m.count(CAIWU);
	int index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}


	cout << "����������Ա��Ϣ���£�" << endl;
	pos = m.find(RENLI);

	num = m.count(RENLI);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "�з�������Ա��Ϣ���£�" << endl;
	pos = m.find(YANFA);

	num = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
}
void test01()
{
	//���������
	srand((unsigned int)time(NULL));

	//���Ա��������
	vector<Worker>v;

	//����10��Ա��
	createWorker(v);


	//Ա������
	multimap<int, Worker>m;
	setGroup(v,m);

	//�ֲ�����ʾ��Ա
	showGroup(m);
}



int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
















