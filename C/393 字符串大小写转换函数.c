#include<stdio.h>
#include<string.h>

int main()
{
	char text[20],change[20];  //�洢�û������� �� ת������ַ��� 
	
	int num; //��¼�û���ѡ�� 
	
	while(1)
	{
		printf("�����Сдת����ʽ��1 ��ʾ��д��2 ��ʾСд��������ʾ�˳�): \n");
		
		scanf("%d",&num);
		
		if(num == 1)
		{
			printf("������һ���ַ���\n");
			scanf("%s",text); 
			strcpy(change,text);
			strupr(change);
			printf("ת���ɴ�д�ַ���Ϊ��%s \n",change);
		} 
		else if(num == 2)
		{
			printf("������һ���ַ���\n");
			scanf("%s",text);
			strcpy(text,change);
			strlwr(change);
			printf("ת����Сд�ַ���Ϊ��%s \n",change);
		}
		else
		{
			printf("�����˳�\n"); 
			break;	
		} 
	} 
	
	return 0; 
 } 
