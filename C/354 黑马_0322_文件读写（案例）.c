#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

//���ַ���ʽ��д
void test01()
{
	//д�ļ�
	FILE * f_write = fopen("./test1.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	char buf[] = "wangjunjie";
	for (int i = 0; i < strlen(buf);i++)
	{
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
	while ((ch = fgetc(f_read)) != EOF)
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
		"wangjunjie\n",
		"lisijia\n",
		"hahaha\n",
		"gagaga\n",
	};

	for (int i = 0; i < 4;i++)
	{
		fputs(buf[i], f_write);
	}
	fclose(f_write);

	//���ļ�
	FILE * f_read = fopen("./test2.txt", "r");
	if (f_read == NULL)
	{
		return;	
	}
	while (!feof(f_read))
	{
			char temp[1024] = { 0 };
			fgets(temp, 1024, f_read);
			printf("%s", temp);
	}
	fclose(f_read);
	
}

//������ļ�
struct Hero
{
	char name[64]; //����
	int age;  //����
};
void test03()
{
	//д�ļ�
	FILE * f_write = fopen("./test3.txt", "wb");
	if (f_write == NULL)
	{
		return;
	}

	struct Hero heros[4] =
	{
		{ "��ɪ", 19 },
		{ "槼�", 20 },
		{ "����", 23 },
		{ "�����", 1000 },
	};
	

	for (int i = 0; i < 4;i++)
	{
		fwrite(&heros[i], sizeof(struct Hero), 1, f_write);
	}
	fclose(f_write);

	//���ļ�
	struct Hero temps[4];
	FILE * f_read = fopen("./test3.txt", "rb");
	if (f_read == NULL)
	{
		return;
	}

	//ȫ������
	fread(&temps, sizeof(struct Hero), 4, f_read);

	//��ӡ
	for (int i = 0; i < 4;i++)
	{
		printf("������ %s ���䣺 %d\n", temps[i].name, temps[i].age);
	}
	fclose(f_read);

}

//��ʽ���ļ�
void test04()
{
	//д�ļ�
	FILE * f_write = fopen("test4.txt", "w");
	if (f_write == NULL)
	{
		return;
	}
	//��ʽ��д���ļ�
	fprintf(f_write, "hello world %s %d", "abc",123);

	fclose(f_write);

	//���ļ�
	FILE * f_read = fopen("test4.txt", "r");

	if (f_read == NULL)
	{
		return;
	}
	char buf[1024] = { 0 };
	while (!feof(f_read))
	{
		//��ʽ�������ļ�
		fscanf(f_read, "%s", buf);
		printf("%s\n", buf);
	}
	fclose(f_read);
}

//�ƶ��ļ����
void test05()
{
	//���ļ�
	FILE * f_write = fopen("./test5.txt", "w");
	if (f_write == NULL)
	{
		return;
	}

	struct Hero heros[4] =
	{
		{ "��ɪ", 19 },
		{ "槼�", 20 },
		{ "����", 23 },
		{ "�����", 1000 },
	};
	for (int i = 0; i < 4; i++)
	{
		//��������ļ�
		//����1 д�����ݵĵ�ַ������2  ���С  ����3  �����  ����4  �ļ�ָ��
		fwrite(&heros[i], sizeof(struct Hero), 1, f_write);
	}
	//�ر��ļ�
	fclose(f_write);

	//���ļ�
	FILE * f_read = fopen("./test5.txt", "rb");

	if (f_read == NULL)
	{
		//printf("�ļ���ʧ��!\n");
		perror("�ļ���ʧ��"); // errno �� ȫ�ֱ���
		return;
	}

	struct Hero temp;
	//�ƶ��ļ����
	//fseek(f_read, sizeof(struct Hero)*2, SEEK_SET);//��ͷ��ǰ��
	fseek(f_read, -(long)sizeof(struct Hero) * 2, SEEK_END); //�Ӻ���ǰ������
	fseek(f_read, sizeof(struct Hero) * 1, SEEK_CUR); //�ӵ�ǰλ��ƫ�� 

	//rewind(f_read); //���ļ��������

	fread(&temp, sizeof(struct Hero), 1, f_read);

	printf("������%s ����:%d\n", temp.name, temp.age);

	fclose(f_read);
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	//test06();



	system("pause");
	return EXIT_SUCCESS;
}
