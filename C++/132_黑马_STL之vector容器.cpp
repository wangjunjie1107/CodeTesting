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



/*
3.2.4.1 vector���캯��
vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
vector(n, elem);//���캯����n��elem����������
vector(const vector &vec);//�������캯����

//���� ʹ�õڶ������캯�� ���ǿ���...
int arr[] = {2,3,4,1,9};
vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));

3.2.4.2 vector���ø�ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
vector& operator=(const vector  &vec);//���صȺŲ�����
swap(vec);// ��vec�뱾���Ԫ�ػ�����
*/

//��ӡvector������ֵ�ĺ���
void PrintVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin();it < v.end();it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}


//vector���캯��
void test02()
{
	
	//vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
	vector<int>v1;
	
	//vector(n, elem);//���캯����n��elem����������
	vector<int>v2(10, 200);
	cout << "v2�� " << endl;
	PrintVector(v2);
	cout << "-----------------------" << endl;
	
	//vector(const vector &vec);//�������캯����
	vector<int>v3(v2);
	cout << "v3�� " << endl;
	PrintVector(v3);
	cout << "-----------------------" << endl;

	//vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
	vector<int>v4(v3.begin(), v3.end());
	cout << "v4�� " << endl;
	PrintVector(v4);
	cout << "-----------------------" << endl;

}

//vector���ø�ֵ����
void test03()
{
	//assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
	int arr[] = { 1,2,3,4,5,6 };
	vector<int>v5;
	v5.assign(arr, arr + sizeof(arr) / sizeof(int));
	cout << "v5�� " << endl;
	PrintVector(v5);
	cout << "-----------------------" << endl;


	//assign(n, elem);//��n��elem������ֵ������
	vector<int>v6;
	v6.assign(10, 1000);//��ֵ10��1000
	cout << "v6�� " << endl;
	PrintVector(v6);
	cout << "-----------------------" << endl;


	//vector& operator=(const vector  &vec);//���صȺŲ�����
	vector<int>v7 = v6;
	cout << "v7�� " << endl;
	PrintVector(v7);
	cout << "v7������Ϊ��" << v7.capacity() << endl;
	cout << "-----------------------" << endl;


	//swap(vec);// ��vec�뱾���Ԫ�ػ�����
	vector<int>v8(5,2000);
	cout << "v8��" << endl;
	PrintVector(v8);
	cout << "v8������Ϊ��" << v8.capacity() << endl;
	cout << "-----------------------" << endl;

	//����v8��v7��Ԫ��
	v8.swap(v7);
	cout << "v8��v7�������  v7�� " << endl;
	PrintVector(v7);
	cout << "v7������Ϊ��" << v7.capacity() << endl;
	cout << "-----------------------" << endl;
	cout << "v8��v7�������  v8��" << endl;
	PrintVector(v8);
	cout << "v8������Ϊ��" << v8.capacity() << endl;
	cout << "-----------------------" << endl;

}



/*
3.2.4.3 vector��С����
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(int num, elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á����������̣���ĩβ����������>�ȵ�Ԫ�ر�ɾ����
capacity();//����������
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�

front();//���������е�һ������Ԫ��
back();//�������������һ������Ԫ��

*/

//vector��С����
void test04()
{
	
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int>v1(arr, arr + sizeof(arr) / sizeof(int));

	//empty();//�ж������Ƿ�Ϊ��
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		//size();//����������Ԫ�صĸ���
		cout << "size = " << v1.size() << endl;
		cout << "-----------------------" << endl;
	}
	cout << "v1��" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//resize(int num);//����ָ�������ĳ���Ϊnum��
	//�������䳤������Ĭ��ֵ�����λ�á�
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

	v1.resize(15); //���ȱ䳤 ����Ĭ��ֵ 0
	cout << "v1.resize(15)��" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	v1.resize(5);//���ȱ��
	cout << "v1.resize(5)��" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;

	v1.resize(15,100); //���ȱ䳤  ����ָ��ֵ
	cout << "v1.resize(15,100)��" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;

	cout << "��һ��Ԫ��Ϊ�� " << v1.front() << endl;
	cout << "-----------------------" << endl;

	cout << "���һ��Ԫ��Ϊ�� " << v1.back() << endl;
	cout << "-----------------------" << endl;

}


