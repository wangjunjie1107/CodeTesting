#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	//˫ɫ��  ��������  1-32  1������  1-16 
	
	srand((unsigned int)time(NULL));  //��������� 
	int arr[6]={0};
	int value=0;
	int flag=0;
	int i; 
	int j;
	
	for(int i=0; i<6; i++)   //������������������ 
 	{
		value=rand()%32+1;
		
		//ȥ���ظ�������
		for(j=0; j<flag; j++)
		{
			if(value==arr[j])
			{
				i--; 
				break;
			}
	    } 
	    
	    //���µ����ִ浽�µ�λ���� 
	    if(j==flag)
		{
	       arr[flag]=value;
	       flag++;
		}
	} 
	
	//���ֵ 
	for(i=0; i<6; i++)
	{
		printf("%d  ", arr[i]); 
	}
	
	//��ɫ�����ֵ
	printf("+ %d\n", rand()%16+1);
	 
	return 0;

 }
  
