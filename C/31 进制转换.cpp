#include<stdio.h>
#include<math.h>

int main()      //ʮ����ת��Ϊ�������� 
{
	int A;
	int B;   //����������� 
	int C;   //Ҫת���Ľ�����  0<C<=10 
	int P;   // A �� B �Ľ����� 
	int sum; //A��B ֮�� 
	int x=0;
	int i=0;
	int j=0;
	int Y=0;
	int arr[1000];
	
	printf("��ֱ����������������ǵĽ�������������Ҫת���Ľ�����:\n");
	scanf("%d", &A); 
	scanf("%d", &B); 
	scanf("%d", &P); 
	scanf("%d", &C); 
	
	sum=A+B;   //���
	
	//��sumת��Ϊ10����
	while(sum!=0)
	{
		Y=Y+(sum%10)*pow(10,x);
		x++;
		sum=sum/10; 
	 } 
	 
    Y=Y+sum;
    
	printf("A��B֮�͵�10������ʽΪ��%d\n", Y);
	
	//��ʮ����ת��Ϊ�������� 
	
	sum=Y;
	
	do{
		
		arr[i++]=sum%C;
		sum/=C;
		
	  } while(sum!=0);   	  //�̲�Ϊ0 
	
	printf("Ҫת���Ľ�����ʽΪ��"); 
	
	for(j=i-1; j>=0; j--)    //ѭ������������� 
	{
		printf("%d", arr[j]);
	}
	 
	return 0;
 }
  
