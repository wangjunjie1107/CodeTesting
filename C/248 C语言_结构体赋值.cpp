#include<stdio.h>
#include<string.h>

struct stu
{
	char name[50];
	char sex;
	int scores;
};

int main()
{
	struct stu s1;
	
	strcpy(s1.name, "wang"); //�ַ�����ֵ�����ÿ�������������ֱ�Ӹ�ֵ 
	s1.scores = 88;
	s1.sex = 'M';
	
	//��ͬ���͵������ṹ�����������ֱ�Ӹ�ֵ
	//��s1��Ա������ֵ������s2��Ա�������ڴ�
	
	struct stu s2 = s1;
	printf("s2:\n%s\n%c\n%d\n", s2.name, s2.sex, s2.scores);
	
 } 
