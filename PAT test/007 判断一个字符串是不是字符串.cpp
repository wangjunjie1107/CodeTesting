#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h> 
using namespace std;


void test()
{
	//�����ַ���
	char array[255] = { 0 };
	cin >> array;

	//����������ַ�������
	int len = strlen(array);

	//���ַ�ָ��ָ���ַ�����ͷ����β��
	char* head = array;
	char* tail = &(array[len - 1]);

	//�ж��Ƿ�Ϊ���Ĵ�
	while (tail - head >= 0)
	{
		//��βָ��λ�ò�
		cout << "tail - head = " << tail - head << endl;

		if (*head == *tail)
		{
			head++;		
			tail--;
			continue;
		}
		else
		{
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