/*
3.2.4.5 vector�����ɾ������
insert(const_iterator pos, int count,ele);//������ָ��λ��pos����count��Ԫ��ele.
push_back(ele); //β������Ԫ��ele
pop_back();//ɾ�����һ��Ԫ��
erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
erase(const_iterator pos);//ɾ��������ָ���Ԫ��
clear();//ɾ������������Ԫ��
*/

//vector�����ɾ������
void test05()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int>v1(arr, arr + sizeof(arr) / sizeof(int));

	//��ӡԪ��
	cout << "v1�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//insert(const_iterator pos, int count, ele);//������ָ��λ��pos����count��Ԫ��ele.
	v1.insert(v1.begin(), 1, 100); //ͷ��һ��100
	cout << "v1.insert(v1.begin(), 1, 100)�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;
	
	//insert(const_iterator pos, int count, ele);//������ָ��λ��pos����count��Ԫ��ele.
	v1.insert(v1.begin() + 2, 1, 100);//�ڶ���λ�ú����һ��999
	cout << "v1.insert(v1.begin() + 2, 1, 100)�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;

	//push_back(ele); //β������Ԫ��ele
	v1.push_back(200);
	cout << "v1.push_back(200)�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//pop_back();//ɾ�����һ��Ԫ��
	v1.pop_back();
	cout << "v1.pop_back()�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//erase(const_iterator pos);//ɾ��������ָ���Ԫ��
	v1.erase(v1.begin() + 1);
	cout << "v1.erase(v1.begin() + 1)�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
	v1.erase(v1.begin(), v1.end());
	cout << "v1.erase(v1.begin(), v1.end())�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	
	//clear();//ɾ������������Ԫ��
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int>v2(arr2, arr2 + sizeof(arr2) / sizeof(int));
	cout << "v2�� " << endl;
	PrintVector(v2);
	cout << "-----------------------" << endl;
	
	v2.clear();
	cout << "v2.clear()�� " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;
}


//����  ����swap�����ڴ�  ����reserve Ԥ���ڴ�ռ�
void test06()
{
	vector<int>v;

	//���� reserve Ԥ���ڴ�ռ�  Ԥ���Ŀռ�δ��ʼ�� ���ɷ���
	//Ԥ���ռ�ĺô���������ȥ�����µĿռ�
	v.reserve(100000);

	int * p = NULL;
	int num = 0;
	for (int i = 0;i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	// num ͳ�ƿռ俪�ٴ���
	cout << "num = " << num << endl;
	//�ռ����ݴ�С
	cout << "size = " << v.size() << endl;
	//�ռ�����
	cout << "capacity = " << v.capacity() << endl;
	cout << "-----------------------" << endl;


	//�ռ��100000  ��С�� 3
	v.resize(3);
	cout << "ʹ��swap�����ڴ�ǰ�� " << endl;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	cout << "-----------------------" << endl;


	//����swap
	vector<int>(v).swap(v);  //ʹ��swap��С�ڴ�ռ�����  �����˷��ڴ�
	cout << "ʹ��swap�����ڴ�� " << endl;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	cout << "-----------------------" << endl;


	cout << "v�� " << endl;
	PrintVector(v);
	cout << "-----------------------" << endl;
}


void test08()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	//��ӡ����
	cout << "v�� " << endl;
	PrintVector(v);
	cout << "-----------------------" << endl;

	//������� ���ʱ��㷨
	//reverse_iterator  ��ת������
	//rbegin ָ������β����Ԫ��
	//rend  ָ������ĵ�һ��Ԫ��
	cout << "reverse v�� " << endl;
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend();it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
	cout << "-----------------------" << endl;


	//����ж�һ�������ĵ������Ƿ�֧���������
	vector<int>::iterator itBegin = v.begin();
	itBegin++;
	itBegin--;
	itBegin = itBegin + 1;

	list<int>L;
	L.push_back(10);
	L.push_back(10);
	L.push_back(10);
	L.push_back(10);

	list<int>::iterator lBegin = L.begin();
	lBegin++;
	lBegin--;
	//lBegin = lBegin + 1; //��֧���������

}


int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	//test05();
	//test06();
	test08();
	system("pause");
	return EXIT_SUCCESS;
}
