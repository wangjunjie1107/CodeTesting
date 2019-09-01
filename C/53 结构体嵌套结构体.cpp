#include<stdio.h>

//结构体嵌套结构体
//开辟堆空间存储数据需要释放 

 struct scores
 {
 	int cl;
	int cpp;  //  c++
	int cs;  //   c#  四个+号 = #，  c sharp 
 } ;
 
struct student
{
 	char name[21];
 	int age;
 	struct scores ss;
 	char addr[51];
}; 
  
  
int main()
{
	 struct student stu = {"wang",18,99,99,99,"xian"};
	 
	 printf("%s\n%d\n%d\n%d\n%d\n%s\n", stu.name, stu.age, stu.ss.cl,
	 stu.ss.cpp, stu.ss.cs, stu.addr);
	 
	 return 0;
 } 
