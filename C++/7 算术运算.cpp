#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"�����������������ÿո����"<<endl; 
	cin>>a>>b;
	cout<<"���������ĺ�Ϊ��  " ;
	c=a+b;
	cout<<c<<endl;
	cout<<"���������Ĳ�Ϊ��  " ;
	c=a-b;
	cout<<c<<endl; 
	cout<<"���������Ļ�Ϊ��  " ;
	c=a*b;
	cout<<c<<endl; 
	cout<<"������������Ϊ��  " ;
	c=a/b; 
	cout<<c<<endl;
	cout<<"a��b�η�Ϊ��      " ;
	c=pow(a,b); 
	cout<<c<<endl;
	cout<<"e��a�η�Ϊ��      " ;
	c=exp(a);
	cout<<c<<endl;
	cout<<"a�Ķ���Ϊ��       ";
	c=log(a) ;
	cout<<c<<endl;
	return 0;
}
