#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a[] = {56,55,34,233,4343,554,232,112,3243,544,233,44,33};
	
	int len = sizeof(a) / sizeof(a[0]);
	
	int * p = a;

	//ð��������Ҫ������ѭ����,ÿ���ҵ�������
	for(int i = 0; i < len - 1; i++)
	{
		for(int j = 0; j < len - i - 1; j++)
		{
			if(*(p + j) > *(p + j + 1))
			{
				int temp = *(p + j); 
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			} 
		}
		
	}
	
	for(int j = 0; j < len; j++)
	{
		printf("%d\n", a[j]);
	}

	printf("�ڶ������Ϊ��%d\n", a[len - 2]); 

	return 0;
	
} 
