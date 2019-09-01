#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{  
	   for(j=1;j<=i;j++)
	   {  
	      cout<<j<<"*"<<i<<"="<<(j*i)<<"\t";  //输出按列对齐 
	   }
	   cout<<endl;
	} 
	return 0;
}
