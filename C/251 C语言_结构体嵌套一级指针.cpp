#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
{
	char * name; //һ��ָ�� 
	int age; 
};

int main()
{
	struct stu * p = NULL;
	p = (struct stu *)malloc(sizeof(struct stu));
	p->name = (char *)malloc(sizeof(char) * 50); //name ��һ�� char ��ָ��
	
	strcpy(p->name, "wang");
	p->age = 18;
	
	printf("%s\n%d\n", p->name, p->age);  //p->name �൱��һ���ַ��������������ǵ�ַ 
	
	if(p->name != NULL)
	{
		free(p->name);
		p->name = NULL;
	}	
	
	if(p != NULL)
	{
		free(p);
		p = NULL;
		}	
	
	return 0;
 } 
