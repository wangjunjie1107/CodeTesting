#include<stdio.h>

typedef struct{
	const char *name;
	const char *species;
	int age;
}turtle;

void happy_birthday1(turtle *t)  //通过指针传递地址，来修改变量 
{
	(*t).age = (*t).age + 1;
	printf("Happy birthday %s! You are now %i years old!\n\n",
			(*t).name, (*t).age);
}

void happy_birthday2(turtle *t)  //通过指针传递地址，来修改变量 
{
	t->age = t->age + 1;  //用箭头代替，表示由 t 指向结构体中的 age 字段。
	 
	printf("Happy birthday %s! You are now %i years old!\n\n",
			t->name, t->age);
}

int main()
{
	turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
	
	happy_birthday1(&myrtle);  //传递地址 
	
	happy_birthday2(&myrtle);
	
	printf("%s's age is now %i!\n", myrtle.name, myrtle.age);
	
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
