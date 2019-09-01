#include "myconfig.h"
#define _CRT_SECURE_NO_WARNINGS

//��ȡ�ļ���Ч����
int getFileLine(const char * filePath)
{
	FILE * file = fopen(filePath, "r");

	if (file == NULL)
	{
		return -1;
	}

	char buf[1024] = { 0 };
	int line = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		//����Ƿ���Ч
		if (isInvalidLine(buf))
		{
			line++;
		}
	}
	return line;
}

//�жϴ����ַ��Ƿ�Ϊ��Ч�� �� ����1 �� 0
int isInvalidLine(char * str)
{
	if (str[0] == '\n' || strchr(str, ':') == NULL)
	{
		return 0;
	}

	return 1;
}

//�ļ�����
void parseFile(const char * filePath, int lines, struct ConfigInfo ** configInfo)
{
	struct ConfigInfo * config = malloc(sizeof(struct ConfigInfo)*lines);
	if (config == NULL)
	{
		return;
	}

	FILE * file = fopen(filePath, "r");
	if (file == NULL)
	{
		return;
	}

	char buf[1024] = { 0 }; //����ȡÿ�����ݷ��뵽buf��
	int indxe = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		if (isInvalidLine(buf))
		{
			//buf = heorId:1111\n\0\0\0
			//���key��valueֵ
			memset(config[indxe].key, 0, 64);
			memset(config[indxe].value, 0, 64);

			char * pos = strchr(buf, ':');
			//��ȡkey����
			strncpy(config[indxe].key, buf, pos - buf);
			//��ȡvalue����
			strncpy(config[indxe].value, pos + 1, strlen(pos + 1) - 1);//-1��Ϊ�˲�Ҫ�ļ��еĻ��з�
																	   // printf("key = %s\n", config[indxe].key);
																	   // printf("value = %s\n", config[indxe].value);
			indxe++;
		}
		memset(buf, 0, 1024);
	}

	*configInfo = config;
}


//����key��ȡ��Ӧvalue
char * getValueByKey(char * key, struct ConfigInfo * configInfo, int lines)
{
	for (int i = 0; i < lines;i++)
	{
		if (strcmp(configInfo[i].key, key) == 0)
		{
			return configInfo[i].value;
		}
	}

	return NULL;
}


//�ͷ��ڴ�
void freeSpace(struct ConfigInfo * configInfo)
{
	if (configInfo == NULL)
	{
		return;
	}
	free(configInfo);
	configInfo = NULL;
}