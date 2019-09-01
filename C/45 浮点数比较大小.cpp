#include<stdio.h>
#include<math.h>

int main()
{
	const double ANSWER = 3.1415926;
	double response;
	
	printf("What is the value of pi?\n");
	scanf("%lf", &response);
	while( fabs(response - ANSWER) > 0.0001)  //使用fabs可以方便的比较浮点数。 
	{
		printf("Try again!\n");
		scanf("%lf", &response);
	}
	printf("Close enough!\n");
	
	return 0;
 } 
