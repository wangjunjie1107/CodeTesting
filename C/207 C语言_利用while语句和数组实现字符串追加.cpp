#include<stdio.h>

int main()
{
	//������ʼ�����飬׷�ӵ������������� 
	char a[] = "abcdefg";
	char b[] = "higklmn";
	char c[100];
	
	int i = 0; //���� 
	
	while(a[i] != '\0')
	{
		c[i] = a[i];
		i++;
	}
	
	int j = 0;
	
	while(b[j] != '\0')
	{
		c[i + j] = b[j];
		j++;
	}
	
	c[i + j] = 0;//�ַ���������
	 
	for(int k = 0; k <= i + j; k++)
	{
		printf("%c", c[k]);
		
	}
	
	return 0; 
 } 
