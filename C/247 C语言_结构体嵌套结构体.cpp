#include<stdio.h>

struct person
{
	char name[50];
	char sex;
};

struct stu
{
	int id;
	struct person info; 
}; 

int main()
{
	//s1[2] 表示将定义并赋值两个学生信息 
	struct stu s1[2] = {
						{101, "wang", 'M'}, 
						{102, "zhao", 'W'}
					};  
	

	printf("id:%d\nname:%s\nsex:%c\n\n", s1[0].id, s1[0].info.name, s1[0].info.sex);
	printf("id:%d\nname:%s\nsex:%c\n", s1[1].id, s1[1].info.name, s1[1].info.sex);
	
	return 0;
}
