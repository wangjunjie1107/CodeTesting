#include<stdio.h>

//枚举、联合、结构体

typedef enum
{
	COUNT, POUNDS, PINTS
	
}unit_of_measure;

typedef union
{
	short count;
	float weight;
	float volume;
		
}quantity;

typedef struct
{
	const char * name;
	const char * country;
	quantity amount;
	unit_of_measure units;
	
}fruit_order;


void display(fruit_order order)
{
	printf("This order contains： ");
	
	if(order.units == PINTS)
	{
		printf("%2.2f pints of %s\n\n", order.amount.volume, order.name);
		
	}
	else if(order.units == POUNDS)
	{
		printf("%2.1f lbs of %s\n\n", order.amount.weight, order.name);
	} 
	else
	{
		printf("%i  %s\n\n", order.amount.count, order.name);
	} 
} 

int main()
{
	fruit_order apples = {"apples", "Englend", apples.amount.count = 144, COUNT};
	
	fruit_order strawberries = {"strawberries", "Spain", strawberries.amount.weight = 17.6, POUNDS};
	
	fruit_order oj = {"orange juice", "U.S.A", oj.amount.volume = 10.5, PINTS};
	
	display(apples);
	display(strawberries);
	display(oj);
	
	return 0;	
} 
