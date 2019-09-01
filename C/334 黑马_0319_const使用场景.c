#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

struct Person
{
	char name[64]; // 0 ~ 63
	int age;     // 64 ~ 67 
	int Id;      // 68 ~ 71
	double score;  // 72 ~ 79

};

//打印学生信息
//如果是值传递 会拷贝一份信息 占据内存
//而通过地址传递  传递的相当于一个指针  进而节省空间
//加入const修饰函数中的形参  防止误操作
void printPerson(const struct Person * p)
{
	//p.age = 100;
	printf("姓名：%s 年龄： %d  学号：%d 分数: %f\n", p.name, p.age, p.Id, p.score);
	
}


void test01()
{
	struct Person p1 = { "Tom", 18, 1, 60 };

	printPerson(&p1);

	printf("年龄:%d\n", p1.age);

}
int main()
{
	
	test01();

	system("pause");
	return  EXIT_SUCCESS;
}


