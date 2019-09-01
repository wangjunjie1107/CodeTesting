#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,a,b,c,d,e;
	cout<<"please input a five-digit number:"<<endl;
	cin>>n;
	e=n/10000;
	d=n/1000-e*10;
	c=n/100-e*100-d*10;
	b=n/10-e*1000-d*100-c*10;
	a=n-e*10000-d*1000-c*100-b*10;
	m=a*10000+b*1000+c*100+d*10+e;
    cout<<"你所输入的数的反序数为" ; 
	cout<<m<<endl;
	while(m/n==1)
	  {
		    cout<<"你所输入的数是一个回文数"; 
	     	break;
	  }  
    
	  return 0;
    
}
