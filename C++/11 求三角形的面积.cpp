#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,A;
	cin>>a>>b>>c;
	s=(a+b+c)/2;                          //s表示周长的二分之一 
	A=sqrt(s*(s-a)*(s-b)*(s-c));  //海伦公式 
    cout<<A<<endl;
    return 0;
 } 
