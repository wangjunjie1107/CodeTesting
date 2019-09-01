//switch语句
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int old_grade,new_grade;
	cout<<"请输入学生成绩:"; 
	cin>>old_grade;
	while(old_grade>0)
	{
	   switch(old_grade/10)
     	{
		case 10:                    //当一个case语句为空，则会执行之后的语句。 
		case  9: new_grade=5;break; //case10 和case9 的结果都为5 
		case  8: new_grade=4;break;	
		case  7: new_grade=3;break;	
		case  6: new_grade=2;break;
	    default: new_grade=1;break; 
    	}
	cout<<"此学生成绩等级为：" ; 
    cout<<new_grade<<endl; 
    cout<<"请输入学生成绩："; 
    cin>>old_grade;
	}
	
 } 
