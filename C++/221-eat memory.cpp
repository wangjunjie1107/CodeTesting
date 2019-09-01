#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void)
{
	double * p = NULL;
	
	while(1)
	{
		p = new double[100000000];
		cout<<"eat memory"<<endl;
		
		if(p == NULL)
		{
			exit(1);
		}
	} 
 } 
