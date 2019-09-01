#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 //按字符方式读写
void test01()
{
	FILE * f_write = fopen("./test1.txt", "w+");
	if (f_write == NULL)
	{
		return;
	}

	char buf[] = "hello world";
	for (int i = 0;i < strlen(buf);i++)
	{
		//按字符写
		fputc(buf[i], f_write);
	}
	fclose(f_write);


	//读文件
	FILE * f_read = fopen("./test1.txt", "r");
	if (f_read == NULL)
	{
		return;
	}
	
	char ch;
	//按字符读
	while ((ch = fgetc(f_read)) != EOF)//End Of File
	{
		printf("%c", ch);
	}
	printf("\n");
	fclose(f_read);
}

//按行读写文件
void test02()
{
	//写文件
	FILE * f_write = fopen("./test2.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	char * buf[] =
	{
		"白日依山尽\n",
		"黄河入海流\n",
		"欲穷千里目\n",
		"更上一层楼\n",
	};

	for (int i = 0;i < 4;i++)
	{
		//按行读
		fputs(buf[i], f_write);
	}
	fclose(f_write);


	//读文件
	FILE * f_read = fopen("./test2.txt", "r");
	if (f_read == NULL)
	{
		return;
	}

	char ch[1024] = { 0 };

	while (!feof(f_read))//如果未到文件的结尾
	{
		//按行写
		fgets(ch,1024,f_read);

		printf("%s", ch);
		memset(ch, 0, 1024);
	}
	fclose(f_read);

}

//按块方式读写文件
struct Hero
{
	char name[64];
	int age;
};
void test03()
{
	//写文件
	FILE * f_write = fopen("./test3.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	struct Hero heros[4] =
	{
		{ "亚瑟", 19 },
		{ "妲己", 20000 },
		{ "赵云", 23 },
		{ "孙悟空", 1000 },
	};

	//按块方式写入文件
	fwrite(&heros, sizeof(struct Hero), 4, f_write);
	
	//关闭文件指针
	fclose(f_write);


	//读文件
	struct Hero temps[4];
	FILE * f_read = fopen("./test3.txt", "r");
	if (f_read == NULL)
	{
		return;
	}
	//按块将文件读入内存
	fread(&temps, sizeof(struct Hero), 4, f_read);

	//打印数据
	for (int i = 0;i < 4;i++)
	{
		printf("姓名：%s, 年龄：%d\n", temps[i].name, temps[i].age);
	}
	fclose(f_read);
}

//格式化读写文件
void test04()
{
	FILE * f_write = fopen("test4.txt", "w");
	if (f_write == NULL)
	{
		return;
	}
	//格式化写文件
	fprintf(f_write, "caeaa hello world %d %s", 1111,"faefafe");
	fclose(f_write);


	
	FILE * f_read = fopen("test4.txt", "r");

	if (f_read == NULL)
	{
		return;
	}
	char buf[1024] = { 0 };
	while (!feof(f_read))
	{
		//格式化读文件 遇到空格就停止读入数据??
		fscanf(f_read, "%s", buf);
		printf("%s\n", buf);
	}
	fclose(f_read);
}

int main()
{
	test04();
	


	system("pause");
	return EXIT_SUCCESS;
}
