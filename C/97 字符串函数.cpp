#include<stdio.h>
#include<string.h>

int main()
{
	char a[20] = "Wang";
	char b[20] = " junjie";
	char c[20];
	char D[20];
	
	int d = strlen(a);  //�ⶨ�ַ�������,�������ַ���������� \n 
	strcpy(c,a); //�ַ�������
	strcat(a,b) ; //�ַ�������
	
	printf("%d\n", d);
	printf("%s\n", c);
	printf("%s\n", a);
	
	gets(D);  //ͷ�ļ�Ϊstdio.h  ��Ϊ������ַ�������������� 
	puts(D);  //gets()���Խ����ַ����еĿո񣬶�scanf()���С� 
	
	return 0;
	
	
 } 
