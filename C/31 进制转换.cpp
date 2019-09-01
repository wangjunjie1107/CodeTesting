#include<stdio.h>
#include<math.h>

int main()      //十进制转换为其他进制 
{
	int A;
	int B;   //输入的两个数 
	int C;   //要转换的进制数  0<C<=10 
	int P;   // A 和 B 的进制数 
	int sum; //A与B 之和 
	int x=0;
	int i=0;
	int j=0;
	int Y=0;
	int arr[1000];
	
	printf("请分别输入两个数和它们的进制数，还有想要转换的进制数:\n");
	scanf("%d", &A); 
	scanf("%d", &B); 
	scanf("%d", &P); 
	scanf("%d", &C); 
	
	sum=A+B;   //求和
	
	//将sum转换为10进制
	while(sum!=0)
	{
		Y=Y+(sum%10)*pow(10,x);
		x++;
		sum=sum/10; 
	 } 
	 
    Y=Y+sum;
    
	printf("A和B之和的10进制形式为：%d\n", Y);
	
	//将十进制转换为其他进制 
	
	sum=Y;
	
	do{
		
		arr[i++]=sum%C;
		sum/=C;
		
	  } while(sum!=0);   	  //商不为0 
	
	printf("要转换的进制形式为："); 
	
	for(j=i-1; j>=0; j--)    //循环倒序输出数组 
	{
		printf("%d", arr[j]);
	}
	 
	return 0;
 }
  
