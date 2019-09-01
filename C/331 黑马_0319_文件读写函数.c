#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test()
{
	//写文件
	FILE * fp_write = NULL;
	//写方式打开文件
	fp_write = fopen("./mydata.txt", "w+");

	if (fp_write == NULL)
	{
		return;
	}

	char buf[] = "this is a test for pfutc";
	int i; 
	for(i = 0; i < stelen(buf); i++)
		fputc(buf[i], fp_write);

	fclose(fp_write);

	//读文件
	FILE* * fp_read =  NULL; 

	fp_read = fopen("./mydata.txt", "r");

	if (fp_read == NULL) 
	{
		return;
	}

#if 0
	//判断文件结尾 注意：多输出一个空格
	while (!feof(fp_read))
	{
		printf("%c", fgetc(fp_read));
	}
#else 
	char ch;
	while ((ch = fgetc(fp_read)) != EOF)
		printf("%c", ch);
#endif
}
int main()
{
	test();
	
	system("pause");
	return EXIT_SUCCESS;
}
