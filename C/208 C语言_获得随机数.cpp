#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main()
{

	srand((int)time(NULL)); //������������� 
	
	int c = rand();//�õ���������� 
	
	printf("%d", c);
	
	return 0;
 } 
