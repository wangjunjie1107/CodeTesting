#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define maxn 105
int array[maxn] = { 0 }; 
int main()
{
	int x;
	int n = 0;
	
	//����scanf�ķ���ֵ���ж������Ƿ���ֹ����Ч 
	while(scanf("%d", &x) == 1)
	{
		array[n++] = x;
	} 
	
	//�������
	for(int i = n - 1; i > 0; --i)
	{
		printf("%d ", array[i]);
	}
	
	//��֤���׺���β���޿ո�����array[0]������� 
	printf("%d\n", array[0]);
	
	return 0;
} 
