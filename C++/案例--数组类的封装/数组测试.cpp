#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include "Array.h"

void test01()
{
	MyArray arr1; //Ĭ�Ϲ���
	cout << "-----------------------------------------" << endl;
	cout << "Ĭ�Ϲ�����ԣ�" << endl;
	cout << "��������Ϊ��" << arr1.getCapacity() << endl;


	MyArray arr2(200);//�вι������
	cout << "-----------------------------------------" << endl;
	cout << "�вι�����ԣ�" << endl;
	cout << "��������Ϊ��" << arr2.getCapacity() << endl;


	MyArray arr3(arr2);//�����������
	cout << "-----------------------------------------" << endl;
	cout << "����������ԣ�" << endl;
	cout << "��������Ϊ��" << arr3.getCapacity() << endl;



	arr3.pushBack(100);//β�����
	arr3.insertDateByPos(1, 200);//����λ����������
	arr3.insertDateByPos(1, 300);//����λ�ò�������
	cout << "-----------------------------------------" << endl;
	cout << "�������ݲ��ԣ�" << endl;
	cout << "λ��1����Ϊ��" << arr3.getDate(1) << endl;
	cout << "λ��2����Ϊ��" << arr3.getDate(2) << endl;
	cout << "�����СΪ��" << arr3.getSize() << endl;
	cout << "��������Ϊ��" << arr3.getCapacity() << endl;

	cout << "-----------------------------------------" << endl;
	cout << "����� [] ���ز��ԣ�" << endl;
	cout << "arr3[0] = " << arr3[0] << endl;
	cout << "arr3[1] = " << arr3[2] << endl;
	cout << "arr3[2] = " << arr3[2] << endl;


	cout << "-----------------------------------------" << endl;
	cout << "����� == ���ز��ԣ�" << endl;
	MyArray arr4 = arr3; //����� = ����
	if (arr3 == arr4)
	{
		cout << "arr3 == arr2" << endl;
	}
	else
		cout << "arr3 != arr2" << endl;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
