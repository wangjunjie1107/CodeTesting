#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

struct Person
{
	char name[64]; // 0 ~ 63
	int age;     // 64 ~ 67 
	int Id;      // 68 ~ 71
	double score;  // 72 ~ 79

};

//��ӡѧ����Ϣ
//�����ֵ���� �´��һ����Ϣ ռ���ڴ�
//��ͨ����ַ����  ���ݵ��൱��һ��ָ��  ������ʡ�ռ�
//����const���κ����е��β�  ��ֹ�����
void printPerson(const struct Person * p)
{
	//p.age = 100;
	printf("������%s ���䣺 %d  ѧ�ţ�%d ����: %f\n", p.name, p.age, p.Id, p.score);
	
}


void test01()
{
	struct Person p1 = { "Tom", 18, 1, 60 };

	printPerson(&p1);

	printf("����:%d\n", p1.age);

}
int main()
{
	
	test01();

	system("pause");
	return  EXIT_SUCCESS;
}


