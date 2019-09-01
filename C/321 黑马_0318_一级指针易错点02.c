#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//返回局部变量的地址
//char *test01()
//{
//	char buf[] = "wangjunjie"; //栈区
//	printf("%s\n", buf);
//
//	return buf;
//}

void test02()
{
	char * p = (char * )malloc(100);
	strcpy(p, "wangjunjie");
	printf("%s\n", p);

	if (p != NULL)
	{
		//free()函数的功能只是告诉系统 p 指向的内存可以回收了
		//就是说, p 指向的内存使用权交还给系统
		//但是，p 的值还是原来的值( ( 野指针) ) ，p 还是指向原来的内存
		free(p);
		p = NULL; //将指针置空
	}

	if (p != NULL)
	{
		free(p); //因为已经释放过p指向的内存了，所以不可以再次操作，去释放野指针。
	}
}

int main()
{
	//char *p = test01();
	//printf("%s\n", *p);//因为栈区的内存已经被释放了，所有再去操作它会出错

	test02();
	system("pause");
	return EXIT_SUCCESS;
}
