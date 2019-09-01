#include<stdio.h>  //待完善  闰年还有月份天数的区别 

 int main()
 {
 	int x;
 	int y;
 	int sum=0;
 	int temp;
 	int yearx,yeary,monthx,monthy,dayx,dayy; 
 	
 	scanf("%d", &x);   //输入日期 
	scanf("%d", &y);
	
 	if(x>y)         //交换x和y的次序  
 	{
 		temp=x;
 		x=y;
 		y=temp;
	}
	
	//对于年进行操作
	yearx=x/10000;
	yeary=y/10000;
	sum=(yeary-yearx)*365;
	
	//对于月份进行操作
	monthx=x/100-(x/10000)*100; 
	monthy=y/100-(y/10000)*100;
	
	if((monthy-monthx)<=0)
	{
		sum=sum+(monthx-monthy)*30;
	}
	else
	{
		sum=sum+(monthy-monthx)*30;
	}
	
	//对于天进行操作
	dayx=x-(x/100)*100; 
	dayy=y-(y/100)*100;
	
	if((dayy-dayx)<=0)
	{
		sum=sum+(dayx-dayy)*30;
	}
	else
	{
		sum=sum+(dayy-dayx)*30;
	}
	
	printf("%d\n", sum);
	return 0;
	 
 }
