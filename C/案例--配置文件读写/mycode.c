#include "mycode.h"

//加密函数
void codeFile(char * sourceFile, char *destFile)
{
	//# 35
	// short
	//0000 0000 0010 0011 << 4
	//0000 0010 0011 0000
	//1000 0000 0000 0000  |
	//1000 0010 0011 0000 + 0000 ~ 1111  0~15
	//1000 0010 0011 0101

	FILE * fp1 = fopen(sourceFile, "r");
	FILE * fp2 = fopen(destFile, "w");

	if (!fp1 || !fp2)
	{
		return;
	}

	char ch;

	//按字符读取
	while ((ch = fgetc(fp1)) != EOF)
	{
		//给每个字符加密
		short temp = (short)ch; //强制类型装换

		//左移4位
		temp = temp << 4;

		//统一符号位为负数
		temp = temp | 0x8000;//十六进制的 1000 0000 0000 0000  会改变符号位为1 变成负数

		//加随机数
		temp = temp + rand() % 16; //(0~15) 最后4位随机赋值

		printf("%d\n", temp);
		//将加密的字符 放入到文件中
		fprintf(fp2, "%hd", temp);//格式化读写文件
	}

	fclose(fp1);
	fclose(fp2);
}

//解密函数
void deCodeFile(char * sourceFile, char * destFile)
{
	// 1000 0010 0011 0101 << 1
	// 000 0010 0011 01010 >> 5
	// 0000 0000 0010 0011 
	// 0000 0000 0010 0011

	FILE * fp1 = fopen(sourceFile, "r");
	FILE * fp2 = fopen(destFile, "w");

	if (!fp1 || !fp2)
	{
		return;
	}

	short temp;
	while (!feof(fp1))
	{
		//按字符读取
		fscanf(fp1, "%hd", &temp);
		temp <<= 1;//符号位改变
		temp >>= 5;//随机数移除  

		char ch = (char)temp;//类型转变
		fputc(ch, fp2);//输出到目标文件
	}
	fclose(fp1);
	fclose(fp2);

}