#include<stdio.h>
#include<stdlib.h>

//����Բ����ı����
int main()
{
    //��������
    double r;
    double h;

    //�������
    scanf("%lf%lf", &r, &h);
    printf("%lf\n", 2 * 3.141592654 * r * h + 3.141592654 * r * r * 2);
   
    //����
    return 0;
}
