#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

char * getname(void); //��������

int main()
{
	char * name = NULL;

	//�����ַ���
	name = getname();

	//��ӡ�ַ������ڵ�ַ
	cout << name << " at " << (int *)name << endl;

	//�ͷŶ����ռ�
	delete [] name;

	//ָ���ÿ�
	name = NULL;

	system("pause");
	return EXIT_SUCCESS;
}


char * getname(void)
{
	char  temp[80] = { 0 };

	//��������
	cout << "Enter your name: ";
	cin >> temp;


	//�����ڴ�ռ� �ַ�������
	char * name = new char[strlen(temp) + 1];//��ʡ�ռ�  ֻ���乻�õĿռ� �����������ַ�
	
	strcpy(name, temp);
	

	//����ָ���ַ�����ָ��
	return name;
}
