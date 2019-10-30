#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	double sum = 0;
	
	for(int i = 0 ; ; ++i) 
	{
		double temp = 1.0 / (2 * i + 1.0);
		
		if(i % 2 == 0) sum += temp;
		else sum -= temp;
		
		if(temp < 0.000001) break;
	}
	
	cout << "Time used = " << (double)clock() / CLOCKS_PER_SEC << "s!"<< endl;
	
	printf("%.6f\n", sum);
	
	return EXIT_SUCCESS;
} 
