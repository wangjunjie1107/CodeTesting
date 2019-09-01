
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "myconfig.h"
#include "mycode.h"
#include <time.h>


int main(){

	//���������
	srand((unsigned int)time(NULL));

	int lines = getFileLine("./config.txt");
	printf("�ļ�����Ч����Ϊ��%d\n", lines);

	//���ļ��е����ݽ��� ���ҷ��뵽 ������

	//  malloc(sizeof(struct ConfigInfo) * 5)
	struct ConfigInfo * configInfo = NULL;

	parseFile("config.txt", lines, &configInfo);

	//����key��ȡ��Ӧvalueֵ
	printf("heroId = %s\n", getValueByKey("heroId", configInfo, lines));
	printf("heroName = %s\n", getValueByKey("heroName", configInfo, lines));
	printf("heroAtk = %s\n", getValueByKey("heroAtk", configInfo, lines));
	printf("heroDef = %s\n", getValueByKey("heroDef", configInfo, lines));
	printf("heroInfo = %s\n", getValueByKey("heroInfo", configInfo, lines));


	//�����ļ�
	//codeFile("config.txt", "�����ļ�.txt");

	//�����ļ�
	//deCodeFile("�����ļ�.txt", "�����ļ�.txt");

	//��������
	//-32199-717-1490-764-591-31588-31162-32594-31102
	//-32199-717-1490-764-591-31588-31162-32594-31102
	//-32200-711-1497-758-577-31592-31164-32601-31097

	//�ͷ��ڴ�
	freeSpace(configInfo);
	configInfo = NULL;

	system("pause");
	return EXIT_SUCCESS;
}