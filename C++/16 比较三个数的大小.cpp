#include<iostream>
using namespace std;
int main()
    {
       int a,b,c,max;
       cout<<"请输入三个整数，用逗号隔开。"<<endl; 
	   cin>>a>>b>>c;
	   while(a)
	    
		{
	      if(a<b)
	         max=b;
	      else  {
		         if(a<c)
	               max=c;
	              else 
			       max=a;
				} 
	     
		 cout<<"你所输入的三个数中最大值为："; 
	   
	     cout<<max<<endl;
	   
	     cout<<endl; 
	   
	     cout<<"请输入三个整数，用逗号隔开。"<<endl; 
	   
	     cin>>a>>b>>c;
	    
		}
	   
	   return 0;
    }
