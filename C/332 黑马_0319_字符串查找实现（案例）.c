#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h>  //offsetof����  ����ƫ����
#include<stdlib.h>
#include<math.h>
#include<time.h> //��������� srand

int MyFindStr(char * source, char * aim)
{
	int count = 1;

	//����Դ�ַ���
	while (*source != '\0')
	{
		if (*source != *aim)
		{
			source++;
			count++;
			
			//��������ѭ�� 
			continue; 
		}
	
		//�Ż�����
		//int n = memcmp(p, q, 10);
	
		//�����ȣ�������Ŀ���Ӵ��Ƚ�
		char * tempsource = source;
		char * tempaim = aim;
		
		while(*tempsource == *tempaim) 
		{
			*tempsource++;
			*tempaim++;
			
			if (*tempaim == '\0')
			{
				return count;
			}
			continue;
		}
		
		//�������Ӵ��Ƚϵ�ʱ�򣬱Ƚ�ʧ������£���Դָ������ƶ� 
		source++;
		count++;
	
	}
	return -1;
}
void test()
{


	char *p = "rjengoiae3o25wangjunjiefafionawfo893829";  //Դ�ַ��� 
	char *q = "wangjunjie";  //�Ӵ� 
	
	//�������� 
	int n = MyFindStr(p, q);
	

	//�����ʾ 
	if (n != -1)
	{
		printf("�ҵ����Ӵ��� ��ʼλ��Ϊ��%d\n", n);
	}
	else
		printf("δ�ҵ����Ӵ�!\n");
}

int main()
{
	test();

	system("pause");
	return  EXIT_SUCCESS;
}

