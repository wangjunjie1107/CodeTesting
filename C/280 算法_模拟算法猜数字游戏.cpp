#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int n, m, i = 0;
	
	srand((int)time(NULL)); //���������
	n = rand() % 100 + 1; //1 - 100
	
	do{
		printf("�����������֣�");
		scanf("%d",&m);
		
		i++; //��¼�µĴ��� 
		
		if(m > n)
		{
			printf("������������̫���ˣ�\n");
		}
		else if(m < n)
		{
			printf("������������̫С�ˣ�\n");
		}
	}while(m != n);
	
		printf("����ˣ�\n");
		printf("�ܹ�����%d�Ρ�\n", i);
		if(i <= 5)
		{
			printf("��̫�����ˣ���ô��Ͳ³����ˣ�"); 
		}
		else if(i > 5)
		{
			printf("����Ľ��������Ա����³�����"); 
		}
	 	
	 	getchar();
		return 0; 
}
