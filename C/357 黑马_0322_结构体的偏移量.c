#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

struct teacher
{
	char a; // 0-3
	int b; //4-7
};

void test01()
{
	struct teacher t1;
	struct teacher *p = &t1;

	printf("b��ƫ����Ϊ��%d\n", (int)(&(p->b) - &(p)));
	printf("b��ƫ����Ϊ��%d\n", offsetof(struct teacher, b));
}

//ͨ��ƫ���� �����ڴ�
void test02()
{
	struct teacher t1 = { 'a', 2000 };
	struct teacher *p = &t1;

	printf("b��ֵΪ��%d\n", *(int *)((char *)p + offsetof(struct teacher,b)));
	printf("b��ֵΪ��%d\n", *((int *)p + 1));
}

//�ṹ��2 �ṹ��Ƕ�׽ṹ��
struct teacher2
{
	char a; //0-3
	int b; //4-7
	struct teacher c; //8-15
};

void test03()
{
	struct teacher2 t = { 'a', 2525,'b', 2161 };

	int offset1 = offsetof(struct teacher2, c);
	int offset2 = offsetof(struct teacher, b);

	printf("����C��b��ֵΪ��%d\n", *(int *)((char *)&t + offset1 + offset2));
	printf("����C��b��ֵΪ��%d\n", ((struct teacher *)((char *)&t + offset1))->b);


}
int main()
{
	test01();
	test02();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}
