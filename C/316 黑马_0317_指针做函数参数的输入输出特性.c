#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//��������  �������������ڴ棬�������������ڴ�
void input(char * p)
{
	strcpy(p, "wangjunjie");
}

//������� �������������ڴ棬��������ʹ��
void output(char ** q, int * len)
{
	char * a = (char *)malloc(100);
	if(a == NULL)
		return;
		
	strcpy(a, "wangjunjie");
	
	//��Ӹ�ֵ 
	*len = strlen(a);
	*q = a;
}

int main()

{
	char p[64];//ջ�������ڴ�
	input(p);//��������  �������������ڴ棬�������������ڴ�
	printf("%s\n", p);

	
	//�������
	char *str = NULL;
	int  len = 0;
	
	output(&str, &len);
	
	printf("%s\n", str);
	printf("%d\n", len);
	
	system("pause");
	return EXIT_SUCCESS;
}
