#include<stdio.h>

int main()
{
	int arr[5];
	int i=0;
	int j=0;
	int temp;
	 	  
	printf("�������������Ԫ�أ����ÿո������");
	for(i=0 ; i<5 ; i++)   //�������� 
	 {
	 
	 	scanf("%d",&arr[i]);  //�������飬����һ����Ҫ��ȡ��ַ����&
		                      //�мǣ� 
	 } 
	 
	//ѭ���Ƚ�����Ԫ�أ����һ��Ԫ�غ�����Ԫ�����αȽ� 
	
    for(i=0 ; i<5 ; i++)  //�������� 
	   { 
	  	  for(j=0 ; j<5-1-i ; j++) //�ڲ������ 
	  	   {
	  	        if(arr[j]>arr[j+1])  //�Ƚ�����Ԫ��  
	  	        {                    //ÿ�αȽϵ����������ڵ����� 
	  	       		temp=arr[j];
			   		arr[j]=arr[j+1];
			   		arr[j+1]=temp;
	        	}
	    	}
	   }
	  
	    printf("ð��������Ϊ��"); 
	    for(i=0 ; i<5 ; i++)
	    {
	    	printf("%d\t",arr[i]);
		} 
	return 0;
	}
 
