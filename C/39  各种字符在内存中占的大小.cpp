#include<stdio.h>

int main(void)
{
	printf("int %d bytes\n", sizeof(int));
	printf("short %d bytes\n", sizeof(short));
	printf("long int %d bytes\n", sizeof(long int));
	printf("long long %d bytes\n", sizeof(long long));
	printf("double %d bytes\n", sizeof(double));
	printf("float %d bytes\n", sizeof(float));
	printf("long double %d bytes\n", sizeof(long double));
	printf("char %d bytes\n", sizeof(char));
	 
	return 0;
}

