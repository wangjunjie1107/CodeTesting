#include<stdio.h>
#include<stdio.h>
#include<string.h>   //提供strlen函数的原型 
#define DENSITY 62.4  //人体密度 

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];
	
	printf("Hi! Whats your first name?\n");
	scanf("%s", name);  //没有前缀  因为数组名本身是一个地址 
	printf("Whats your weight in pounds?\n");
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to stores it.\n", size);
	
	return 0;
	
}
