#include<iostream>   //��������   
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	char op;
	cout<<"������Ҫ�����ʽ�ӣ�";
	cin>>a>>op>>b;
	while(1)
	{ 
	switch(op)
	{
		case'+':c=a+b;
		cout<<"����ǣ�" <<c<<endl;
		break; 
		
		case'-':c=a-b;
		cout<<"����ǣ�" <<c<<endl;
		break; 
		
		case'*':c=a*b;
		cout<<"����ǣ�" <<c<<endl;
		break; 
		
		case'/':
		if(b==0)
		  {
			cout<<"�������"<<endl; 
			break;
	      }
	    else
		  {
		    c=a/b;
		    cout<<"����ǣ�" <<c<<endl;
		    break; 
		  }
		default:cout<<"�������"<<endl;
		break;
	}
       	cout<<endl;
		cout<<"������Ҫ�����ʽ�ӣ�";
	    cin>>a>>op>>b;
    }
	return 0;
}
