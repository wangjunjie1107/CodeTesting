#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<list>

//С���� ���vector�������¿��ٿռ�Ĵ��� �� ÿ�ο��ٵ�����
void test01()
{
	vector<int>v;
	int num = 0;
	int * p = NULL;
	for (int i = 0;i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;   //ͳ�ƿ��ٿռ�Ĵ���
			cout << "�� " << num << " �ο��ٿռ�   ";
			cout << "��ʱ���ٵĿռ�����Ϊ�� " << v.capacity() << endl;//ÿ���¿��ٿռ�ʱ���ռ������Ĵ�С
		}
	}
	cout << "��vector�����в���100000�����ݣ����ٿռ����Ϊ��"<< num << endl;	
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
