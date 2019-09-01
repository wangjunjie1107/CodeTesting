#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<float.h>

//�ṹ�����
struct Person
{
	char *name;//����
	int age;
};

//�����ڴ沢��ֵ������һ���ṹ�����ָ��
struct Person ** allocateSpace()
{
	//�ṹ�����ָ��
	struct Person ** temp = malloc(sizeof(struct Person *) * 3);

	for (int i = 0; i < 3; i++)
	{
		//��ÿ��Person�����ڴ�
		temp[i] = malloc(sizeof(struct Person));

		//��ÿ��Person name�����ڴ�ռ�
		temp[i]->name = malloc(sizeof(char) * 64);

		//��name������ֵ
		sprintf(temp[i]->name, "wangjunjie_%d", i + 1);

		//�����丳ֵ
		temp[i]->age = i + 18;
	}

	return temp;
}

//��ӡ�ṹ���������Ϣ
void printPerson(struct Person ** pArray, int len)
{
	for (int  i = 0; i < len; i++)
	{
		printf("������%s ���䣺%d\n", pArray[i]->name, pArray[i]->age);
	}
}

//�ͷŶ�������
void freeSpace(struct Person ** pArray, int len)
{
	//�ж�
	while (pArray == NULL || len <= 0)
		return;

	for (int i = 0; i < len; i++)
	{
		//���ͷ�name���ڴ�ռ�
		free(pArray[i]->name);
		pArray[i]->name = NULL;

		//���ͷ�Person���ڴ�ռ�
		free(pArray[i]);
		pArray[i] = NULL;
	}

	//�ͷ���������
	free(pArray);
	pArray = NULL; //�þֲ�����ָ��ָ���
}

void test01()
{
	
	struct Person ** pArray = NULL;

	//�����ڴ沢��ֵ  ����һ������ָ��
	pArray = allocateSpace();

	//��ӡ�������Ϣ
	printPerson(pArray, 3);

	//�ͷŶ�������
	freeSpace(pArray, 3);
	pArray = NULL; //�ýṹ��ָ��ָ���  ֵ���� ���ܹ�ʹ�˴�ָ��ָ���
					//���Ҫ�ڱ�ĺ�����ʹ�˴�ָ��ָ��� Ҫ�õ�ַ����
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}


