#include<iostream>   //程序不完善   
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	char op;
	cout<<"请输入要计算的式子：";
	cin>>a>>op>>b;
	while(1)
	{ 
	switch(op)
	{
		case'+':c=a+b;
		cout<<"结果是：" <<c<<endl;
		break; 
		
		case'-':c=a-b;
		cout<<"结果是：" <<c<<endl;
		break; 
		
		case'*':c=a*b;
		cout<<"结果是：" <<c<<endl;
		break; 
		
		case'/':
		if(b==0)
		  {
			cout<<"输入错误"<<endl; 
			break;
	      }
	    else
		  {
		    c=a/b;
		    cout<<"结果是：" <<c<<endl;
		    break; 
		  }
		default:cout<<"输入错误"<<endl;
		break;
	}
       	cout<<endl;
		cout<<"请输入要计算的式子：";
	    cin>>a>>op>>b;
    }
	return 0;
}
