#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//掷骰子的函数 
void play(int n)
{
	int i;
	int m = 0;//总点数
	int t = 0;
	
	for(i = 0; i < n; i++)
	{
		t = rand()%6 + 1;//骰子的六个点数 
		m+=t;
		printf("\t第%d粒：%d;\n", i+1, t); 
	} 
	printf("\t总点数为：%d\n",m);
}

int main()
{
	int c;//参赛人数
	int n;//骰子数量
	int i,m;
	
	do{
		srand((int)time(NULL));
		
		printf("设置骰子数量(输入0退出)：");
		scanf("%d", &n);
		if(n == 0) break;//至少一个骰子
		
		printf("\n输入本轮参赛人数（输入0退出）：");
		scanf("%d", &c);
		if(c == 0) break;
		
		for(i = 0; i < c; i++)
		{
			printf("\n第%d位选手掷出的骰子为：\n", i+1);
			play(n);
		 } 
	}while(1);
	
	return 0; 
 } 
