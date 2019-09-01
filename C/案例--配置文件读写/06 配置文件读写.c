
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "myconfig.h"
#include "mycode.h"
#include <time.h>


int main(){

	//随机数种子
	srand((unsigned int)time(NULL));

	int lines = getFileLine("./config.txt");
	printf("文件的有效行数为：%d\n", lines);

	//将文件中的数据解析 并且放入到 数组中

	//  malloc(sizeof(struct ConfigInfo) * 5)
	struct ConfigInfo * configInfo = NULL;

	parseFile("config.txt", lines, &configInfo);

	//根据key获取对应value值
	printf("heroId = %s\n", getValueByKey("heroId", configInfo, lines));
	printf("heroName = %s\n", getValueByKey("heroName", configInfo, lines));
	printf("heroAtk = %s\n", getValueByKey("heroAtk", configInfo, lines));
	printf("heroDef = %s\n", getValueByKey("heroDef", configInfo, lines));
	printf("heroInfo = %s\n", getValueByKey("heroInfo", configInfo, lines));


	//加密文件
	//codeFile("config.txt", "加密文件.txt");

	//解密文件
	//deCodeFile("加密文件.txt", "解密文件.txt");

	//加密数据
	//-32199-717-1490-764-591-31588-31162-32594-31102
	//-32199-717-1490-764-591-31588-31162-32594-31102
	//-32200-711-1497-758-577-31592-31164-32601-31097

	//释放内存
	freeSpace(configInfo);
	configInfo = NULL;

	system("pause");
	return EXIT_SUCCESS;
}