#include<stdio.h>

int main()
{
	int arr[14]={51,54,4,6,15,48,1213,41,215,3,2,15,48,0};
	int i;
	int j;                //���鼰�������� 
	int temp;
	 							   //����ð������
	for(i=0 ; i<14 ; i++)         //���ִ�� ����Ԫ��-1�� 
	{
		for(j=0 ; j<14-i-1 ; j++)  //�ڲ�ִ�� ����Ԫ��-1��-ִ�д��� 
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("ð������Ľ��Ϊ��\n");  //������� 
	for(i=0 ; i<14 ; i++)
	{
		printf("%d\n",arr[i]);
	} 
	
	 return 0;
 } 
