#include<stdio.h>
#include<stdlib.h>

int main()
{
	int oldprice;
	int price = 0;
	int i = 0; 
	
	printf("������������Ʒ����ʵ�۸�: ");
	scanf("%d", &oldprice);
	system("cls");
	
	printf("�������Բµļ۸�\n");
	while(oldprice != price)
	{
		i++;
		printf("�����ߣ�");
		scanf("%d", &price);
		
		printf("�����ˣ�"); 
		if(price>oldprice)
		{
			printf("����\n");
		}
		else if(price<oldprice)
		{
			printf("����\n"); 
		}	
		else
		{
			printf("��ϲ������ˣ�\n");
			printf("��һ������%d��", i);
		}
	}
	
	getchar();
	return 0; 
 } 
