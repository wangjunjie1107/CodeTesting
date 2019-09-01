#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//������Ϣ�ṹ��
struct ConfigInfo
{
	char key[64];
	char value[64];
};

//��ȡ�ļ���Ч����
int getFileLine(const char * filePath);

//�жϴ����ַ����Ƿ�Ϊ��Ч��  �� ����1  �� ����0
int isInvalidLine(char * str);

//�ļ�����
void parseFile(const char * filePath, int lines, struct ConfigInfo ** configInfo);

//����key��ȡ��Ӧvalue
char * getValueByKey(char * key, struct ConfigInfo * configInfo, int lines);

//�ͷ��ڴ�
void freeSpace(struct ConfigInfo * configInfo);