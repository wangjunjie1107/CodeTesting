#include<iostream>
using namespace std;
int main()
{
	int maopao[10];
	int i;
	int j;
	int temp;
	int k;
	
	cout<<"请输入十个及十个以下的整数,中间用空格隔开：";
	
	for(i=0;i<=9;i++)       //输入数组。 
	   {
	     cin>>maopao[i];
	   }
	   
	for(i=1;i<=9;i++)      //进行数组值之间的比较。 
	  { 
		for(j=0;j<10-i;j++)   //关键 
		  {
	      	if(maopao[j]>maopao[j+1])   //比较数组前后的值，依次比较、交换 
	          {
	      	     temp=maopao[j];
	      		 maopao[j]=maopao[j+1];
	      		 maopao[j+1]=temp;
			  } 
	        
		  }
	  }
	  
	for(k=0;k<10;k++)    //输出排序后的数组 
	    {
	      cout<<maopao[k];
	      cout<<"\n";
	    }
    return 0;
 } 
