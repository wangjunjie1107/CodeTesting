#include "mycode.h"

//���ܺ���
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

	//���ַ���ȡ
	while ((ch = fgetc(fp1)) != EOF)
	{
		//��ÿ���ַ�����
		short temp = (short)ch; //ǿ������װ��

		//����4λ
		temp = temp << 4;

		//ͳһ����λΪ����
		temp = temp | 0x8000;//ʮ�����Ƶ� 1000 0000 0000 0000  ��ı����λΪ1 ��ɸ���

		//�������
		temp = temp + rand() % 16; //(0~15) ���4λ�����ֵ

		printf("%d\n", temp);
		//�����ܵ��ַ� ���뵽�ļ���
		fprintf(fp2, "%hd", temp);//��ʽ����д�ļ�
	}

	fclose(fp1);
	fclose(fp2);
}

//���ܺ���
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
		//���ַ���ȡ
		fscanf(fp1, "%hd", &temp);
		temp <<= 1;//����λ�ı�
		temp >>= 5;//������Ƴ�  

		char ch = (char)temp;//����ת��
		fputc(ch, fp2);//�����Ŀ���ļ�
	}
	fclose(fp1);
	fclose(fp2);

}