#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;


//����һ���ַ�����Ȼ�������
void test()
{
	int num = 0;  //���ʵĸ���
	char ans[90] = { 0 };

	//��ȡһ����
	gets(ans);
	
	//������� ��βָ�룬βָ���ƶ�����ָ�벻��
	char* head = ans;
	char* tail = &ans[strlen(ans) - 1];

	while (tail - head >= 0)
	{
		cout << *tail;
		--tail;
	}
	cout << endl;
}

int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

