#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include<map>

//
///*
//3.8.2.1 map���캯��
//map<T1, T2> mapTT;//mapĬ�Ϲ��캯��:
//map(const map &mp);//�������캯��
//
//
//3.8.2.2 map��ֵ����
//map& operator=(const map &mp);//���صȺŲ�����
//swap(mp);//����������������
//
//3.8.2.3 map��С����
//size();//����������Ԫ�ص���Ŀ
//empty();//�ж������Ƿ�Ϊ��
//3.8.2.4 map��������Ԫ�ز���
//map.insert(...); //����������Ԫ�أ�����pair<iterator,bool>
//map<int, string> mapStu;
//// ��һ�� ͨ��pair�ķ�ʽ�������
//mapStu.insert(pair<int, string>(3, "С��"));
//// �ڶ��� ͨ��pair�ķ�ʽ�������
//mapStu.inset(make_pair(-1, "У��"));
//// ������ ͨ��value_type�ķ�ʽ�������
//mapStu.insert(map<int, string>::value_type(1, "С��"));
//// ������ ͨ������ķ�ʽ����ֵ
//mapStu[3] = "С��";
//mapStu[5] = "С��";
//*/
//
//
// //map �ĳ�Ա��  ���� <int,int>  
//void test01()
//{
//	//mapĬ�Ϲ��캯��:
//	map<int, int>T1;
//	T1.insert(1, 10);
//
//
//	//�������캯��
//	map<int, int>T2(T1);
//
//
//	//���صȺŲ�����
//	map<int, int>T3;
//	T3 = T2;
//
//	//����������������
//	T3.swap(T2);
//
//	//�ж������Ƿ�Ϊ��
//	T3.empty();
//
//	//����������Ԫ�أ�����pair<iterator,bool>
//	T3.insert(map<int,int>::value_type(1,10));
//
//	//�����������ַ���
//	map<int, string> mapStu;
//
//	// ��һ�� ͨ��pair�ķ�ʽ�������
//	mapStu.insert(pair<int, string>(3, "wangjunjie"));
//
//	// �ڶ��� ͨ��pair�ķ�ʽ�������
//	mapStu.insert(make_pair(-1, "haha"));
//
//	// ������ ͨ��value_type�ķ�ʽ�������
//	mapStu.insert(map<int, string>::value_type(1, "hahaa"));
//
//	// ������ ͨ������ķ�ʽ����ֵ
//	mapStu[3] = "wangjun";
//	mapStu[4] = "lisijia";
//
//	for (map<int, string>::iterator it = mapStu.begin();it != mapStu.end();it++)
//	{
//		cout << "key = " << it->first << "value = " << it->second << endl;
//	}
//
//	//�����ȷ��key���ڣ�������[]��ʽ ͨ��key��value
//	cout << mapStu[1] << endl;
//
//}
//
///*
//3.8.2.5 mapɾ������
//clear();//ɾ������Ԫ��
//erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg,end);//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(keyElem);//ɾ��������keyΪkeyElem�Ķ��顣
//*/
//
//void test02()
//{
//	map<int, int>m;
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m.insert(pair<int, int>(1, 10));
//	m[4] = 40;
//
//	m.erase(3);//ɾ��keyΪ3��Ԫ��
//
//	for (map<int, int>::iterator it = m.begin();it != m.end();it++)
//	{
//		cout << "key = " << it->first << "value = " << it->second << endl;
//	}
//}
//
//
///*
//3.8.2.6 map���Ҳ���
//find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�������/�������ڣ�����map.end();
//count(keyElem);//����������keyΪkeyElem�Ķ����������map��˵��Ҫô��0��Ҫô��1����multimap��˵��ֵ���ܴ���1��
//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
//*/
//
//
//// map���Ҳ���
//void test03()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 22));
//	m.insert(make_pair(2,222));
//	m.insert(map<int, int>::value_type(3, 33));
//	m[4] = 555;
//
//	map<int, int>::iterator ret = m.find(4);//���� �ؼ���Ϊ4 ��Ԫ��
//	if (ret != m.end())
//	{
//		cout << "�ҵ���Ԫ�� key = " << ret->first << " value = " << ret->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	int num = m.count(3);
//	cout << "keyΪ3��Ԫ�ظ���Ϊ��" << num << endl;
//
//	//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
//	map<int, int>::iterator it = m.lower_bound(3); //���ص�һ�� key ���ڵ��� 3 ��Ԫ��
//	if (it != m.end())
//	{
//		cout << "�ҵ���lower_bound��ֵ ��key = " << it->first << " value = " << it->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
//	it = m.upper_bound(3);//���ص�һ�� key ���� 3 ��Ԫ�صĵ�����
//	if (it != m.end())
//	{
//		cout << "�ҵ���upper_bound��ֵ ��key = " << it->first << " value = " << it->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
//	pair<map<int, int>::iterator, map<int, int>::iterator>ret2 = m.equal_range(3);
//	if (ret2.first != m.end())
//	{
//		cout << "�ҵ���equal_range�е� lower_bound ��ֵ�� key = " << ret2.first->first << " value = " << ret2.first->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	if (ret2.second != m.end())
//	{
//		cout << "�ҵ���equal_range�е�upper_bound ��ֵ�� key = " << ret2.second->first << " value = " << ret2.second->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//}

//
//class myCompare
//{
//public:
//	bool operator()(const int v1,const int v2)
//	{
//		return v1 > v2; //��������
//	}
//};
//
//void test04()
//{
//	map<int, int, myCompare>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 10));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 222;
//
//	for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}




//�Զ����������� map ����
class Person
{
public:

	Person(string name, int age) :m_Name(name), m_Age(age)
	{

	}

	string m_Name;//����
	int m_Age;//����
	
};

//�Զ�������  �Զ�������
class myComparePerson
{
public:
	bool operator()(const Person & p1, const Person & p2)
	{
		//�����併������
		if (p1.m_Age == p2.m_Age)
		{
			return false;
		}
		return p1.m_Age > p2.m_Age;
	}
};

//��ӡ�Զ�����������
void printPerson(map<Person, int, myComparePerson> & m)
{
	for (map<Person, int, myComparePerson>::iterator it = m.begin();it != m.end();it++)
	{
		cout << "���� �� " << it->first.m_Name << " ���䣺 " << it->first.m_Age << "�ؼ��֣�  " << it->second << endl;
	}
}

void test05()
{
	map<Person, int, myComparePerson>m;

	Person p1("aaa", 9);
	Person p2("bbb", 18);
	Person p3("ccc", 55);
	Person p4("ddd", 24);
	Person p5("eee", 16);
	Person p6("fff", 33);

	//��������
	m.insert(make_pair(p1, 1));
	m.insert(make_pair(p2, 2));
	m.insert(make_pair(p3, 3));
	m.insert(make_pair(p4, 4));
	m.insert(make_pair(p5, 5));
	m.insert(make_pair(p6, 6));

	printPerson(m);
}

int main()
{
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}
