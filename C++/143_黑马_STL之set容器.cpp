#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <set>
#include <string>


/*
3.7.2.1 set���캯��
set<T> st;//setĬ�Ϲ��캯����
mulitset<T> mst; //multisetĬ�Ϲ��캯��:
set(const set &st);//�������캯��
3.7.2.2 set��ֵ����
set& operator=(const set &st);//���صȺŲ�����
swap(st);//����������������
3.7.2.3 set��С����
size();//����������Ԫ�ص���Ŀ
empty();//�ж������Ƿ�Ϊ��

3.7.2.4 set�����ɾ������
insert(elem);//�������в���Ԫ�ء�
clear();//�������Ԫ��
erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
erase(beg, end);//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
erase(elem);//ɾ��������ֵΪelem��Ԫ�ء�
*/


void printSet(set<int>&s)
{
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "---------------------\n";
}

void test01()
{
	set<int>s;

	s.insert(10);
	s.insert(60);
	s.insert(40);
	s.insert(80);
	s.insert(20);
	s.insert(90);

	//set�������Զ�����Ĭ��������� �Ӵ�С
	//set����������ظ���ֵ ����������� ���ᱨ��
	printSet(s);
	

	//ɾ��90
	s.erase(90);
	printSet(s);
}

/*
3.7.2.5 set���Ҳ���
find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
count(key);//���Ҽ�key��Ԫ�ظ���
lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
*/

void test02()
{
	set<int>s;

	s.insert(10);
	s.insert(40);
	s.insert(90);
	s.insert(60);
	s.insert(20);
	s.insert(330);

	set<int>::iterator pos = s.find(70);
	if (pos != s.end())
	{
		cout << "�ҵ���Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//countͳ��Ԫ�س��ִ��� ����set���� ���Ҫô��1 Ҫô��0
	int num = s.count(330);
	cout << "330���ִ���Ϊ��" << num << endl;

	//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
	set<int>::iterator ret = s.lower_bound(60);//���ص�һ�����ڵ���60��ֵ
	if (ret != s.end())
	{
		cout << "�ҵ�lower_bound��ֵΪ�� " << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
	ret = s.upper_bound(60); //���ص�һ������60��ֵ
	if (ret != s.end())
	{
		cout << "�ҵ�lower_bound��ֵΪ�� " << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}


	//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
	//first ���ص�һ�����ڵ���100��ֵ  second ���ص�һ������100��ֵ
	pair<set<int>::iterator, set<int>::iterator>ret2 = s.equal_range(100);
	if (ret2.first != s.end())
	{
		//���ص�һ�����ڵ���100��ֵ
		cout << "�ҵ���equal_range�е�lower_bound��ֵΪ" << *(ret2.first) << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	if (ret2.second != s.end())
	{
		//���ش���100��ֵ
		cout << "�ҵ���equal_range�е�upper_bound��ֵΪ" << *(ret2.second) << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

//����Ĵ���
void test03()
{
	pair<string, int>p1("wangjunjie", 18);
	cout << "������" << p1.first << endl;
	cout << "���䣺" << p1.second << endl;

	pair<string, int>p2 = make_pair("wangjunjie", 25);
	cout << "������" << p2.first << endl;
	cout << "���䣺" << p2.second << endl;

}
int main() 
{

	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
