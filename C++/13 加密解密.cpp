#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char c;
	char ec;
	int k;
	cout<<"please input a lower character and k"<<endl;
	cin>>c>>k;
	  //����cout����ֱ�Ӽ�һ��ʽ�� ��Ҫô�ͼ�һ�����š� 
	cout<<(ec=((c-'a')+k)%26+'a'); 
	return 0;
	
}
