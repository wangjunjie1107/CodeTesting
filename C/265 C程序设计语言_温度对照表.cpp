#include<stdio.h>

//��ӡ�����¶��������¶ȵĶ��ձ� 
int main()
{
	float fahr;//�����¶�
	float Celsius;//�����¶�
	
	int lower = 0; //�¶����� 
	int upper = 100;  //�¶����� 
	int step = 5;  //���� 
	
	Celsius = lower;
	printf("�����¶�\t");
	printf("�����¶�\n");
	
	while(Celsius <= upper)
	{
		//%6.2f ���ո�������ӡ������6���ַ���С���������λС��
		//%c ��ʾ�ַ�
		//%% ��ʾ�ٷֺű��� 
		printf("  %3.1f\t\t%6.1f\n", Celsius, Celsius * 9.0 / 5.0 + 32);
		Celsius += step;
	} 
	
	return 0;
 } 

