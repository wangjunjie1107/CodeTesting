#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
//double ˫���ȸ�����

//������ʹ��ĳ�����ͱ���ֵ���κγ��ϣ�
//������ʹ�ø����͵ĸ����ӵı��ʽ��
float  temperature()
{
	printf("�����¶�\t�����¶�\n");
	for(float farh = UPPER; farh >= LOWER; farh -= STEP)
		printf("  %3.0f\t\t%6.1f\n", farh, (5.0 / 9.0) * (farh - 32));
	
} 
int  main()
{
	temperature();
	return 0;
 } 
 
