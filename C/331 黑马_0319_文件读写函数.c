#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test()
{
	//д�ļ�
	FILE * fp_write = NULL;
	//д��ʽ���ļ�
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

	//���ļ�
	FILE* * fp_read =  NULL; 

	fp_read = fopen("./mydata.txt", "r");

	if (fp_read == NULL) 
	{
		return;
	}

#if 0
	//�ж��ļ���β ע�⣺�����һ���ո�
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
