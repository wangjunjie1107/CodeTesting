#include<math.h>  //��ѧ���������ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>//�����������Ҫ��ͷ�ļ� 
#include<time.h>
 
//����������뺯�����ѷ����������֮���ڵĸ�С����������ֵ 
void function1()
{
	float a;
	float b;
	
	a = 12.25;
	b = -12.25;
	 
	printf("������������뺯��\n");
	a = ceil(a);  //�����뺯�� 
	b = floor(b); //�����뺯�� 
	printf("%.0f\n%.0f\n\n\n", a, b);
}

//����ֵ����
void function2()
{
	printf("����ֵ����\n");
	int c = -12.3;
	c = fabs(c);
	printf("%d\n\n", c); 
}

//һ�������ݺ�ƽ����
void function3() 
{
	printf("һ�������� �� �����ֵ��ƽ����\n");
	int d = -4;
	int e,f;
	e = pow(d,3); 
	f = sqrt(fabs(d));
	printf("�ݣ�%d\nƽ������ %d\n\n", e, f);
}
 
//���Ǻ���
void function4()
{
	float x = 2;
	float y = x*180/3.141592654;
	int co;
	int si;
	int ta;
	co = cos(x);
	si = sin(x);
	ta = tan(x);
	
	printf("%f\n%f\n%f\n", co, si, ta);	
}

//�������� 
void function5()
{
	float a = log10(100);
	float b = exp(5);
	float c = log(10);
	printf("long10(100) = %0.2f\nexp(5) = %0.2f\nlog(10) = %0.2f\n", a, b, c);
 } 

//��ȡ�����
void function6()
{
	int dice;
	int i = 0;
	
	time_t t;
	srand(time(&t));  //��ʱ����Ϊ����������������� 
	
	printf("\n\n��ȡ�����\n");
	while(i < 5)
	{
		dice = (rand() % 25) + 1;
		printf("%d\t", dice);
		i++;
	}
	putchar('\n');
}	
int main()
{
	function1();//����������뺯��
	function2();//����ֵ����
	function3();// һ�������ݺ�ƽ����
	function4();//���Ǻ��� 
	function5();//�������� 
	function6();//��������� 
	return 0;
 } 
