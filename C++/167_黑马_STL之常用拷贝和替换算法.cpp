#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<iterator>  //copy��ʹ�� ostream_iterator ��ͷ�ļ�

/*
copy�㷨 ��������ָ����Χ��Ԫ�ؿ�������һ������
@param beg ������ʼ������
@param end ��������������
@param dest Ŀ����ʼ������
*/
void test01()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	vector<int>v2;
	v2.resize(v.size()); //���ٿռ�

	//copy
	copy(v.begin(), v.end(), v2.begin());

	//��ӡ
	for_each(v2.begin(), v2.end(), [](int val) {cout << val << " ";});
	cout << endl;
	
	
	//����copy������ӡ
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}


/*
replace�㷨 ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
@param beg ������ʼ������
@param end ��������������
@param oldvalue ��Ԫ��
@param newvalue ��Ԫ��

replace_if�㷨 ��������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
@param beg ������ʼ������
@param end ��������������
@param callback�����ص�����ν��(����Bool���͵ĺ�������)
@param oldvalue ��Ԫ��
*/
class ReplaceIF
{
public:
	bool operator()(int val)
	{
		return val > 3;
	}
};

void test02()
{
	vector<int>v;

	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);


	//�������е� 3 �滻Ϊ 333
	replace(v.begin(), v.end(), 3, 333);

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;


	//�����д��� 3 ��ֵ �滻Ϊ333
	replace_if(v.begin(), v.end(), ReplaceIF(), 333);


	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}


/*
swap�㷨 ��������������Ԫ��
@param c1����1
@param c2����2
*/
void test03()
{
	vector<int>v1;
	vector<int>v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	cout << "����ǰ�����" << endl;
	cout << "v1��" << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "v2��" << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	//��������������Ԫ��
	swap(v1, v2);


	cout << "����������" << endl;
	cout << "v1��" << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "v2��" << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main() 
{

	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}













