//switch���
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int old_grade,new_grade;
	cout<<"������ѧ���ɼ�:"; 
	cin>>old_grade;
	while(old_grade>0)
	{
	   switch(old_grade/10)
     	{
		case 10:                    //��һ��case���Ϊ�գ����ִ��֮�����䡣 
		case  9: new_grade=5;break; //case10 ��case9 �Ľ����Ϊ5 
		case  8: new_grade=4;break;	
		case  7: new_grade=3;break;	
		case  6: new_grade=2;break;
	    default: new_grade=1;break; 
    	}
	cout<<"��ѧ���ɼ��ȼ�Ϊ��" ; 
    cout<<new_grade<<endl; 
    cout<<"������ѧ���ɼ���"; 
    cin>>old_grade;
	}
	
 } 
