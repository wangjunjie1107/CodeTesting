#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
	//	int &b = 10; //�Ƿ�

	const int &b = 10; // �������������޸�Ϊ ��  int temp = 10;  const int &b = temp;

					   //b = 100;

	int * p = (int *)&b;
	*p = 20;

	cout << b << endl;

}
int main() 
{
	//�����޸ĳ������õ�ֵ
	test01();
	

	system("pause");
	return EXIT_SUCCESS;
}
