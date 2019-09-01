#include<stdio.h>


typedef struct island
{
	char * name;
	char * opens;
	char * closes;
	struct island *next;
}island;


//打印链表内容 
void display(island *start)
{
	island *i = start;
	for( ; i != NULL; i = i -> next)
	{
		printf("Name: %s\nOpen: %s-%s\n\n", i->name, i->opens, i->closes);
	}
		
	
}

//给出结构体内容，并通过指针链接每一组数据。 
int main()
{
	island a = { "Amity", "09:00", "17:00", NULL};
	island b = { "Shejiawan", "09:45", "10:55", NULL};
	island c = { "Jiaodaijie", "11:00", "12:00", NULL};
	
	a.next = &b;
	b.next = &c;
	
	display(&a); 
 } 
