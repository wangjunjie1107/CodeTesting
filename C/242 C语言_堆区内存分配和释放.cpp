#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int count;
	int * array;
	int n;
	
	printf("������Ҫ��������ĸ�����");
	scanf("%d", &n);
	
	array = (int *)malloc(n * sizeof(int));
	
	if(array == NULL)
	{
		printf("����ռ�ʧ��\n");
		return -1;
	}
	
	//�����뵽�Ŀռ�����
	memset(array, 0, sizeof(int) * n);
	
	for(count = 0; count < n; count++)
	{
		array[count] = count;  //��ֵ 
		printf("%2d\n", array[count]);  //��ӡ 
	}
	
	//�ͷ� array ��ָ���һ���ڴ�ռ�
	//array ��һ���������͵�ָ�����
	//ָ���ͷ�������׵�ַ
	//��ͬһ�ڴ�ռ����ͷŻ����
	
	free(array);
	
	return 0; 
	
	 
 } 
