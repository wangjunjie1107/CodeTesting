#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//ν��
//ָ������ͨ���� ���߷º��� �ķ���ֵ�� bool��������

class Great20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

class myCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

//һԪν��
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//�ҵ���һ������20��Ԫ��
	vector<int>::iterator ret = find_if(v.begin(), v.end(), Great20());

	if (ret != v.end())
	{
		cout << "�ҵ��˴���20��Ԫ��  ֵΪ�� " << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//��Ԫν��  ����
	sort(v.begin(), v.end(), myCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
