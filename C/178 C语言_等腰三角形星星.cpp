#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row; //����
	int i,j,k; //����
	
	printf("������������");
	scanf("%d", &row);
	 
	for(i = 1; i <= row; i++)
	{
		//��ӡ�ո����һ�в���Ҫ�ո�����������һ
		for(j = 1; j <= row - i; j++)  // j <= row - i  ע�� 
		{
			printf(" ");	
		}	
		
		//��ӡ���ǣ���һ�����ǵ�������ǰһ�е� 2n-1�� 
		for(k = 1; k <= 2 * i  - 1; k++) 
		{
			printf("*"); 
		} 
		printf("\n"); //���У�������ӡ��һ�еĿո������ 
	}
	
	system("pause"); // pause ��ͣ����˼ 
	
	return 0;
} 
