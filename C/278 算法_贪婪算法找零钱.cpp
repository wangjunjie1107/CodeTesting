#include<stdio.h>
#define MAXN 9

int parvalue[MAXN] = {10000, 5000, 1000, 500, 200, 100, 50, 20, 10};
int num[MAXN] = { 0 };

int exchange(int n)  // n ΪҪ�ҵ���Ǯ 
{
	int i,j;
	
	for(i = 0; i < MAXN; i++)//�ҵ���nС�������ֵ��Ǯ 
	{
		if(n > parvalue[i])
			break;
	}
	
	while(n > 0 && i < MAXN)
	{
		if(n >= parvalue[i])
		{
			n-=parvalue[i];//�ȼ�ȥһ�������ֵ��ʣ�µ��Ǽ���Ҫ�ҵ���Ǯ
			num[i]++; //��¼�ҵ���Ӧ��Ǯ������ 
		}
		else if(n < 10 && n >= 5)
		{
			num[MAXN - 1]++;
			break; 
		}
		else i++;
	 } 
}

int main()
{
	int i;
	float m;
	printf("����������Ľ�");
	scanf("%f", &m);//��λΪԪ 
	
	exchange((int)100*m);//��λΪ��	
	
	printf("\n%.2fԪ��Ǯ����ɣ�\n", m);
	for(i = 0; i < MAXN; i++)
	{
		if(num[i] > 0)
			printf("%6.2f: %d��\n", (float)parvalue[i] / 100.0, num[i]);
			
	}
	
	getchar();
	return 0; 

 } 
 

