#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int arr[3][3];
	
	printf("��ά���鳤�ȣ�%d\n", sizeof(arr));
	printf("��ά������һ�г��ȣ�%d\n",sizeof(arr[0]));
	printf("������%d\n",sizeof(arr) / sizeof(arr[0]));
	printf("������%d\n",sizeof(arr[0]) / sizeof(arr[0][0]));
	
	//��λ���鸳ֵ
	printf("��Ϊ���鸳ֵ��");
	 
	for(int i  = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for(int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	//��ӡ����
	for(int i  = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for(int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("��%d�е�%d�У�%d\t", i, j, arr[i][j]);
		}
		printf("\n");
	}
	
	//��ά������ڴ�ģ��
	printf("��ά������ڴ��׵�ַ��%p\n",  &arr);
	printf("��ά������ڴ����е�ַ��%p\n", &arr[0]);
	printf("��ά������ڴ�ڶ������е�ַ��%p\n", &arr[1]); 
	
	printf("��ά������ڴ��׸�Ԫ�ص�ַ��%p\n",  &arr[0][0]);
	printf("��ά������ڴ����еڶ���Ԫ�ص�ַ��%p\n", &arr[0][1]);
	printf("��ά������ڴ����е�����Ԫ�ص�ַ��%p\n", &arr[0][2]);
	
	printf("��ά������ڴ�ڶ��е�һ��Ԫ�ص�ַ��%p\n", &arr[1][0]);
	printf("��ά������ڴ�ڶ��еڶ���Ԫ�ص�ַ��%p\n", &arr[1][1]);
	
	printf("��ά������ڴ�����еڶ���Ԫ�ص�ַ��%p\n", &arr[2][1]); 
	
	return 0;
 } 
