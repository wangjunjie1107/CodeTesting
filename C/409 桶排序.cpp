#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void test01()
{
	int book[1001], i, j, t, n;
	
	//�ÿ�
	for ( i = 0; i < 1001; i++)
	{
		book[i] = 0;
	}

	//��Ҫ����n����
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		//�����������¼����Ӧ���±���
		//��Ӧ�������±��1
		scanf("%d", &t);
		book[t]++;
	}

	//����ɨ�� �ȴ�ӡ������� ��1000��ʼ
	for (i = 1000; i >= 0; i--)
	{
		for (j = 1; j <= book[i]; j++)
		{
			printf("%d  ", i);//�±��е�ֵΪ����˵��Ҫ��ӡ����
		}
	}


	
}




void test02()
{
	
}


int main()
{
	test01();	
	//test02();

	system("pause");
	return EXIT_SUCCESS;
}
