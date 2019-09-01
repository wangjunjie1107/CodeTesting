#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", 2[arr]); //相当于 *(2 + (arr))  也就是 *（arr + 2)
	system("pause");
	return EXIT_SUCCESS;
}
