#include<stdio.h>

int main()
{
	 int k;
	 int i=0;
	 int arr[5];
	 int j=(sizeof(arr)/sizeof(arr[0]))-1;
	 
	printf("�������������Ԫ�أ����ö��Ÿ�����"); 
	 for(k=0 ; k<5 ; k++)   //�������� 
	 {
	 
	 	scanf("%d",&arr[k]);  //�������飬����һ����Ҫ��ȡ��ַ����&
		                      //�мǣ� 
	 } 
	 
	 while(i<j)
	 {
	 	//ͨ����ʱ������������
		 int temperare=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temperare;
		 i++;
		 j--;
	 }
	 
	 printf("�������õĽ��Ϊ��"); 
	 for(k=0; k<5; k++)
	 {
	 	printf("%d  ", arr[k]);
	 }
	 
	 return 0;
}
