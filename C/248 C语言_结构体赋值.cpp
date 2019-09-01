#include<stdio.h>
#include<string.h>

struct stu
{
	char name[50];
	char sex;
	int scores;
};

int main()
{
	struct stu s1;
	
	strcpy(s1.name, "wang"); //字符串赋值必须用拷贝，或者括号直接赋值 
	s1.scores = 88;
	s1.sex = 'M';
	
	//相同类型的两个结构体变量，可以直接赋值
	//把s1成员变量的值拷贝给s2成员变量的内存
	
	struct stu s2 = s1;
	printf("s2:\n%s\n%c\n%d\n", s2.name, s2.sex, s2.scores);
	
 } 
