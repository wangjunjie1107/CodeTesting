#include<stdio.h>
#define SLEN 40
#define LIM 5

int main()
{
	//指针数组 
	const char *mytalents[LIM] = {
		"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"Understanding the C language"
	};
	//字符串数组
 	char yourtalents[LIM][SLEN] = {
	 	"Walking in a straight line",
	 	"Sleeping",
	 	"Watching television",
	 	"Mailing letters",
	 	"Reading email"
	}; 
	
	int i;
	puts("Let's compare talents:");
	printf("%-36s  %-25s\n", "My Talents","Your Talents");
	for(i = 0; i < LIM; i++)
		printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
	printf("\nsizeof mytalents: %d, sizeof yourtalents: %d\n",
				sizeof mytalents, sizeof yourtalents);
	
	return 0;
 } 
