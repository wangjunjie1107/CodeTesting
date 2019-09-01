#include<stdio.h>
#define MAXN 9

int parvalue[MAXN] = {10000, 5000, 1000, 500, 200, 100, 50, 20, 10};
int num[MAXN] = { 0 };

int exchange(int n)  // n 为要找的零钱 
{
	int i,j;
	
	for(i = 0; i < MAXN; i++)//找到比n小的最大面值的钱 
	{
		if(n > parvalue[i])
			break;
	}
	
	while(n > 0 && i < MAXN)
	{
		if(n >= parvalue[i])
		{
			n-=parvalue[i];//先减去一个最大面值，剩下的是继续要找的零钱
			num[i]++; //记录找的相应的钱的数量 
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
	printf("请输入找零的金额：");
	scanf("%f", &m);//单位为元 
	
	exchange((int)100*m);//单位为分	
	
	printf("\n%.2f元零钱的组成：\n", m);
	for(i = 0; i < MAXN; i++)
	{
		if(num[i] > 0)
			printf("%6.2f: %d张\n", (float)parvalue[i] / 100.0, num[i]);
			
	}
	
	getchar();
	return 0; 

 } 
 

