/* 
int a[2][2];
a[2][2]={{1,2}{1,2}}   //数组元素赋值，可以全部赋值，也可以部分赋值 
a[0][0]=1   //下标不能越界 ，从零开始到n-1
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
	    cout<<"输入错误"<<endl;
	}
	return 0;
}

//多维数组  int a[3][3][3]  先层后行后列的方式存储 
  
