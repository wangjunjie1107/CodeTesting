#include "myconfig.h"
#define _CRT_SECURE_NO_WARNINGS

//获取文件有效行数
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
		//检测是否有效
		if (isInvalidLine(buf))
		{
			line++;
		}
	}
	return line;
}

//判断传入字符是否为有效行 是 返回1 否 0
int isInvalidLine(char * str)
{
	if (str[0] == '\n' || strchr(str, ':') == NULL)
	{
		return 0;
	}

	return 1;
}

//文件解析
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

	char buf[1024] = { 0 }; //将读取每行数据放入到buf中
	int indxe = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		if (isInvalidLine(buf))
		{
			//buf = heorId:1111\n\0\0\0
			//清空key和value值
			memset(config[indxe].key, 0, 64);
			memset(config[indxe].value, 0, 64);

			char * pos = strchr(buf, ':');
			//截取key数据
			strncpy(config[indxe].key, buf, pos - buf);
			//截取value数据
			strncpy(config[indxe].value, pos + 1, strlen(pos + 1) - 1);//-1是为了不要文件中的换行符
																	   // printf("key = %s\n", config[indxe].key);
																	   // printf("value = %s\n", config[indxe].value);
			indxe++;
		}
		memset(buf, 0, 1024);
	}

	*configInfo = config;
}


//根据key获取对应value
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


//释放内存
void freeSpace(struct ConfigInfo * configInfo)
{
	if (configInfo == NULL)
	{
		return;
	}
	free(configInfo);
	configInfo = NULL;
}