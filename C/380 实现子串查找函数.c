#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int myStrstr(char * source, char * dest)
{
	if (source == NULL)
	{
		return -1;
	}
	if (dest == NULL)
	{
		return -1;
	}

	int num = 0;
	while (*source != '\0') //ԭ�ַ�����Ϊ0
	{
		if (*source != *dest)//���ַ���ƥ��
		{
			source++;
			num++;
			continue;//��������ѭ��
		}

		//������ʱָ��
		char * tmpStr = source;
		char * tmpDest = dest;

		while (*tmpDest != '\0')
		{
			//��Ŀ���ַ������ֲ�ƥ������
			if (*tmpStr != *tmpDest)
			{
				source++;
				num++;
				break;
			}

			//ƥ��  ��������ƥ�� ֱ��ƥ�䵽Ŀ���ַ�����ĩβ
			tmpStr++;
			tmpDest++;
		}

		if (*tmpDest == '\0')
		{
			return num;
		}
	}

	return -1;
}



void test01()
{
	char * str = "airghdnfdnfdnf";

	int ret = myStrstr(str, "dnf");

	if (ret != -1)
	{
		printf("�ҵ����Ӵ� ��λ�ã� %d\n", ret+1);
	}
	else
	{
		printf("δ�ҵ��Ӵ�\n");
	}

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
