#include "STD.c"

typedef struct 
{
	//内存要对齐，所以分配时要注意可能给char类型多分配几个字节
	int num;   			// 0-3   占4个字节 
	char name[15]; 		//4 - 19  占16个字节 
	int age;		 	//20 - 23  占4个字节 
}MyPerson;

int main()
{
	MyPerson p1 = {001, "wang", 20};
	MyPerson * p;
	
	p = &p1;
	
	//指针修改结构体内的值 
	p->age = 22;
	printf("%d\n", p->age);
	
	char * p2  = &p1;
	printf("%d\n", *(int *)(p2 + 20));  //在C语言下执行 会有警告 但可以执行 
}
