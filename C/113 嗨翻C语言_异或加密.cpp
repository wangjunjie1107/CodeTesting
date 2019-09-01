#include<stdio.h>
#include<string.h>
#include "encrypt.h" 


int main()
{
	char arr[10] = "123456789";
	char * message = arr;
	encrypt(message);
	
	puts(arr);
	return 0;
	
	
}
