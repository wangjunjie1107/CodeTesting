#include "STD.c"

#include<stddef.h> //offsetof��ͷ�ļ�

//ָ��Ĳ���
//1��ָ����� +1 ����Ծ���ֽ���

void test01()
{
	char *p = NULL;
	
	printf("%d\n", p);
	printf("%d\n", p + 1);//��4���ֽ� 
	
	double * p2 = NULL;
	
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);	 //��8���ֽ� 
} 


//2���ڽ����õ�ʱ��ȡ�����ֽ���
//char ָ�� ȡһ���ֽ�
//int ָ�� ȡ�ĸ��ֽ�...
void test02()
{
	char buf[1024] = { 0 };
	int a = 1000;
	memcpy(buf + 2, &a, sizeof(int));
	
	char *p = buf;
	
	printf("%d\n", *(int *)(p + 2));
} 

//ָ�벽����ϰ
typedef struct Person
{
	char a;
	int b;
	char c;
	int d;
	char e[50];
	int f;
};

void test03()
{
	struct Person p = {'a', 20, 'b', 1, "asd", 1314};
	
	//p�е�f���Ե�ƫ�����Ƕ��٣�
	printf("p�е�f�����Ե�ƫ����Ϊ��%d\n", offsetof(struct Person, f));
	
	printf("f��ֵΪ��%d\n", *(int *)((char *)&p + offsetof(struct Person, f)));
} 

int main()
{
	//test02();
	test03();
	return 0;
}


