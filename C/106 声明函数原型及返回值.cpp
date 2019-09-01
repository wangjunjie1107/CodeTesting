#include<stdio.h>
#include<stdlib.h>

float divideIt(float numFromMain); //Prototype

int main()
{
	float myNum, half;
	printf("Please type a number: ");
	scanf(" %f", &myNum);
	half = divideIt(myNum);
	printf("Your number divided by two is %.1f.\n", half);
	return 0;
}
//******************************
float divideIt(float numFromMain)
{
	float halfNum;
	halfNum = numFromMain / 2.0; //Divides main()'s number
	return(halfNum); //Sends the halved value back	
}
