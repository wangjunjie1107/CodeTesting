#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

////const���γ���
//void test01()
//{
//	const int j = 100;
//	//j = 120; //err ֻ��������ʼ��֮�����޸�
//
//	const int i;
//	//i = 100; //err �����const������ó�ʼ�����������ٴ�ֱ�Ӹ�ֵ
//
//	//C���Ե�const������һ��ֻ��������������һ�����������Կ���ͨ��ָ������ڴ��ַ�����޸�
//	const int k = 200;
//	int * p = &k;
//	*p = 1000;
//	printf("k = %d\n", k);
//}
//
////const ����ָ��
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	
//	//const ����*�ŵ���࣬����pָ����ڴ�ռ䲻���޸ģ���ָ���ָ������޸�
//	const int *p = &a;
//	//*p = 1000; //err �����޸�ָ��ָ����ڴ�ռ�
//	p = &b;//�����޸�p ��ָ��
//
//
//	//const ����*�ŵ��Ҳ࣬����qָ����ڴ�ռ�����޸ģ���ָ���ָ�򲻿����޸�
//	int * const q = &a;
//	//*q = &b;//err �������޸�ָ���ָ��
//	*q = 1000; //�����޸�ָ��ָ����ڴ�ռ�
//
//	//const����*�ŵ����ߣ����ڴ�ռ��ָ�򶼲����޸�
//	const int const * p;
//}


//const ָ����÷�  
//�ڴ���ַ�ĺ��������� ʹ��const���Ա������ݱ��޸�
struct Person {
	char name[64];
	int id;
	int age;
	int score;
};
//ÿ�ζ��Զ�����п�����Ч�ʵͣ�Ӧ����ָ��
void printPersonByValue(struct Person person) {
	printf("Name:%s\n", person.name);
	printf("Name:%d\n", person.id);
	printf("Name:%d\n", person.age);
	printf("Name:%d\n", person.score);
}
//������ָ����и����ã����ܻ᲻С���޸�ԭ���� ���ʹ��const�����������ڴ棬���������޸�
void printPersonByPointer(const struct Person *person) {
	printf("Name:%s\n", person->name);
	printf("Name:%d\n", person->id);
	printf("Name:%d\n", person->age);
	printf("Name:%d\n", person->score);
}
void test03() {
	struct Person p = { "Obama", 1101, 23, 87 };
	//printPersonByValue(p);
	printPersonByPointer(&p);
}

int main()
{
	//test01();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
