#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	char str[10];
	int i=0;
	cin>>str;
	while(str[i]!='\0')   //'\'表示转义字符，一般在字符串结尾作为字符串结束的标志。
	{
		str[i]=str[i]-32;
		i=i+1;
	}
	cout<<str<<endl;
	return 0;
}

 
