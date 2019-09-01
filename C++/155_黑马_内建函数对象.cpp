#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<functional> //�ڽ���������ͷ�ļ�
#include <vector>	 //������������
#include <algorithm> //STL�е������㷨ͷ�ļ�

//   negate<T>			negate<int>n;		ȡ���º���  
//   plus<T>			plus<int>p;			�ӷ��º���
//   greater<T>			greater<int>()		���ڷº��� 
//   logical_not<T>		logical_not<int>()  �߼���



//template<class T> T negate<T>  // ȡ��  �º���                     
void test01()
{
	negate<int>n;
	cout << "negate<T>  ȡ��  �º���   " << endl;

	cout << n(10) << endl;
}

// template<class T> T plus<T>//�ӷ��º���
void test02()
{
	plus<int>p;
	cout << "plus<T>  �ӷ�  �º���" << endl;
	cout << p(1, 1) << endl;
}

//���ڷº���  greater<T>
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test03()
{

	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	//����
	cout << " greater<T>  ���ڷº���  ʹ�併������ " << endl;
	sort(v.begin(), v.end(), greater<int>());
	
	
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

//template<class T> bool logical_not<T>//�߼���
void test04()
{
	vector<bool>v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	vector<bool>v2;
	v2.resize(v.size());


	cout << " logical_not<T>   �߼��� " << endl;
	transform(v.begin(), v.end(),v2.begin(), logical_not<int>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end();it++)
	{
		cout << *it << endl;
	}
}




int main() 
{
	test01();
	test02();
	test03();
	test04();


	system("pause");
	return EXIT_SUCCESS;
}















