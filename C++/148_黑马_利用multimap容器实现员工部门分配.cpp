//multimap ����
//��˾������Ƹ�� 5 ��Ա����5 ��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//��Ա��Ϣ��: ���� ���� �绰 ���ʵ����
//ͨ�� Multimap ������Ϣ�Ĳ��� ���� ��ʾ
//�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ

/*
Multimap��map�Ĳ������ƣ�Ψһ����multimap��ֵ���ظ���
Map��multimap�����Ժ����Ϊ�ײ�ʵ�ֻ��ơ�
*/


#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

//Ա����Ϣ
class Person
{
public:

	Person(string name, int age, int salary) :m_Name(name), m_Age(age), m_Salary(salary)
	{

	}
	string m_Name;//����
	int m_Age; //����
	int m_Salary;//нˮ
};


//����5��Ա��		
void CreatePerson(vector<Person> & vlist)
{
	Person p1("����", 20, 10000);
	Person p2("����", 27, 20000);
	Person p3("���", 26, 18000);
	Person p4("����", 22, 16000);
	Person p5("��ɽ", 29, 30000);

	vlist.push_back(p1);
	vlist.push_back(p2);
	vlist.push_back(p3);
	vlist.push_back(p4);
	vlist.push_back(p5);
	
}


//��ӡԱ����Ϣ
void showPerson(Person p)
{
	cout << "������" << p.m_Name << "  ���䣺 " << p.m_Age << "  нˮ�� " << p.m_Salary << endl;
}



//5��Ա�����䵽��ͬ�Ĳ���
void PersonByGroup(vector<Person> & vlist, multimap<int, Person> & plist)
{
	vector<Person>::iterator it = vlist.begin();

	plist.insert(make_pair(1, *it));
	plist.insert(make_pair(2, *(it + 1)));
	plist.insert(make_pair(3, *(it + 2)));
	plist.insert(make_pair(4, *(it + 3)));
	plist.insert(make_pair(5, *(it + 4)));

}



void PersonMenue(multimap<int, Person> & plist)
{

	while (true)
	{
		cout << "������Ա�����ڲ��ţ�����-1�˳�����  ";
		int count;
		scanf("%d", &count);
		if (count == -1)
		{
			return;
		}

		multimap<int, Person>::iterator it = plist.begin();

		if (count == 1)
		{
			showPerson(it->second);
		}
		else if (count == 2)
		{
			it++;
			showPerson(it->second);
		}
		else if (count == 3)
		{
			it++;
			it++;
			showPerson(it->second);
		}
		else if (count == 4)
		{
			it++;
			it++;
			it++;
			showPerson(it->second);
		}
		else
		{
			it++;
			it++;
			it++;
			it++;
			showPerson(it->second);
		}
	}
	


}
int main() 
{

	vector<Person>  vlist; //������5��Ա�� δ����
	multimap<int, Person> plist; //��������Ա����Ϣ
	
										
	//����5��Ա��						
	CreatePerson(vlist);


	//5��Ա�����䵽��ͬ�Ĳ���
	PersonByGroup(vlist, plist);

	//�����û�������ʾ��ͬ����Ա����Ϣ�б� ���� ��ʾȫ��Ա������Ϣ�б�
	PersonMenue(plist);

	system("pause");
	return EXIT_SUCCESS;
}
