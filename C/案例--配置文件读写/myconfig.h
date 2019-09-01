#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//配置信息结构体
struct ConfigInfo
{
	char key[64];
	char value[64];
};

//获取文件有效行数
int getFileLine(const char * filePath);

//判断传入字符串是否为有效行  是 返回1  否 返回0
int isInvalidLine(char * str);

//文件解析
void parseFile(const char * filePath, int lines, struct ConfigInfo ** configInfo);

//根据key获取对应value
char * getValueByKey(char * key, struct ConfigInfo * configInfo, int lines);

//释放内存
void freeSpace(struct ConfigInfo * configInfo);