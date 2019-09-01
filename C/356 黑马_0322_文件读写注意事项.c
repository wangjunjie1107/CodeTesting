#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

//feof对于按字符读取函数的使用
void test01()
{
	//按照字符读test文件
	FILE * file = fopen("./test.txt", "r");
	if (file == NULL)
	{
		return;
	}

#if 0
	char ch;
	while (!feof(file))
	{
		ch = fgetc(file);

		//如果不设置读取到EOF就退出，
		//则会打印出EOF 两个空格
		if (feof(file))
		{
			break;
		}

		printf("%c", ch);
	}
	fclose(file);
#endif

	//第二种方式按字符读取
	//whlie 判断不用feof函数
	char ch;
	while ((ch = fgetc(file)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(file);
}

//注意事项2
struct Person
{
	char * name; //如果结构体中属性 创建在堆区，
				//保存数据到文件中时候，不要将指针放入到文件中
	int age;
}; 

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
