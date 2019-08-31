#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>

using namespace std;

/*
 
	vector����:���ȸ�����Ҫ���Զ��ı������

*/

struct node
{
	int num;
	struct node* next;
};

//����һ��vector����
void test01()
{
	//vector<typename> name;
	vector<int> s1;
	vector<char> s2;
	vector<string> s3;
	/*vector<float> s4;
	vector<node> s4;*/

	//���typenameҲ��һ�������������ʱ��Ҫ�ǵ��� >> ����֮����Ͽո�
	//��ΪһЩ�������������Ϊ��λ���������±������
	vector< vector<int> > s5;

	//s6��һ��vector���飬����Ϊ100�����е�ÿ��Ԫ�ض���һ��int���͵�vector����
	vector<int> s6[100];
}


//����һ��vector������
void test02()
{/*
	vector<int>::iterator it;
	vector<char>::iterator it;
	vector<string>::iterator it;
	vector<float>::iterator it;
	vector<node>::iterator it;*/
}

//��������
void test03()
{
	vector<int> v1;
	
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}

	//v1.end()��ȡβ��Ԫ�ص���һλ��ַ
	for (vector<int>::iterator it = v1.begin(); it < v1.end(); it++)
	{
		cout << *it << endl;
	}
}

//���ú���
void test04()
{
	vector<int> v1;

	//β����� ʱ�临�Ӷ�ΪO(1)
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(70);

	//β��ɾ�� ʱ�临�Ӷ�ΪO(1)
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();

	//��ȡԪ�ظ���  ���ص���unsigned���� ʱ�临�Ӷ�ΪO(1)
	cout << v1.size() << endl;

	//�������������Ԫ��,ʱ�临�Ӷ�ΪO(N)
	v1.clear();

	//��ָ��λ�ò���һ��Ԫ�أ�ʱ�临�Ӷ�ΪO(N)
	v1.insert(v1.begin() + 2, 100);


	//ɾ������Ԫ�ػ�һ�������ڵ�Ԫ��  ʱ�临�Ӷ�ΪO(N)
	vector<int> v2;
	for (int i = 0; i < 5; i++)
	{
		v2.push_back(i);
	}
	
	//ɾ��Ԫ��3
	v2.erase(v2.begin() + 3);
	vector<int>::iterator it = v2.begin();
	for (vector<int>::iterator it = v2.begin(); it < v2.end(); it++)
	{
		cout << *it << " ";  //��� 0  1  2  4 
	}
	cout << endl;

	//ɾ������  [v2.begin() ---  v2.end()-1) ֮���Ԫ�أ�
	//����v1.begin()��������v1.end()-1
	//���ɾ������Ԫ�� 0 1 2 3 Ԫ��4�Զ��ŵ��������ǰ��
	v2.erase(v2.begin(),v2.end() - 1);
	vector<int>::iterator it2 = v2.begin();
	cout << *it2 << endl;  //���4


	//ɾ������Ԫ��
	v2.clear();
	v2.erase(v2.begin(), v2.end());
}

int main()
{
	test04();

	system("pause");
	return EXIT_SUCCESS;
}

