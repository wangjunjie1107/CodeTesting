#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr1[100] = "Hello ";
	char arr2[50] = "world";
	char arr3[50] = "ABCDEFG";
	
	//字符串追加 
	strcat(arr1,"你好 ");
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	
	//字符串有限追加 
	//注意：有限追加会将\0追加,因此不用补\0 
	strncat(arr1, arr3, 3);
	printf("%s\n", arr1);
	return 0;
}
