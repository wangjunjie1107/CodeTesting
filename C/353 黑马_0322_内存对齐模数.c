#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

//�ڴ����ԭ��

//��һ�����Կ�ʼ  ��0��ʼ����ƫ����
//�ڶ�������Ҫ����  �����ԵĴ�С �� ����ģ����  ȡС��ֵ�� �������� 
//���������Զ�������Ϻ�����������ƫ�ƣ�
//���������Ľ�� ���䵽 ����ṹ��������������� �����ģ��  �� ȡС��ֵ ��������



//#pragma pack(show)  //Ĭ�϶���ģ��Ϊ8

#pragma pack(1)  //���Ķ���ģ��Ϊ1  ����ģ�� ���Ը�Ϊ 2��n�η�

struct Person
{
	char a[23];  // 0-23	//0-22
	int b;		//24-27		//23-26
	double c;	//32-39		//27-34
	float d;	//40-43		//35-38
	char e[48];//44-91		//39-86
	int f;	//92-95			//87-90

	
	//�ܵ��ڴ� ���������������� 8���ֽ�  �ܵ��ڴ�Ϊ96  0-95
	//���Ķ���ģ��Ϊ1�� ���ڴ�Ϊ91   0-90
};
int main()
{

	//Ĭ�϶���ģ��

	/*printf("a ��ƫ����Ϊ��%d\n", offsetof(struct Person , a));
	printf("b ��ƫ����Ϊ��%d\n", offsetof(struct Person, b));
	printf("c ��ƫ����Ϊ��%d\n", offsetof(struct Person, c));
	printf("d ��ƫ����Ϊ��%d\n", offsetof(struct Person, d));
	printf("e ��ƫ����Ϊ��%d\n", offsetof(struct Person, e));
	printf("f ��ƫ����Ϊ��%d\n", offsetof(struct Person, f));
	printf("�ܵ��ڴ�Ϊ��%d\n", sizeof(struct Person));*/


	//���Ķ���ģ�� Ϊ 1��

	printf("a ��ƫ����Ϊ��%d\n", offsetof(struct Person, a));
	printf("b ��ƫ����Ϊ��%d\n", offsetof(struct Person, b));
	printf("c ��ƫ����Ϊ��%d\n", offsetof(struct Person, c));
	printf("d ��ƫ����Ϊ��%d\n", offsetof(struct Person, d));
	printf("e ��ƫ����Ϊ��%d\n", offsetof(struct Person, e));
	printf("f ��ƫ����Ϊ��%d\n", offsetof(struct Person, f));
	printf("�ܵ��ڴ�Ϊ��%d\n", sizeof(struct Person));


	system("pause");
	return EXIT_SUCCESS;
}
