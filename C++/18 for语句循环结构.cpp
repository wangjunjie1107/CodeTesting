#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,sum;
	cout<<"���㷨�Ǽ���1��n���ۼӺͣ�����������n:";
	cin>>a;
	sum=0;
	for(;a>0;a--)
	 {
	 	sum=a+sum; 
	 }
	 cout<<"�ۼӺ�Ϊ��"; 
	 cout<<sum<<endl;
	 return 0;
}
