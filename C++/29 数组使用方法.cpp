#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[5][5]={{1,2,3,4,5},{},{},{},{}};
	int i;
	int b[5][5];
	int j;
	for(i=0;i<5;i++)
	{
	    for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<"   "; 
			
		} 
		cout<<"\n";   //���з������������鰴������� 
	}
	cout<<endl;
	
	    memset(b, 0, sizeof(b));  //ʹ��memset�����������鸳ֵ 0 
	
          	for(i=0;i<5;i++)
	        {
	             for(j=0;j<5;j++)
	          {
			     cout<<b[i][j]<<"   "; 	
		      }
	             cout<<"\n"; 
            } 
    cout<<endl;
	
	    memset(b,-1,sizeof(b));  //ʹ��memset�����������鸳ֵ -1 
	
	        for(i=0;i<5;i++)
	         {
	            for(j=0;j<5;j++)
	           {
			      cout<<b[i][j]<<"   "; 	
		       }
	           cout<<"\n";  
             }
    cout<<endl;
             
    cout<<"\n";
}

