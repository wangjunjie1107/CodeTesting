#include<stdio.h>

struct stu
{
	char name[50];
	int scores;
};

int main()
{
	struct stu s1 = {"wang", 88};
	struct stu * p = (&s1); //ָ�� s1 �Ľṹ��ָ�� 
	printf("s1:\t%s\t%d\n\n", p->name, p->scores);
	
	struct stu s2[2] = {
						{"zhao", 100},
						{"qian", 110}
					}; 
	struct stu *p2;
	p2 = s2;
	
	printf("s2[1]:\t%s\t%d\n\n", (p2 + 0)->name, (p2 + 0)->scores); //��ַ�ü�ͷ 
	printf("s2[2]:\t%s\t%d\n", (p2 + 1)->name, (p2 + 1)->scores);	//�����õ���� 
	
	
	return 0;
 } 
