#include<stdio.h>

// ����ֵ���� �������������б� 
//  {
//   ������
//     return 0;
//  }


int add(int a, int b) 
{
	int sum= a + b ;
	return sum;
}

int main()
{
   int a=10;
   int b=30;
   int c;
   //�������� 
   add(a, b);
   c=add(a, b);
   printf("%d\n", c);
   return 0;
} 
