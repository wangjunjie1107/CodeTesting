#include<stdio.h>

int main()
{
	unsigned int value = 0;
	printf("����һ���޷�������");
	scanf("%d",&value); 
	
	//ת��ʮ����Ϊ������ 

	//���������ֵ��Ϊ1��λ�� 
	int counts = 0;
	for(counts = 0; value != 0; value >>=1) 
	{
		if((value & 1) != 0)
		{
			counts += 1;
		}
	}
	
	printf("\n��������ڶ����Ƶı�ʾ�£�ֵΪ1��λ��%d����", counts);  
	return 0;
}
