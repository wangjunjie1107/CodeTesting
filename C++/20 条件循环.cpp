/*while(���ʽ)
  {
     �������  //ѭ���� 
  } */ 
  
/*do
  {
     �������  //ѭ���� 
  } (���ʽ)*/ 
  
#include<iostream>
#include<cmath>
using namespace std;
int main()
   {
   	double x,n,Y;
   	cout<<"��������������x��n��";
   	cin>>x>>n;
   	while(1)
   	 {  
	   if(x==0&&n==0)
         	{ 
         	   cout<<"������ֹ Program terminationed"<<endl;   break;
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
					cout<<"x��n�η�Ϊ��";
					cout<<Y<<endl;
					cout<<"��������������x��n:"; 
					cin>>x>>n;
				}
	        }
	 }
	
	 return 0; 
   }  
