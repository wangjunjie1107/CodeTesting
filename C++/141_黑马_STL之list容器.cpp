#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
#include<string>


//list˫��ѭ������
//void test01()
//{
//	list<int>myList;
//	for (int i = 0;i < 10;i++)
//	{
//		myList.push_back(i);
//	}
//
//	list<int>::_Nodeptr node = myList._Myhead->_Next;
//
//	for (int i = 0; i < myList._Mysize * 2; i++) {
//		cout << "Node:" << node->_Myval << endl;
//		node = node->_Next;
//
//		//node->_Prev; ǰһ���ڵ��ַ
//		if (node == myList._Myhead) {
//			node = node->_Next;
//		}
//	}
//}



/*
3.6.4.1 list���캯��
list<T> lstT;//list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
list(beg,end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
list(n,elem);//���캯����n��elem����������
list(const list &lst);//�������캯����
3.6.4.2 list����Ԫ�ز����ɾ������
push_back(elem);//������β������һ��Ԫ��
pop_back();//ɾ�����������һ��Ԫ��
push_front(elem);//��������ͷ����һ��Ԫ��
pop_front();//��������ͷ�Ƴ���һ��Ԫ��
insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
*/

//��ӡ����
void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end();it++)
	{
		//*it = 1000;
		cout << *it << " ";
	}
	cout << endl;
}


void test02()
{
	//Ĭ�Ϲ���
	list<int>L1;

	//���캯�� 
	int arr[] = { 1,2,3,4,5 };
	list<int>L2(arr, arr + sizeof(arr) / sizeof(int));

	//��ӡ����
	for (list<int>::iterator it = L1.begin(); it != L1.end();it++)
	{
		cout << *it << endl;
	}

	cout << "----------------------" << endl;

	//�����ӡ
	for (list<int>::reverse_iterator it = L1.rbegin(); it != L1.rend();it++)
	{
		cout << *it << endl;
	}


	//���캯��
	list<int>L3(10, 100);


	//��������
	list<int>L4(L3);

	//β������
	L4.push_back(100);

	//β��ɾ��
	L4.pop_back();

	//ͷ������
	L4.push_front(100);

	//ͷ��ɾ��
	L4.pop_front();

	//��λ�ò���
	L4.insert(L4.begin(), 100);

	//��λ�ò��� ��������
	L4.insert(L4.end(), arr, arr + sizeof(arr) / sizeof(int));

	//�Ƴ���������
	L4.erase(L4.begin(),L4.end());

	//ɾ��posλ�õ����� ������һ�����ݵ�λ��
	L4.erase(L4.begin());

	//ɾ��������elemƥ���Ԫ��
	L4.remove(100);

	//�Ƴ���������
	L4.clear();


	//������ �Ƿ�֧���������
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it = it + 1;//���� ��֧���������
}



/*
3.6.4.3 list��С����
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(num);//����ָ�������ĳ���Ϊnum��
�������䳤������Ĭ��ֵ�����λ�á�
���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(num, elem);//����ָ�������ĳ���Ϊnum��
�������䳤������elemֵ�����λ�á�
���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

3.6.4.4 list��ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
list& operator=(const list &lst);//���صȺŲ�����
swap(lst);//��lst�뱾���Ԫ�ػ�����
3.6.4.5 list���ݵĴ�ȡ
front();//���ص�һ��Ԫ�ء�
back();//�������һ��Ԫ�ء�
*/


void test03()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	L1.push_back(60);

	cout << "L1��Ԫ�ظ���Ϊ�� " << L1.size() << endl;

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}


	//����ָ�������ĳ���Ϊnum��
	//�������䳤������Ĭ��ֵ�����λ�á�
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	L1.resize(100);
	
	//����ָ�������ĳ���Ϊnum��
	//�������䳤������elemֵ�����λ�á�
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	L1.resize(15, 120);

	//��[beg, end)�����е����ݿ�����ֵ������
	list<int>L2;
	L2.assign(L1.begin(), L1.end());
	
	//��n��elem������ֵ������
	L2.assign(10, 200);


	//���صȺŲ�����
	L2 = L1;


	//��lst�뱾���Ԫ�ػ�����
	L2.swap(L1);
	
	//���ص�һ��Ԫ�ء�
	L2.front();

	//�������һ��Ԫ�ء�
	L2.back();
}

