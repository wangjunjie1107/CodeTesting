#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
{
	char * name; //一级指针 
	int age; 
};

int main()
{
	struct stu * p = NULL;
	p = (struct stu *)malloc(sizeof(struct stu));
	p->name = (char *)malloc(sizeof(char) * 50); //name 是一个 char 型指针
	
	strcpy(p->name, "wang");
	p->age = 18;
	
	printf("%s\n%d\n", p->name, p->age);  //p->name 相当于一个字符串数组名，都是地址 
	
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
