#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//��ͨ�����ͺ���ģ�������Լ����ù���

//1������
template<class T>
T myPlus (T a, T b)
{
	return a + b;
}

int myPlus2(int a, int b)
{
	return a + b;
}

void test01()
{
	//1����ͨ�������Է�����ʽ����ת��
	int a = 10;
	int b = 20;
	char c = 'c';

	//��ͨ����
	myPlus2(a, c); //��ͨ�����Զ��� char ���� ת��Ϊ int ����


	//����ģ��

	//myPlus(a, c);//����ģ�����Զ������Ƶ���ʱ�򣬲��ᷢ����ʽ����ת��
	myPlus<int>(a, c);//��Ҫ����ʾָ�����ͣ��ſ��Է�������ת��
}

//2�����ù���


//����ģ��ͨ���������Ͳ�����ͬ�ĺ���
//ͨ������ģ������ĺ���  ��Ϊ ģ�庯��


//��ͨ����
void myPrint(int a, int b)
{
	cout << "��ͨ����myPrint  int���� ����" << endl;
}

//����ģ��
template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ��myPrint����" << endl;
}

//����ģ���������
template<class T>
void myPrint(T a, T b, T c)
{
	cout << "����ģ��myPrint(a,b,c)����" << endl;
}

void test02()
{
	//1�������ͨ�����ͺ���ģ�嶼����ƥ�䣬����ʹ����ͨ����
	int a = 10;
	int b = 20;
	myPrint(a, b);  //����ʹ����ͨ����

	//2�� �����ǿ��ʹ�ú���ģ�壬����Ҫ�� ��ģ������б�
	myPrint<>(a, b);

	//3������ģ����Է�����������
	myPrint(a, b, 200);

	//4���������ģ����Բ������õ�ƥ�䣬��ô����ʹ�ú���ģ��
	char c1 = 'a';
	char c2 = 'a';
	myPrint(c1, c2);
}
int main()
{

	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}
