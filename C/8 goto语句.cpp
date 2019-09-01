#include<stdio.h>


int main()
{
	int i=0;
	int j=0;
	for(i=0 ; i<10 ; i++)
	{
		if(i==5)
		{
			goto FLAG;
		}
		printf("%d\n",i); 
	}
	
	for( ; j<10 ; j++)
	{
	 FLAG:
		printf("%d\n", j);
	}
	return 0;
}
