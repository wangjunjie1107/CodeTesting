#include<stdio.h>
#include<string.h>

//�ṹ�����Ͷ���
struct stu
{
	char name[50];
	int age;
};

//�ȶ������ͣ��ٶ�����������ã�

struct stu s1 = {"wang", 18};

//��������ͬʱ�������, ���ַ�ʽ��һ���нṹ����������һ���� 
struct stu2
{
	char name[50];
	int age;
}s2 = {"li", 22};

struct
{
	char name[50];
	int age;
}s3 = {"zhao", 25};

int main()
{
	struct stu s3;
	
	//�������ͨ������ͨ��������������ṹ���Ա
	strcpy(s3.name, "wang");
	s3.age = 18;
	
	printf("%s\n", s3.name);
	printf("%d\n", s3.age);
	
	//�����ָ�������ͨ��->�����ṹ���Ա
	strcpy((&s3)->name, "test");
	(&s3)->age = 22;
	printf("%s\n", (&s3)->name);
	printf("%d\n", (&s3)->age);
	
	
	return 0; 
 } 















