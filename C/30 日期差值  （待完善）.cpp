#include<stdio.h>  //������  ���껹���·����������� 

 int main()
 {
 	int x;
 	int y;
 	int sum=0;
 	int temp;
 	int yearx,yeary,monthx,monthy,dayx,dayy; 
 	
 	scanf("%d", &x);   //�������� 
	scanf("%d", &y);
	
 	if(x>y)         //����x��y�Ĵ���  
 	{
 		temp=x;
 		x=y;
 		y=temp;
	}
	
	//��������в���
	yearx=x/10000;
	yeary=y/10000;
	sum=(yeary-yearx)*365;
	
	//�����·ݽ��в���
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
	
	//��������в���
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
