#include<iostream>   //�˳��������⣬����Ҫ���ơ� 
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d,x1,x2;
	cout<<"�������Ԫһ�η����������ϵ�������ö��Ÿ���:"; 
	cin>>a,b,c;
	if(a=0)
	{
		if(b=0)
		{
		  cout<<"�����ϵ�������ɷ���"; 
	    }
	    else
		{
		   x1=x2=(-c/b) ;
		   cout<<"����ΪһԪһ�η��̣���Ϊ��"<<x1<<endl;
     	}
    }
	else
	{
		d=b*b-4*a*c;
		if(d>0)
		{
			d=sqrt(d);
			x1=(-b+d)/(2*a);
			x2=(-b-d)/(2*a);
			cout<<"���̵�������Ϊ��"<<x1<<"   "<<x2<<endl;
			 
		}
		else
		{
			if(d=0)
			{
			  x1=x2=(-b)/2*a;
			  cout<<"���̵���������ͬ��Ϊ��"<<x1<<"   "<<x2<<endl;
			} 
			else
			{
			  d=sqrt(-d) ;
			  x1=-b/2.0/a;
			  x2=d/2.0/a;
			  cout<<"�����и�����������Ϊ��";
			  cout<<"x1="<<x1<<"+j"<<x2<<",x2="<<x1<<"-j"<<x2<<endl;
	     	}
	    }
    }
	return 0;
   }
