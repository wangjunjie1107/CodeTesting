#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

#include<stddef.h> // offsetofͷ�ļ�  ָ��ƫ����

//ָ��Ĳ���
//1��ָ����� +1 ����Ծ���ֽ���

void test01()
{
	char * p = NULL;

	printf("%d\n", p);
	printf("%d\n", p + 1);

	double * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);

}

//2���ڽ����õ�ʱ��ȡ�����ֽ���
void test02()
{
	char buf[1024] = { 0 };
	int a = 1000;
	memcpy(buf + 10, &a, sizeof(int));

	char * p = buf;

	printf("%d\n", *(int *)(p + 10));

}


//ָ�벽����ϰ
struct Person
{
	char a; //0 ~ 3
	int b;  //4 ~ 7
	char buf[64]; // 8 ~ 71
	int d; // 72 ~ 75
};


void test03()
{
	struct Person p = { 'a', 10, "wangjunjie", 10000 };

	//p�е�d���Ե�ƫ�����Ƕ��٣�
	printf("d��ƫ����Ϊ��%d\n", offsetof(struct Person, d));
	printf("d��ֵΪ��%d\n", *(int *)((char *)&p + offsetof(struct Person, d)));

}

int main()
{
	test01();
	test02();
	test03();
	system("pause"); 
	return EXIT_SUCCESS;
}


