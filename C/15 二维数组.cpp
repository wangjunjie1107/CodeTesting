#include<stdio.h>

int main()
{
	//һά��������  ������[Ԫ�ظ���]={ֵ1��ֵ2}; 
	
	//��ά��������  ������[��][��]={{ֵ1��ֵ2}��{ֵ3��ֵ4}};
	
	int arr[3][3]={{1,1,1},{2,5,1},{51,15,48}};
	int i;
	int j;
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d  ", arr[i][j]);	 
		}
		printf("\n");
	 } 
	  
	 printf("��ά�����С��%d\n", sizeof(arr) );
	 printf("��ά�����һ�д�С��%d\n", sizeof(arr[0]) );
	 printf("��ά�����Ԫ�ش�С��%d\n", sizeof(arr[0][0]) );
	 
	 printf("��ά�����������%d\n", sizeof(arr)/sizeof(arr[0]) );
	 printf("��ά�����������%d\n", sizeof(arr[0])/sizeof(arr[0][0]) );
	 
	 
	 //��ά������׵�ַ ��ʾ�����ַ���  
	 
	 printf("%d\n",arr);
	 printf("%d\n",arr[0]);
	 printf("%d\n",&arr[0][0]);
	 
	 printf("%d\n",arr[1]);   //����ڶ��е���ʼ��ַ
	 
	 
	 //����forѭ����ӡ����Ԫ�ص�ַ
	 printf("���ж�άԪ�صĵ�ַ��"); 
	 for(i=0 ; i<3 ; i++)
	 {
	   for(j=0 ; j<3 ; j++) 
	   {
	   	  printf("%d\n", &arr[i][j]);
	   }
     }
     
     //��ά����Ԫ�صĳ�ʼ����ֻ�а����������Ŀ���ʡ�Բ�д�� 
	 
	 return 0;
} 
