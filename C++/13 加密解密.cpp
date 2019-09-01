#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char c;
	char ec;
	int k;
	cout<<"please input a lower character and k"<<endl;
	cin>>c>>k;
	  //不能cout后面直接加一串式子 ，要么就加一个括号。 
	cout<<(ec=((c-'a')+k)%26+'a'); 
	return 0;
	
}
