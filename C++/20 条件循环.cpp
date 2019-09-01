/*while(表达式)
  {
     语句序列  //循环体 
  } */ 
  
/*do
  {
     语句序列  //循环体 
  } (表达式)*/ 
  
#include<iostream>
#include<cmath>
using namespace std;
int main()
   {
   	double x,n,Y;
   	cout<<"请输入两个整数x和n：";
   	cin>>x>>n;
   	while(1)
   	 {  
	   if(x==0&&n==0)
         	{ 
         	   cout<<"程序终止 Program terminationed"<<endl;   break;
	        }
	   else
	        {
			   if((x<0&&n<=0)||(x<0&&(1/n!=int(1/n)))) 
			    {
			    	cout<<"error reinput"<<endl;      continue;
				}
				else
				{
					Y=pow(x,n);
					cout<<"x的n次方为：";
					cout<<Y<<endl;
					cout<<"请输入两个整数x和n:"; 
					cin>>x>>n;
				}
	        }
	 }
	
	 return 0; 
   }  
