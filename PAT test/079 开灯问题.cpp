#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int maxn = 1005;
 
int main()
{
	int n;
	int k;
	int first = 1;
	
	int array[maxn] = { 0 };
	
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= k; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			//����Ǳ����Ļ����ͽ�ֵ��һ���෴��� 
			if(j % i == 0)
			{
				array[j] = !array[j];
			}
		}
	}
	
	for(int i = 1; i <= n; ++i)
	{
		if(array[i])
		{
			//�����־λ����һ����֮ǰ������ո�֮������
			//���һ����֮��ֱ�Ӹ����� 
			if(first) 
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			
			printf("%d", i);
		}
	}
	printf("\n");
	 
	return 0;
} 
