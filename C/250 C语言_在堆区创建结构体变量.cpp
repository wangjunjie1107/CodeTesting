#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu
{
	char name[50];
	int age;
 };
 
 int main()
 {
 	struct stu * p = NULL;
 	p = (struct stu *)malloc(sizeof(struct stu));  //����ռ� 
 	
 	strcpy(p->name, "Wang");
 	p->age = 18;
 	
 	printf("%s\n%d\n", p->name, p->age);
 	
 	free(p); //����ѿռ䣬�ǵ��ͷ� 
 	
 	return 0;
  } 
