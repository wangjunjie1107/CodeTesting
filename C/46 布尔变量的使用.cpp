#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//��ʾ���ٵı�������Ϊ����������
// _Bool���͵ı���ֻ�ܴ���1���棩��0���٣���
	
int main(void)
{
	long num;
	long sum;
	_Bool intput_is_good;
	
	printf("Please input a integer number��");
	intput_is_good = (scanf("%ld", &num) == 1);  
	
	while(intput_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer:");
		intput_is_good = (scanf("%ld", &num) == 1);  
	}
	printf("Those integers sum to %ld.\n", sum);
	
	return 0;
 } 
