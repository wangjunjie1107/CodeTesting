#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

//feof���ڰ��ַ���ȡ������ʹ��
void test01()
{
	//�����ַ���test�ļ�
	FILE * file = fopen("./test.txt", "r");
	if (file == NULL)
	{
		return;
	}

#if 0
	char ch;
	while (!feof(file))
	{
		ch = fgetc(file);

		//��������ö�ȡ��EOF���˳���
		//����ӡ��EOF �����ո�
		if (feof(file))
		{
			break;
		}

		printf("%c", ch);
	}
	fclose(file);
#endif

	//�ڶ��ַ�ʽ���ַ���ȡ
	//whlie �жϲ���feof����
	char ch;
	while ((ch = fgetc(file)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(file);
}

//ע������2
struct Person
{
	char * name; //����ṹ�������� �����ڶ�����
				//�������ݵ��ļ���ʱ�򣬲�Ҫ��ָ����뵽�ļ���
	int age;
}; 

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
