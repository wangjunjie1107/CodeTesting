#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
//����������3���ߵĳ��ȣ���Ϊ�����������ж����Ƿ������ֱ�������Ρ� 
int main()
{
    //��������
    int a;	
	int b;	
	int c;
	
    //���롢���㡢���
	scanf("%d%d%d", &a, &b, &c);
	if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a *a)
		printf("yes!"); 
	else
		printf("not a triangle"); 
   
    //����
    return 0;
}
