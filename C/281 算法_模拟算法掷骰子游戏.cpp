#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//�����ӵĺ��� 
void play(int n)
{
	int i;
	int m = 0;//�ܵ���
	int t = 0;
	
	for(i = 0; i < n; i++)
	{
		t = rand()%6 + 1;//���ӵ��������� 
		m+=t;
		printf("\t��%d����%d;\n", i+1, t); 
	} 
	printf("\t�ܵ���Ϊ��%d\n",m);
}

int main()
{
	int c;//��������
	int n;//��������
	int i,m;
	
	do{
		srand((int)time(NULL));
		
		printf("������������(����0�˳�)��");
		scanf("%d", &n);
		if(n == 0) break;//����һ������
		
		printf("\n���뱾�ֲ�������������0�˳�����");
		scanf("%d", &c);
		if(c == 0) break;
		
		for(i = 0; i < c; i++)
		{
			printf("\n��%dλѡ������������Ϊ��\n", i+1);
			play(n);
		 } 
	}while(1);
	
	return 0; 
 } 
