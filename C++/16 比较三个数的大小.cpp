#include<iostream>
using namespace std;
int main()
    {
       int a,b,c,max;
       cout<<"�����������������ö��Ÿ�����"<<endl; 
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
	     
		 cout<<"��������������������ֵΪ��"; 
	   
	     cout<<max<<endl;
	   
	     cout<<endl; 
	   
	     cout<<"�����������������ö��Ÿ�����"<<endl; 
	   
	     cin>>a>>b>>c;
	    
		}
	   
	   return 0;
    }
