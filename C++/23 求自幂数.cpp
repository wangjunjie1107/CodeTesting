#include<iostream>   //��������   
#include<cmath>
using namespace std;
int main()
{
	int n;
	int start,end;
	int m;
	int digit;
	int sum;
	int i;
	cout<<"��nλ��������������λ��n:";
	cin>>n;
	while(n>0)
	{
	   start=pow(10,n-1);
	   end=pow(10,n)-1;
	   cout<<n<<"λ������";
	   for(i=start;i<=end;i++)
	   {
	   	m=i;
	   	sum=0;
	   	while(m=0)
		   {
	   		digit=m%10;
	   		sum=sum+pow(digit,n);
	   		m=m/10;
		   }
		if(sum==i)
		     cout<<i<<" ";
		cout<<endl;
		cout<<"��nλ��������������λ��";
		cin>>n; 
	   } 
	   cout<<endl;
	   return 0;
	} 
} 
