#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double money,years,rate,sum;          //双精度实数 
	cout<<"请输入本金、存款年限和利息，用空格隔开" <<endl; 
	cin>>money>>years>>rate;             //输入 
	while(money>0)                      //判断 
	{
		sum=money*pow((1+rate),years);  //计算 	
		cout<<"本息共：";
     	cout<<sum<<endl;               //显示 
		cout<<""<<endl; 
		cout<<"请输入本金、存款年限和利息，用空格隔开" <<endl; 
		cin>>money>>years>>rate;	  //再输入 
	}
	return 0 ;
 } 
