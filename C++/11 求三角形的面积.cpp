#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,A;
	cin>>a>>b>>c;
	s=(a+b+c)/2;                          //s��ʾ�ܳ��Ķ���֮һ 
	A=sqrt(s*(s-a)*(s-b)*(s-c));  //���׹�ʽ 
    cout<<A<<endl;
    return 0;
 } 
