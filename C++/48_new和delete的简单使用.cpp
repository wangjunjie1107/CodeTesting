#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

/*

		ʹ��new��deleteʱ�� �������¹���

				��1����Ҫʹ��delete���ͷŲ���new������ڴ�
				��2����Ҫʹ��delete�ͷ�ͬһ���ڴ������
				��3�����ʹ��new[]Ϊ��������ڴ棬��Ӧʹ��delete[]���ͷ�
				��4�����ʹ��new[]Ϊһ��ʵ������ڴ棬��Ӧʹ��delete��û�з����ţ����ͷš�
				��5���Կ�ָ��Ӧ��delete�ǰ�ȫ�ġ�

*/ 
int main()
{



	int    * temp1 = new int;
	double * temp2 = new double;
	char   * temp3 = new char [10];


	delete temp1;
	delete temp2;
	delete[]temp3;



	system("pause");
	return EXIT_SUCCESS;
}
