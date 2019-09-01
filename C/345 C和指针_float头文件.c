#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

int main()
{
	printf("FLT_MAX = %f\n\n", FLT_MAX);
	printf("DBL_MAX = %f\n\n", DBL_MAX);
	printf("LDBL_MAX = %lf\n\n", LDBL_MAX);
	printf("FLT_MIN = %f\n\n", FLT_MIN);
	printf("DBL_MIN = %f\n\n", DBL_MIN);
	printf("LDBL_MIN = %f\n\n", LDBL_MIN);

	system("pause");
	return EXIT_SUCCESS;
}
