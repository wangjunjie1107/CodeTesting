#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#pragma once   //������ֹͷ�ļ����ظ�����

//#pragma pack(show)  //Ĭ�϶���ģ��Ϊ8

//#pragma pack(1)  //���Ķ���ģ��Ϊ1  ����ģ�� ���Ը�Ϊ 2��n�η�


#define MAX(a,b) ( ( a ) > ( b ) ? ( a ) : ( b ) )

int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	
	printf("x = %d,y = %d, z = %d\n", x, y, z);
	//x=6��y=10,z=9
	system("pause");
	return EXIT_SUCCESS;
}
