#include<stdio.h>

int main()
{
	//�ַ����Ľ�����־�� \0  
	//�����ַ�����n��Ԫ�أ�ҪԤ��һ��λ�ø�\0
	//�����ո�ֹͣ
	//�ַ���ƴ��
	char ch1[]="hello";
	char ch2[]="world";
	char ch3[20];
	
	int i=0;
	int j=0;
	
	while(ch1[i]!='\0')
	{
		ch3[i]=ch1[i];
		i++;
	}
	 
	 	while(ch2[j]!='\0')
	{
		ch3[i+j]=ch2[j];
		j++;
	}
	
	ch3[i+j+1]='\0';
	 
	printf("%s", ch3);
}
