#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double money,years,rate,sum;          //˫����ʵ�� 
	cout<<"�����뱾�𡢴�����޺���Ϣ���ÿո����" <<endl; 
	cin>>money>>years>>rate;             //���� 
	while(money>0)                      //�ж� 
	{
		sum=money*pow((1+rate),years);  //���� 	
		cout<<"��Ϣ����";
     	cout<<sum<<endl;               //��ʾ 
		cout<<""<<endl; 
		cout<<"�����뱾�𡢴�����޺���Ϣ���ÿո����" <<endl; 
		cin>>money>>years>>rate;	  //������ 
	}
	return 0 ;
 } 
