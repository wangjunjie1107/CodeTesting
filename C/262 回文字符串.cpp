#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	//�����ַ����� 
	char arr[110];
	
	//�����ַ��� 
	printf("������һ���ַ������ַ�������С��100����\n");
	scanf("%s", arr);
	
	//��������ָ�룬ָ���ַ����ײ���β�� 
	char * p;
	char * q;
	
	p = arr; //�� p ָ���ַ���ͷ��
	
	int j = 0; //�ж��ַ�����ĳ��� 
	for(int i = 0; i < 110; i++)
	{
		if(arr[i] != '\0')
		{
			j++;//�ж��ַ�����ĳ��� 
		}
		else
		{
			break; //����ѭ�� 
		}
	} 
	
	q = (arr + j - 1); //�� q ָ���ַ������β��
	
	
	//�ж��Ƿ�Ϊ�����ַ���  ע��Ƚϴ��� 
	int m = 1;
	for(int k = 0; k <= (j / 2); k++)
	{
		if(*(p + k) == *(q - k))
		{
			continue;
		}
		else
		{
			m = 0;
			printf("����ַ������ǻ����ַ�����");
			break;
		}
	}
	
	while(m)
	{
		printf("����ַ�����һ�������ַ�����"); 
		break;
	}
	
	return 0;
 } 
