#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	
	//���������ַ��� 
	printf("��˵�������ַ����ĳ��ȣ�");
	int len1;
	int len2;
	scanf("%d", &len1);
	scanf("%d", &len2);
	
	printf("�������һ���ַ�����"); 
	for(int i = 0; i < len1 ; i++)
	{
		scanf("%c", &str1[i]);
	}
	printf("������ڶ����ַ�����"); 
	for(int i = 0; i < len2 ; i++)
	{
		scanf("%c", &str2[i]);
	}
	
	//�Ƚ������ַ���
	if(len1 != len2)  //�Ƚϳ��� 
	{
		printf("�����ַ�������ͬ"); 
	}
	
	int j;
	
	for(j = 0; j < len1; j++)
	{
		if(str1[j] == str2[j])
			continue;
		else
		{
			printf("�����ַ�������ͬ"); 
			break;
		}
			
	}
	
	while(j == len1)
	{
		printf("�����ַ�����ͬ");
		break; 
	}
		
	return 0; 
} 
