#include<stdio.h>

typedef struct{
	const char *name;
	const char *species;
	int age;
}turtle;

void happy_birthday1(turtle *t)  //ͨ��ָ�봫�ݵ�ַ�����޸ı��� 
{
	(*t).age = (*t).age + 1;
	printf("Happy birthday %s! You are now %i years old!\n\n",
			(*t).name, (*t).age);
}

void happy_birthday2(turtle *t)  //ͨ��ָ�봫�ݵ�ַ�����޸ı��� 
{
	t->age = t->age + 1;  //�ü�ͷ���棬��ʾ�� t ָ��ṹ���е� age �ֶΡ�
	 
	printf("Happy birthday %s! You are now %i years old!\n\n",
			t->name, t->age);
}

int main()
{
	turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
	
	happy_birthday1(&myrtle);  //���ݵ�ַ 
	
	happy_birthday2(&myrtle);
	
	printf("%s's age is now %i!\n", myrtle.name, myrtle.age);
	
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
