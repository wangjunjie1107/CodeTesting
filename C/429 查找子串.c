#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//����1  ԭ�ַ���  ����2  �Ӵ�
void  myStrstr(char * str, char * subStr)
{
	if (str == NULL && subStr == NULL)
	{
		printf("Ҫ���ҵ��ַ��� �� �Ӵ� ��Ϊ�գ��޷�����!\n");
		return ;
	}
	else if (str == NULL)
	{
		printf("Ҫ���ҵ��ַ���Ϊ�գ��޷�����!\n");
		return ;
	}
	else if(subStr == NULL)
	{
		printf("�Ӵ�Ϊ�գ��޷�����!\n");
		return ;
	}
	
	int num = 1; //��ƥ��ɹ� �򷵻��Ӵ�����λ�� ��ʼλ��Ϊ1
	int count = 0; //�ҵ��Ӵ��ĸ���

	//�洢 �Ӵ���λ��  �� �ҵ��Ӵ��ĸ���
	int result[1024] = { 0 };


	char * temStr = NULL;
	char * temSubStr = NULL;
	
	int location = 1;
	
	while (*str != '\0')
	{
		if (*str != *subStr)
		{
			str++;
			num++;
			continue;
		}

		//������ʱָ��
		temStr = str;
		temSubStr = subStr;

		while (*temSubStr != '\0')
		{
			if (*temStr != *temSubStr)
			{
				//ƥ��ʧ�����
				str++;
				num++;
				break;
			}

			//��ʱָ��ƥ����ͬ���  ����ƥ����һ����ĸ
			temStr++;
			temSubStr++;
		}

		
		if (*temSubStr == '\0')
		{
			//ƥ��ɹ�
			count++; //�ҵ����Ӵ����� +1
			result[0] = count;   // �����һ��Ԫ��Ϊ�Ӵ��ĸ���
			
			
			result[location] = num; //����ӵڶ���Ԫ�ؿ�ʼ Ϊ�Ӵ���λ��	
			location++; // ׼����¼��һ��Ԫ�� 
		}
		
		
		//����ƥ�� ֱ��  *str == '\0'
		num = num + (temStr - str); 
		str = temStr;
		temSubStr = NULL;
	
	}



	if (count != 0)
	{
		//�Ӵ�����
		printf("�ҵ��� %d ���Ӵ�\n", result[0]);
		
		//ÿ���Ӵ���λ��
		int i; 
		for (i = 1; i <= count; i++)
		{
			printf("�� %d ���Ӵ���λ��Ϊ�� %d\n", i, result[i]);
		}
		
		return;
	}
	else
	{
		printf("δ�ҵ��Ӵ�\n");
		return; 
	}

	
}


void test()
{
	char * str = "wangliwanglijunjiewangjunjiewangjunjiejunjiejunjiejunjie";

	myStrstr(str, "junjie");	
}

int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

