#include<stdio.h>

//   ��ѭ������У����ϣ��������ֹ����ѭ����
//��ִ����һ��ѭ������ʱ����Ҫʹ��continue��䡣 
int main()
{
	int sum = 0;
	
	for(int i = 1; i <= 100; i++)
	{
		if(i % 2 == 0) //���i��һ��ż����ִ��if����еĴ���
		{
			continue; //��������ѭ�� 
		}
		sum+=i;  //ʵ��sum��i���ۼ� 
	}
	
	printf("sum = %d\n", sum);
	
	return 0; 
 } 
