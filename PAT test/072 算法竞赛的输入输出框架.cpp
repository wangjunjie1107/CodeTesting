#include<stdio.h>

int main()
{
	int x = 0;
	int max = 0;
	int min = 0;
	int sum = 0;
	int n = 0; 
	 
	//����һ������Ϊ���ֵ�ʱ�򣬼���ѭ�� 
	while(scanf("%d", &x) == 1) 
	{
		//�ܺ� 
		sum += x;
		
		if(x > max) max = x;	//���ֵ 
		
		if(x < min) min = x;	//��Сֵ 
		
		//���� 
		++n;	 
	}
	
	printf("%d %d %.3f\n", min, max, (double)(sum / n));
	
	return EXIT_SUCCESS;
} 
