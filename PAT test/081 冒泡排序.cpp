#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 
int main()
{
	int a[11] = {84, 119, -2, 12, 34, -7, 39, 81, 668, 502, 170};
	
	//��Ҫ���� n - 1 ������ 
	for(int i = 1; i < 11 - 1; ++i)
	{
		//ÿ��������Ҫ�Ƚ� 11 - i �� 
		for(int j = 0; j < 11 - i; ++j)
		{
			if(a[j] > a[j + 1])
			{
				//���� 
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp; 
			}
		}
	} 
	
	for(int i = 0; i < 11; ++i)
	{
		if(i != 0)
		{	
			//��������ĵ�һλ��������֮���һ���ո����һ�������� 
			printf(" ");
		} 
		printf("%d", a[i]);
	} 
	printf("\n");	//���һ����֮��ֱ�ӻ���
	
	 
	return 0;
} 
