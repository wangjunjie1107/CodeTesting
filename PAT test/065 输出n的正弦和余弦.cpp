#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    //��������
    double n;	
	
    //���롢���㡢���
	scanf("%lf", &n);
    printf("%lf %lf %lf %lf\n", sin(n), cos(n), tan(n), asin(n));
   
    //����
    return 0;
}
