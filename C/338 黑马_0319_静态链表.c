#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

/*

	����Ľ������ʵ�����ǽṹ��������˽ṹ������������ָ����
		1)�����������洢���ݣ�
		2)ָ����������������һ��������ϵ�����˽ڵ�Ϊβ�ڵ�ʱ��ָ�����ֵΪNULL��

*/

//��̬�������еĽ�㶼���ڳ����ж���ģ�������ʱ���ٵģ�
//Ҳ����������ͷ�

typedef struct student
{
	//������
	char name[64];
	int age;

	//ָ����  ָ����һ��ͬ����Ԫ�ص��׵�ַ
	struct student *next;
}student;


void test()
{
	//��ʼ�������ṹ�����
	student p1 = { "wangjunjie", 22 };
	student p2 = { "wangjunjie", 21 };
	student p3 = { "wangjunjie", 20 };

	student * p = &p1;
	p1.next = &p2;
	p2.next = &p3;
	p3.next = NULL; //β�ڵ�

	while(p != NULL)
	{
		printf("id = %s, age = %d\n", p->name, p->age);

		p = p->next;
	}
}

int main()
{
	test();
	system("pause");
	return  EXIT_SUCCESS;
}


