#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//��
struct Person
{
	char m_Name[64]; //����
	int m_Age; // ����
};

//�Է�
void personEat(struct Person * p)
{
	printf("%s�ڳ��˷�\n", p->m_Name);
}

//��
struct Dog
{
	char m_Name[64]; //����
	int m_Age; // ����
};


//�Է�
void DogEat(struct Dog* dog)
{
	printf("%s�ڳԹ���\n", dog->m_Name);
}


void test01()
{
	//������
	struct Person p1;
	strcpy(p1.m_Name, "����");
	p1.m_Age = 19;

	personEat(&p1);


	//������
	struct Dog d1;
	strcpy(d1.m_Name, "����");
	d1.m_Age = 10;

	DogEat(&d1);

}

void test02()
{
	struct Person p1;
	strcpy(p1.m_Name, "����");
	p1.m_Age = 10;

	DogEat(&p1); //�˳Թ��� �����ô��� ��C������ֻ���о��� ���������
}


//C���Է�װ ȱ�㣺������ ����Ϊ���� �����²�ͬ����֮�� ���Ի�����ò�ͬ��Ϊ

int main() 
{

	//test01();

	test02();

	system("pause");
	return EXIT_SUCCESS;
}
