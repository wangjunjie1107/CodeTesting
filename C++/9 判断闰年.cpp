#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int n,y;
	cin>>n; 
	y=((n%4==0)&&((n%100)!=0))||(n%400==0);;
	cout<<y;
	return 0;
}
