#include<stdio.h>

//typedef��Ҫ��;�����������
// �﷨  typedef  ԭ��  ���� 
// 1������� 
typedef struct person
{
	char name[30];
	int age;
}myperson;

void test01()
{
	struct person p1 = {"zhangsan", 19};
	
	myperson = {"lisi", 20};
}

//2 . ������������ 
void test02()
{
	typedef char * DATA;
	DATA p1,p2;
}

//3����ߴ������ֲ��
typedef long long myint  //Ҫ�ı��������ͣ�ֻ��Ҫ�滻long long�ĵط� 
void test3()
{
	myint p1;
	myint p2;
 } 

 

int main()
{
	
 } 
