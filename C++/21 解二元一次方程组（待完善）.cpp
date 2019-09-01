#include<iostream>   //此程序有问题，还需要完善。 
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d,x1,x2;
	cout<<"请输入二元一次方程组的三个系数，并用逗号隔开:"; 
	cin>>a,b,c;
	if(a=0)
	{
		if(b=0)
		{
		  cout<<"输入的系数不构成方程"; 
	    }
	    else
		{
		   x1=x2=(-c/b) ;
		   cout<<"方程为一元一次方程，根为："<<x1<<endl;
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
			cout<<"方程的两个根为："<<x1<<"   "<<x2<<endl;
			 
		}
		else
		{
			if(d=0)
			{
			  x1=x2=(-b)/2*a;
			  cout<<"方程的两个根相同，为："<<x1<<"   "<<x2<<endl;
			} 
			else
			{
			  d=sqrt(-d) ;
			  x1=-b/2.0/a;
			  x2=d/2.0/a;
			  cout<<"方程有复数根，它们为：";
			  cout<<"x1="<<x1<<"+j"<<x2<<",x2="<<x1<<"-j"<<x2<<endl;
	     	}
	    }
    }
	return 0;
   }
