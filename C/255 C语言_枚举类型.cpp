#include<stdio.h>

/*


ö�٣���������ֵһһ�оٳ�����������ֵֻ�����оٳ�����ֵ�ķ�Χ�ڡ�
	��ö��ֵ����Ӧ�г����п���ֵ��Ҳ��Ϊö��Ԫ�ء�
	ö��ֵ�ǳ����������ڳ������ø�ֵ����ٶ�����ֵ��
	ö��Ԫ�ر�����ϵͳ������һ����ʾ��ŵ���ֵ��0��ʼ˳����Ϊ0��1��2 �� 
	
*/
enum weekday
{
	sun = 2, mon, tue, wed, thu, fri, sat
};

enum abool
{
	flase
}; 

int main()
{
	enum weekday a, b, c;
	
	a = sun;
	b = mon;
	c = tue;
	
	printf("%d, %d, %d\n", a, b, c);
	
	enum abool flag;
	flag = flase;
	
	if(flag == 0)
	{
		printf("falgΪ��\n");
	} 
	
	return 0;
}
