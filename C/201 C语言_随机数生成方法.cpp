#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/*
1�����ͷ�ļ� time.h  stdlib.h
2�������������� srand((unsigend int )time(NULL));
3����������� rand()  %  
*/

int main()
{
	//������������
	srand((unsigned int)time(NULL));
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", rand() % 11 + 50);//50-60
	}
	
	return 0; 
 } 
