/* 
int a[2][2];
a[2][2]={{1,2}{1,2}}   //����Ԫ�ظ�ֵ������ȫ����ֵ��Ҳ���Բ��ָ�ֵ 
a[0][0]=1   //�±겻��Խ�� �����㿪ʼ��n-1
*/
#include<iostream>
using namespace std;
int main()
{
   {
	char month[12][10]={"January","February","Maech","April","May","June","July","August","September","October","November","December"}	;
	int m;
	cin>>m;
	if(m>0&&m<13)
		cout<<month[m-1];
	else
	    cout<<"�������"<<endl;
	}
	return 0;
}

//��ά����  int a[3][3][3]  �Ȳ���к��еķ�ʽ�洢 
  
