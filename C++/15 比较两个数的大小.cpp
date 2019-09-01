#include<iostream>
using namespace std;
int main()
{
	double a,b,max;
	cout<<"请输入两个数，中间用空格隔开。"<<endl;; 
	cin>>a>>b;
	while(a)
	{
	max=a; 
	if(a<b)
	     max=b;
	cout<<"两数中较大的数为：";
    cout<<max<<endl;
    cout<<endl;
    cout<<"请输入两个数，中间用空格隔开。"<<endl;;
    cin>>a>>b;
	}return 0; 
}
