#include<stdio.h>

int main()
{
	int i = 1900; //���� 
	int j, k, p;  //���� 
	
	while(i < 2001)
	{
		//�ж������Ƿ��ܱ����� 
		j = i % 4;
		k = i % 100;
		p = i % 400;
	
		if(j == 0 && k != 0)  //�ܱ�4���������ܱ�100����
			printf("   %d\n", i);
		else if(k == 0 && p == 0) //�ܱ�100�������ܱ�400����
			printf("   %d\n", i);
			
		i++;
	}
	
	return 0;
	 
 } 
