#include<stdio.h>

//#define ָ����԰ѷ����������Ϊ���ų���������Ϊһ���ض����ַ���
 
#define LOWER 0  	//lower limit of  table 
#define UPPER 300	//upper limit
#define STEP  20	//step size
 
//��fahr=0,20,40,...,300ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ�

main()
{
/*
	float fahr, celsius;     
	float lower, upper, step;
	
	
	lower = 0;   //�¶����� 
	upper = 300;//�¶����� 
	step = 20;  //���� 
	
	fahr = lower;

	while(fahr <= upper)
	{
		//��ȷ�������Լ������ʵ��ո�ĳ�����Ʒ��Գ�����׶��Էǳ���Ҫ 
		celsius = 5 * (fahr - 32) / 9; 
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
*/	

//����ʹ�����³���ֻ��Ҫ����һ������ 
 
	for(int fahr = UPPER; fahr >=  LOWER; fahr-=STEP)
	{
		printf("%3d %6.1f\n", fahr, 5.0/9.0 * (fahr - 32));
	}
	
	return 0;
 } 
