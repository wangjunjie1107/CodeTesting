#include<stdio.h>
#include<stdlib.h>  //������c��c++�е����ֱ������ͣ�һЩ���ͨ�ú������ߡ� 
#include<math.h>
int main()
{
	int i;
	int a;
	int b;
	int c;
	i=100;
	do{
		a=i%10;		//ȡ��λ��
		b=i/10%10;  //ȡʮλ��
		c=i/100;	//ȡ��λ�� 
		
	    if(i==pow(a,3)+pow(b,3)+pow(b,3))  //ע�⸳ֵ��==����ں�=�����𣡣� 
	    {
	    	printf("%d\n",i);
		}
		i++; 
	}while(i<999);
	
	return 0;
}
