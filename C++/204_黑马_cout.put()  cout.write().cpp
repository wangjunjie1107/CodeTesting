#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


// write() ������ʾ�ַ���

//  write()�������������������ַ�ʱ�Զ�ֹͣ��ӡ�ַ���
//  ��ֻ�Ǵ�ӡָ����Ŀ���ַ�����ʹ�������ַ����ı߽硣
void test01()
{
	//����ָ��
	const char * state1 = "wang";
	const char * state2 = "            *";
	const char * state3 = "jie";

	int len = strlen(state2);

	//ÿ������һ���ַ�  ��ӡ
	for (int i = 1; i <= len; i++)
	{
		cout.write(state2, i); // i ��ʾ������ַ���
		cout << endl;
	}

	//ÿ�μ���һ���ַ�  ��ӡ
	for (int i = len;i > 0;i--)
	{
		cout.write(state2, i);
		cout << endl;
	}
	 
	cout.write(state2, len + 10); //���� state2  �� ֮��� 10 ���ַ�
	cout << endl;



}

// put ������ʾ�ĵ����ַ�
void test02()
{
	cout.put('w');
	cout.put('a');
	cout.put('n');
	cout.put('g');
	cout.put('j');
	cout.put('u');
	cout.put('n');
	cout.put('j');
	cout.put('i');
	cout.put('e');
	cout.put('\n');

	// abcdefg hi j   k  l   m  n  o  p  q  r  s  g  u  v  w  x  y  z
	// 1234567 89 10 11  12 13 14  15 16 17 18 19 20 21 22 23 24 25 26 + 96
	
	cout.put(119); // w
	cout.put(97);  // a 
	cout.put(110); // n
	cout.put(103); // g
	cout.put(106); // j
	cout.put(117); // u
	cout.put(110); // n
	cout.put(106); // j
	cout.put(105); // i
	cout.put(101); // e
	cout<<endl;


}


int main()
{

	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}




