#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"输入两个整数，并用空格隔开"<<endl; 
	cin>>a>>b;
	cout<<"这两个数的和为：  " ;
	c=a+b;
	cout<<c<<endl;
	cout<<"这两个数的差为：  " ;
	c=a-b;
	cout<<c<<endl; 
	cout<<"这两个数的积为：  " ;
	c=a*b;
	cout<<c<<endl; 
	cout<<"这两个数的商为：  " ;
	c=a/b; 
	cout<<c<<endl;
	cout<<"a的b次方为：      " ;
	c=pow(a,b); 
	cout<<c<<endl;
	cout<<"e的a次方为：      " ;
	c=exp(a);
	cout<<c<<endl;
	cout<<"a的对数为：       ";
	c=log(a) ;
	cout<<c<<endl;
	return 0;
}
