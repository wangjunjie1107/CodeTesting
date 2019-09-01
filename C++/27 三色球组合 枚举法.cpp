#include<iostream>
using namespace std;
int main()
{
	
	enum color{red,yellow,blue};
    int temp,i,j;
    for(i=red;i<=yellow;i++)
       {
	     for(j=i+1;j<=blue;j++)
          {
		    for(int t=0;t<2;t++)
		    {
		    	switch(t)
				{
					case 0:temp=i;break;
					case 1:temp=j;break;
					switch((enum color)temp)
					{
						case red:cout<<"red"<<'\t';break;
						case yellow:cout<<"yellow"<<'\t';break;
						case blue:cout<<"blue"<<'\t';break;
					}
		    		
				}
				cout<<"\n";
				return 0;
			
			}
			}

}
}
			
  
