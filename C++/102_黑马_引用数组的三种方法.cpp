#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1�����﷨
//�﷨  ��������  & ���� = ԭ��
void test01()
{
	int a = 10;

	int &b = a;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


//2��ע������
void test02()
{
	//���ñ����ʼ��
	int a = 10;
	//int &b; error ���������ʼ��
	int &b = a;

	//����һ����ʼ���󣬾Ͳ�����������λ��
	int c = 20;
	b = c; //��ֵ �������޸�����ָ��
}


//3 ��������������
void test03()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	//1��ֱ�ӽ�������
	//pArr����arr�ı���
	int(&pArr)[5] = arr;

	//for (int i = 0; i < 5;i++)
	//{
	//	cout << pArr[i] << endl;
	//}


	//2���ȶ����������ͣ���ͨ�����Ͷ������������
	typedef int(ARRAY_TYPE)[5];
	//  ��������  & ���� = ԭ��
	ARRAY_TYPE & pArr2 = arr;

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << pArr2[i] << endl;
	//}

	//3�� �ȶ��������������ͣ���ͨ�����Ͷ�������
	typedef int(&ARRAY_TYPE_REF)[5];

	ARRAY_TYPE_REF pArr3 = arr;


	for (int i = 0; i < 5; i++)
	{
		cout << pArr3[i] << endl;
	}

}

int main(){

	//test01();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}
