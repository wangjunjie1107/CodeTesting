#include<stdio.h>

typedef union{  
 	short count; 
	float weight;
	float volume; 
}quantity;
				
typedef struct{
	const char *name;
	const char *country;
	quantity amount;
}fruit_order;


int main()
{
		
	quantity q;
	q.volume = 3.7;
	printf("volume = %f\n\n", q.volume); //����ʹ�������� 
	
	
	//������ͽṹ��һ��ʹ�� 
	fruit_order apples = {"apples", "Englend", apples.amount.weight = 4.2}; 
	
	
	printf("This order contains %.1f lbs of %s\n", apples.amount.weight, apples.name); 
	
	return 0; 
 } 
