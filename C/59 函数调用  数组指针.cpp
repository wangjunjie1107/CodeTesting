#include<stdio.h>

#define SIZE 10

int sum(int ar[], int n);
int sum2(int *start, int *end); //�п�ʼ�ͽ��� 

int main(void)
{
	int marbles[SIZE]={1,2,3,44,58,45,23,6,5,8};
	long answer;
	long answer2;
	
	//������������ 
	answer = sum(marbles, SIZE);
	answer2 = sum2(marbles, marbles + SIZE);  //C��֤�� marbles+SIZE ��Ч 
	
	//C��֤�ڸ��������ռ�ʱ��ָ����������һ��λ�õ�ָ����Ȼ����Ч��ָ�� 
	 
	printf("The total number of marbles is %d.\n", answer2);
	printf("The total number of marbles is %d.\n", answer);
	printf("The size of marbles is %d bytes.\n", sizeof(marbles));
	
	return 0;
}

int sum(int ar[], int n)  //��int sum(int *ar, int n)�ȼ� 
{
	int i;
	int total = 0;
	
	for(i = 0; i < n; i++)
	{
		total += ar[i];
	}
	printf("The size of ar is %d bytes.\n", sizeof ar);
	// ar ��һ��ָ��������Ԫ�ص�ָ��     
	//sizeof(ar)  ��  sizeof ar �ȼ� 
	return total;
 } 
 
 //ָ���ʾ�����ӽ��������ԣ����һЩ�������ڱ���ʱ������Ч�ʸ��ߵĴ��롣 
 int sum2(int *start, int *end)
 {
 
 	int total = 0;
 	
 	while(start < end)
 	{
 		total += *start++;  //�򻯴��룬�Ȱ�ָ��λ�� �ϵ�ֵ�ӵ�total�ϣ�Ȼ���ٵ���ָ��  
	}
	
	return total;
	 
 	
 	
  } 
