#include "STD.c"

void test01()
{
	char * p = NULL;
	//给p指向的内存区域拷贝内容
	strcpy(p, "1111"); //err
	
	char * q = 0x1122;
	//给q指定的内存区域拷贝内容
	strcpy(q, "2222"); //err
}

int * doWork()
{
	int a = 10;
	int *p = &a;
	return p;
}

//野指针情况
void test02()
{
	//1、声明未初始化指针
	//int *p;
	//printf("%d\n", *p);
	
	//2、malloc后free的指针
	int * p = malloc(sizeof(int));
	*p = 100;
	printf("%d\n", *p); //right
	free(p);
	
	printf("%d\n", *p);//内存已经释放了，可以读取这块内存的内容，但是是乱码
	
	//*p = 100;//错误，内存已经释放，没有权限去操作
	
	p = NULL; //要将野指针置空
	
	//3、指针变量超出了作用域????
	int * p2 = doWork();
	printf("p2 = %d\n", *p2);
	printf("p2 = %d\n", *p2);
	
	//空指针是否可以重复释放？
	//空指针可以重复释放、野指针不可以重复释放
	free(p); 
} 

int main()
{
	//test01();
	test02();
	return 0;
} 









