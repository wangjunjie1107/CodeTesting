#include<iostream>
using namespace std;
int main()
{
	int maopao[10];
	int i;
	int j;
	int temp;
	int k;
	
	cout<<"������ʮ����ʮ�����µ�����,�м��ÿո������";
	
	for(i=0;i<=9;i++)       //�������顣 
	   {
	     cin>>maopao[i];
	   }
	   
	for(i=1;i<=9;i++)      //��������ֵ֮��ıȽϡ� 
	  { 
		for(j=0;j<10-i;j++)   //�ؼ� 
		  {
	      	if(maopao[j]>maopao[j+1])   //�Ƚ�����ǰ���ֵ�����αȽϡ����� 
	          {
	      	     temp=maopao[j];
	      		 maopao[j]=maopao[j+1];
	      		 maopao[j+1]=temp;
			  } 
	        
		  }
	  }
	  
	for(k=0;k<10;k++)    //������������� 
	    {
	      cout<<maopao[k];
	      cout<<"\n";
	    }
    return 0;
 } 
