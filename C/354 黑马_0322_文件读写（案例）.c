#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

//按字符方式读写
void test01()
{
	//写文件
	FILE * f_write = fopen("./test1.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	char buf[] = "wangjunjie";
	for (int i = 0; i < strlen(buf);i++)
	{
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
	while ((ch = fgetc(f_read)) != EOF)
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
		"wangjunjie\n",
		"lisijia\n",
		"hahaha\n",
		"gagaga\n",
	};

	for (int i = 0; i < 4;i++)
	{
		fputs(buf[i], f_write);
	}
	fclose(f_write);

	//读文件
	FILE * f_read = fopen("./test2.txt", "r");
	if (f_read == NULL)
	{
		return;	
	}
	while (!feof(f_read))
	{
			char temp[1024] = { 0 };
			fgets(temp, 1024, f_read);
			printf("%s", temp);
	}
	fclose(f_read);
	
}

//按块读文件
struct Hero
{
	char name[64]; //姓名
	int age;  //年龄
};
void test03()
{
	//写文件
	FILE * f_write = fopen("./test3.txt", "wb");
	if (f_write == NULL)
	{
		return;
	}

	struct Hero heros[4] =
	{
		{ "亚瑟", 19 },
		{ "妲己", 20 },
		{ "赵云", 23 },
		{ "孙悟空", 1000 },
	};
	

	for (int i = 0; i < 4;i++)
	{
		fwrite(&heros[i], sizeof(struct Hero), 1, f_write);
	}
	fclose(f_write);

	//读文件
	struct Hero temps[4];
	FILE * f_read = fopen("./test3.txt", "rb");
	if (f_read == NULL)
	{
		return;
	}

	//全部读入
	fread(&temps, sizeof(struct Hero), 4, f_read);

	//打印
	for (int i = 0; i < 4;i++)
	{
		printf("姓名： %s 年龄： %d\n", temps[i].name, temps[i].age);
	}
	fclose(f_read);

}

//格式化文件
void test04()
{
	//写文件
	FILE * f_write = fopen("test4.txt", "w");
	if (f_write == NULL)
	{
		return;
	}
	//格式化写入文件
	fprintf(f_write, "hello world %s %d", "abc",123);

	fclose(f_write);

	//读文件
	FILE * f_read = fopen("test4.txt", "r");

	if (f_read == NULL)
	{
		return;
	}
	char buf[1024] = { 0 };
	while (!feof(f_read))
	{
		//格式化读入文件
		fscanf(f_read, "%s", buf);
		printf("%s\n", buf);
	}
	fclose(f_read);
}

//移动文件光标
void test05()
{
	//打开文件
	FILE * f_write = fopen("./test5.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	struct Hero heros[4] =
	{
		{ "亚瑟", 19 },
		{ "妲己", 20 },
		{ "赵云", 23 },
		{ "孙悟空", 1000 },
	};
	for (int i = 0; i < 4; i++)
	{
		//按块读入文件
		//参数1 写入数据的地址，参数2  块大小  参数3  块个数  参数4  文件指针
		fwrite(&heros[i], sizeof(struct Hero), 1, f_write);
	}
	//关闭文件
	fclose(f_write);

	//读文件
	FILE * f_read = fopen("./test5.txt", "rb");

	if (f_read == NULL)
	{
		//printf("文件打开失败!\n");
		perror("文件打开失败"); // errno 宏 全局变量
		return;
	}

	struct Hero temp;
	//移动文件光标
	//fseek(f_read, sizeof(struct Hero)*2, SEEK_SET);//从头往前找
	fseek(f_read, -(long)sizeof(struct Hero) * 2, SEEK_END); //从后往前找数据
	fseek(f_read, sizeof(struct Hero) * 1, SEEK_CUR); //从当前位置偏移 

	//rewind(f_read); //将文件光标置首

	fread(&temp, sizeof(struct Hero), 1, f_read);

	printf("姓名：%s 年龄:%d\n", temp.name, temp.age);

	fclose(f_read);
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	//test06();



	system("pause");
	return EXIT_SUCCESS;
}
