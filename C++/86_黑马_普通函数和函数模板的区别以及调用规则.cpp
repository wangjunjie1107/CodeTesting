#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��ͨ�����ͺ���ģ�������Լ����ù���

//1������
template<class T>
T myPlus(T a, T b)
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
	int a = 1;
	int b = 2;
	char c = 'c';
	cout << myPlus(a, b) << endl;
	cout << myPlus2(a, b) << endl;
	//myPlus(a, c);//����ģ�� ���Զ������Ƶ���ʱ�򣬲��ᷢ����ʽ����ת��
	cout << myPlus2(a, c) << endl;
}


//2������ԭ��
void myPrint(int a, int b)
{
	cout << "��ͨ��������" << endl;
}

//����ģ��ͨ���������Ͳ�����ͬ�ĺ���
//ͨ������ģ�� �����ĺ��� ��Ϊ ģ�庯��

template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ��myPrint����" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "����ģ��myPrint(a,b,c)����" << endl;
}


void test02()
{
	//1�������ͨ�����ͺ���ģ�嶼����ƥ�䣬����ʹ����ͨ����
	myPrint(1 ,2);

	//2�������ǿ�Ƶ��ú���ģ�壬��Ҫ�� ��ģ������б�
	myPrint<>(1, 2);

	//3������ģ��Ҳ���Է�����������
	myPrint(1, 2, 3);

	//4���������ģ����Բ������õ�ƥ�䣬��ô����ʹ�ú���ģ��
	char c1 = 'c';
	char c2 = 'd';
	myPrint(c1, c2);

}



int main() {


	test02();

	system("pause");
	return EXIT_SUCCESS;
}
