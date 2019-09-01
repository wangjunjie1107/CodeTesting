#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu
{
	char name[50];
	int age;
};

void Stuset(struct stu *tmp, int n)
{
	for(int i = 0; i < n; i++)
	{
		sprintf((tmp + i)->name, "name00%d", i + 1);
		(tmp + i)->age = 18 + i;
	}
 } 
 
int main()
{
	struct stu s1[5] = {0};
	
	int n = sizeof(s1) / sizeof(s1[2]);
	
	Stuset(s1, n);//数组名传递，实际上是地址传递
	
	for(int i = 0; i < n; i++)
	{
		printf("s1[%d]:\t%s\tage:%d\n", i, s1[i].name, s1[i].age);
	
	} 
	
	return 0;
}
