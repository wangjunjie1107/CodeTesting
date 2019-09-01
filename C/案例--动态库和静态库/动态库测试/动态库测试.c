#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "mydll.h"

//#pragma comment(lib,"./mydll.lib")

int main() {

	printf("%d\n", myAdd(100, 50));

	system("pause");
	return EXIT_SUCCESS;
}