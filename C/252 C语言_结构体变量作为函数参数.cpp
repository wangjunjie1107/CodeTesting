#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
{
	char name[50];
	int age;
}; 

void Stuset(struct stu * tmp)
{
	strcpy(tmp->name, "wang");
	tmp->age = 18;
}

int main()
{
	struct stu s1 = {0};
	
	Stuset(&s1);  //地址传递，形参改变实参 
	
	printf("%s\n%d\n", s1.name, s1.age);
	
	return 0;
}
