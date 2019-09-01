#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,sum;
	cout<<"本算法是计算1到n的累加和，请输入整数n:";
	cin>>a;
	sum=0;
	for(;a>0;a--)
	 {
	 	sum=a+sum; 
	 }
	 cout<<"累加和为："; 
	 cout<<sum<<endl;
	 return 0;
}
