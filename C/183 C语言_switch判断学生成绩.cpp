#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	
	while(1)
	{
		

	printf("������ѧ���ɼ��� ");
	scanf("%d", &a); 
	
	switch(a/10)
	{
		case 10 :printf("����");break; 
		case 9 :printf("����");break;
		
		case 8 :printf("����");break;
		case 7 :printf("����");break;
		
		case 6 :printf("����");break;
		
		default:printf("��������������");break; 
	}
	
		//�Ƿ�������� 
		char c;
		printf("\n������ɣ����ظ�Y/y�˳�������������������");
		scanf("%s", &c);
	
		if(c == 'y'|| c == 'Y')
		{
			break;
		}
		else
		{
			continue;
		} 
	
	}
	
	printf("������ɡ�\n");
	
	return 0;
 } 
