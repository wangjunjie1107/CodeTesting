#include<stdio.h>

int main()
{
	char c;
	c = getchar();
	
	switch(c)  //����ֻ�������ͱ���
	{
		case '1':printf("OK\n"); break; //switch����break���ж���
	
		case '2':printf("not OK\n");break;
		//�������������������㣬��ôִ��default	
		default:printf("are u ok?\n");  
	} 

	return 0;
} 
