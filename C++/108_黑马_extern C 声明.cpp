#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//��һ���жϣ������C++������������������ļ�������C�ķ�ʽ��������ĺ���

#ifdef __cplusplus //�����»��� __ c plus  plus
extern "C" {
#endif 


#pragma  once
#include <stdio.h>

	void show();

#ifdef __cplusplus
}
#endif 


void show()
{
	printf("hello world\n");
}


//�������������߱����� ����show���� ��Ҫ��C++�ķ�ʽ���ӣ���C���Է�ʽ����
extern "C" void show();

void test01()
{
	show(); // C++�¿��ܽ��������Ƹ�Ϊ�� _Z4showv
}

int main() {

	test01();


	system("pause");
	return EXIT_SUCCESS;
}