/*
3.6.4.6 list��ת����
reverse();//��ת��������lst����1,3,5Ԫ�أ����д˷�����lst�Ͱ���5,3,1Ԫ�ء�
sort(); //list����
*/

void test04()
{
	list<int>L;
	for (int i = 0;i < 10;i++)
	{
		L.push_front(i);
	}

	printList(L);

	//��ת �ʱ��㷨
	L.reverse();

	printList(L);
}

bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

void test05()
{
	list<int>L;
	L.push_back(10);
	L.push_back(30);
	L.push_back(50);
	L.push_back(20);
	L.push_back(40);


	//��׼�㷨������  ֻ֧��������ʵ�����������
	//��֧��������ʵ��������������ڲ����Ӧ�ṩһЩ�㷨
	//sort(L.begin(), L.end());

	L.sort();
	printList(L);

	//����  �ṩ�ص�����
	L.sort(myCompare);
	printList(L);
}

class Person
{
public:
	Person(string name, int age, int height, int num)
	{
		this->m_Age = age;
		this->m_Height = height;
		this->m_Name = name;
		this->m_Num = num;
	}

	// == ���������  Ϊ��ɾ������
	bool operator==(const Person & p)
	{
		if (this->m_Age == p.m_Age && this->m_Height == p.m_Height 
				&& this->m_Name == p.m_Name && this->m_Num == p.m_Num)
		{
			return true;
		}
		return false;
	}

	string m_Name; //����
	int m_Age; //����
	int m_Height; //���
	int m_Num; //ѧ��
};

//�߼�����
bool myComparePerson(Person & p1, Person & p2)
{
	//����������; ���������ͬ ��߽���; ������Ҳ��ͬ ��ѧ�Ž���
	if (p1.m_Age == p2.m_Age && p1.m_Height == p2.m_Height)
	{
		return p1.m_Num > p2.m_Num;
	}
	else if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}

void test07()
{
	list<Person>L;

	Person p1("�ŷ�", 18, 200, 1);
	Person p2("����", 20, 185, 2);
	Person p3("����", 19, 150, 3);
	Person p4("����", 17, 170, 4);
	Person p5("���", 21, 160, 5);
	Person p6("����", 21, 175, 6);
	Person p7("��", 21, 140, 7);
	Person p8("С��", 18, 165, 8);
	Person p9("����", 18, 165, 9);
	Person p10("�Ƕ���", 18, 165, 10);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	L.push_back(p7);
	L.push_back(p8);
	L.push_back(p9);
	L.push_back(p10);

	//����ǰ
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "������ " << (*it).m_Name 
			<< " ���䣺" << it->m_Age 
			<< " ��ߣ� " << it->m_Height 
			<<"  ѧ�ţ� "<< it->m_Num << endl;
	}

	//�Զ����������ͣ�����ָ���������  ����Ϊ�ص�����
	L.sort(myComparePerson); //�߼�����


	cout << "----------------------------------\n";
	//�����
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "������ " << (*it).m_Name
			<< " ���䣺" << it->m_Age
			<< " ��ߣ� " << it->m_Height
			<< "  ѧ�ţ� " << it->m_Num << endl;
	}


	//ɾ������
	L.remove(p4);// == ���������  Ϊ��ɾ������

	//L.remove�Ķ���

	/*void remove(const _Ty& _Val)
	{	// erase each element matching _Val
		iterator _Val_it = end();

		for (iterator _First = begin(); _First != end(); )
			if (*_First == _Val��// �Ƚ���ͬ������ ������Զ������� 
								//  Ҫ�ñ�����֪����αȽ�
				if (_STD addressof(*_First) == _STD addressof(_Val))
					_Val_it = _First++;
				else
					_First = erase(_First);
			else
				++_First;

		if (_Val_it != end())
			erase(_Val_it);
	}*/

	cout << "----------   ɾ�����ƺ�  ---------------------" << endl;
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "������ " << (*it).m_Name
			<< " ���䣺" << it->m_Age
			<< " ��ߣ� " << it->m_Height
			<< "  ѧ�ţ� " << it->m_Num << endl;
	}

}
int main() 
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();

	system("pause");
	return EXIT_SUCCESS;
}
