#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> //offsetof��ͷ�ļ� 


//ָ��Ĳ��������� 
//1 ָ�����+1 ֮��  ��Ծ���ֽ����� 
void test01()
{
	char * p = NULL;
	printf("%d\n", p);
	printf("%d\n", p+1);
	
	double * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2+1); 
}

//2 �����õ�ʱ��ȡ���ֽ���
void test02()
{
	char buf[1024] = {0};
	
	int a = 1000;
	
	memcpy(buf,&a,sizeof(int));
	
	char * p = buf;//ͨ��p�ҵ�buf���׵�ַ
	
	printf("buf�е�a = %d\n",*(int *)p);
	 
	
	
 } 
 
 struct Person
 {
 	char a; //0-3
 	int b;  //4-7 
 	char buf[64]; //8-71
 	int d;//72-75

 };

void test03()
{
	struct Person p1 = {'a',10,"hello world",1000};

 	//����ṹ���У����Ե�ƫ����
	 printf("p1.d��ƫ����Ϊ: %d\n", offsetof(struct Person,d)); 

	//��ӡd��ֵ
	printf("p1.d��ֵΪ�� %d\n",*(int*)((char*)&p1 + offsetof(struct Person,d)));
}

int main()
{
	test03();
	
	return 0;
 } 

























