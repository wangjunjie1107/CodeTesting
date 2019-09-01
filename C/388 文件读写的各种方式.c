#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 //���ַ���ʽ��д
void test01()
{
	FILE * f_write = fopen("./test1.txt", "w+");
	if (f_write == NULL)
	{
		return;
	}

	char buf[] = "hello world";
	for (int i = 0;i < strlen(buf);i++)
	{
		//���ַ�д
		fputc(buf[i], f_write);
	}
	fclose(f_write);


	//���ļ�
	FILE * f_read = fopen("./test1.txt", "r");
	if (f_read == NULL)
	{
		return;
	}
	
	char ch;
	//���ַ���
	while ((ch = fgetc(f_read)) != EOF)//End Of File
	{
		printf("%c", ch);
	}
	printf("\n");
	fclose(f_read);
}

//���ж�д�ļ�
void test02()
{
	//д�ļ�
	FILE * f_write = fopen("./test2.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	char * buf[] =
	{
		"������ɽ��\n",
		"�ƺ��뺣��\n",
		"����ǧ��Ŀ\n",
		"����һ��¥\n",
	};

	for (int i = 0;i < 4;i++)
	{
		//���ж�
		fputs(buf[i], f_write);
	}
	fclose(f_write);


	//���ļ�
	FILE * f_read = fopen("./test2.txt", "r");
	if (f_read == NULL)
	{
		return;
	}

	char ch[1024] = { 0 };

	while (!feof(f_read))//���δ���ļ��Ľ�β
	{
		//����д
		fgets(ch,1024,f_read);

		printf("%s", ch);
		memset(ch, 0, 1024);
	}
	fclose(f_read);

}

//���鷽ʽ��д�ļ�
struct Hero
{
	char name[64];
	int age;
};
void test03()
{
	//д�ļ�
	FILE * f_write = fopen("./test3.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	struct Hero heros[4] =
	{
		{ "��ɪ", 19 },
		{ "槼�", 20000 },
		{ "����", 23 },
		{ "�����", 1000 },
	};

	//���鷽ʽд���ļ�
	fwrite(&heros, sizeof(struct Hero), 4, f_write);
	
	//�ر��ļ�ָ��
	fclose(f_write);


	//���ļ�
	struct Hero temps[4];
	FILE * f_read = fopen("./test3.txt", "r");
	if (f_read == NULL)
	{
		return;
	}
	//���齫�ļ������ڴ�
	fread(&temps, sizeof(struct Hero), 4, f_read);

	//��ӡ����
	for (int i = 0;i < 4;i++)
	{
		printf("������%s, ���䣺%d\n", temps[i].name, temps[i].age);
	}
	fclose(f_read);
}

//��ʽ����д�ļ�
void test04()
{
	FILE * f_write = fopen("test4.txt", "w");
	if (f_write == NULL)
	{
		return;
	}
	//��ʽ��д�ļ�
	fprintf(f_write, "caeaa hello world %d %s", 1111,"faefafe");
	fclose(f_write);


	
	FILE * f_read = fopen("test4.txt", "r");

	if (f_read == NULL)
	{
		return;
	}
	char buf[1024] = { 0 };
	while (!feof(f_read))
	{
		//��ʽ�����ļ� �����ո��ֹͣ��������??
		fscanf(f_read, "%s", buf);
		printf("%s\n", buf);
	}
	fclose(f_read);
}

int main()
{
	test04();
	


	system("pause");
	return EXIT_SUCCESS;
}
