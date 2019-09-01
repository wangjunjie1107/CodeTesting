#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>



//֮������Ҫע��Ҫ�ڵ�ǰ·���½����ļ� ���ܴ򿪶�д 
//�������þ���·�����������ļ�

//��ȡ�ļ�����Ч����
int getFileLines(FILE * file)
{
	//�ж��ļ�ָ���Ƿ���Ч
	if (file == NULL)
	{
		printf("�ļ�ָ����Ч\n");
		return -1;
	}

	char buf[1024]; //��������������ʱ�洢�ַ�
	int lines = 0;

	//fgets��ʾ���ļ��е�������д��buf��
	//�˴�Ϊʲô���buf ??? ��һ�е�����д��������Ḳ����һ�е�����
	//fgets������һ���жϵĹ��̣����� �ļ��Ľ�β����NULL  ������֮���ǻ��з�
	while (fgets(buf, 1024, file) != NULL)
	{
		//fgets��һ�����ݡ����ֽ�β����NULL--ִ�������е�����lines++���ٶ�����һ������
		lines++;
		//printf("%s\n", buf);
	}

	//��ʱ�ļ��Ĺ���Ѿ������ļ�ĩβ��
	//������Ҫ���ļ��Ĺ������
	//fseek(file, 0, SEEK_SET); 
	rewind(file);  //Ҳ���Խ��ļ��������
				   /*
				   int fseek( (FILE * *stream, , long offset, , int whence );
				   ���ܣ��ƶ��ļ������ļ���꣩�Ķ�дλ�á�
				   ������
				   stream���Ѿ��򿪵��ļ�ָ��
				   offset������ whence ���ƶ���λ������ƫ��������������������Ҳ���Ը��������������
				   ������� whence �����ƶ�������Ǹ������������ whence �����ƶ��������ǰ�ƶ����ֽ�����
				   �����ļ���ͷ������أ��������ƶ����ֽ��������� �ļ�ĩβ���ٴ�д��ʱ�������ļ���
				   �硣
				   whence����ȡֵ���£�
				   SEEK_SET�����ļ���ͷ�ƶ� offset ���ֽ�
				   SEEK_CUR���ӵ�ǰλ���ƶ� offset ���ֽ�
				   SEEK_END�����ļ�ĩβ�ƶ� offset ���ֽ�
				   */


				   //SEEK_SET
				   //SEEK_END
				   //SEEK_CUR

	return lines;
}

//���ļ��е����ݷ��뵽pArray��������
void readFileData(FILE * file, char ** pArray, int len)
{
	if (file == NULL)
	{
		printf("�ļ�ָ����Ч\n");
		return;
	}
	if (pArray == NULL)
	{
		printf("����ָ����Ч\n");
		return;
	}
	if (len <= 0)
	{
		printf("�ļ�����С�ڵ���0������\n");
		return;
	}

	char buf[1024] = { 0 };
	int index = 0;

	//whileѭ����֤��ȡ������Ч
	//fgets��ʾ���ļ��е�������д��buf��
	while (fgets(buf, 1024, file) != NULL)
	{
		//���㿪��ÿ���ַ����Ĵ�С
		int currentLen = strlen(buf) + 1;

		//���ַ������Ļ��з���Ϊ \0   �����Ϳ����Լ���������
		//strlen(buf) - 1 ��Ϊ�����±��ʾ����ÿ�����Ļ��з�
		buf[strlen(buf) - 1] = '\0';

		//���ٶѿռ�
		char * currentP = malloc(sizeof(char) * currentLen);

		//���ļ��ж�ȡ�����ݣ����뵽���ٵĿռ���
		strcpy(currentP, buf);

		//�����ٵ����� ���뵽����ά����������
		pArray[index++] = currentP;

		//���buf
		memset(buf, 0, 1024);
	}
}

//��ӡ����
void showFileData(char ** pArray, int len)
{
	int blanklines = 0;
	
	//ͳ�ƴ�ӡ�հ��� 
	for (int i = 0; i < len; i++)
	{
		if (pArray[i][0] == '\0')
			blanklines++;
	}
	printf("\n�հ�����%d��\n\n", blanklines);

	for (int i = 0; i < len; i++)
	{
		//����ӡ�ĵ��еĿո񲿷�  �������ж��ͷź�\n��ͬ  
		//��Ϊ�����ݶ�ȡ�����У��Ѿ�����ĩβ��\n������\0  �����ж��Ƿ��ǿ���
		//Ӧ�ú�\0ȥ�Ƚ�
		//����ָ�����һ����ά����
		if (pArray[i][0] == '\0')
			;
		else
			printf("%d�е�����Ϊ��%s\n", i + 1, pArray[i]);
	}
	
	printf("\n");
}

//ͨ����ַ�����ͷŶѿռ�
void freeSpace(char *** p, int len)
{
	//��������ָ�� ��������ָ��
	char ** q = *p;

	for (int i = 0; i < len;i++)
	{

		if (q[i] != NULL)
		{
			printf("%s���ͷ���\n", q[i]);
			free(q[i]);
			q[i] = NULL;
		}

	}

	//��Ӧmallocдfree�Ĵ���
	//��Ϊ q �Ѿ�ָ�� p ��ָ�Ķѿռ��ڴ棬���Կ���ֱ��free(q),���ͷ���pָ��Ķѿռ�
	free(q);
	q = NULL;
	p = NULL;
}

void test01()
{
	//���ļ�
	FILE * file = fopen("./test.txt", "r");
	if (file == NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}

	//��ȡ�ļ���Ч������
	int len = getFileLines(file);
	printf("�ļ�����Ч����Ϊ��%d\n", len);
	char ** pArray = malloc(sizeof(char *) * len);

	//���ļ��е����ݷ��뵽pArray��������
	readFileData(file, pArray, len);

	//��ӡ����
	showFileData(pArray, len);

	//�ͷŶ����ռ�
	freeSpace(&pArray, len);
	//pArray = NULL; //��ַfree�Ͳ�����������д

	//�ر��ļ�
	fclose(file);
	file = NULL;
}

int main()
{
	test01();
	system("pause");
	return  EXIT_SUCCESS;
}



