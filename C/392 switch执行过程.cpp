#include<stdio.h> 

/*
switch��ִ�й��̣�
	
	����switch��ı��ʽ��ֵ��Ȼ���ں���Ķ��case�в��Ҵ�ֵ������ҵ���ȵģ���ִ������Ķ�Ӧ��䣬ֱ������һ��breakΪֹ��
	
	���û��break�Ļ�������ִ�е���һ��case�µ���䡣

	���switch���ʽ�ļ�����������case������ȣ���ִ��default�����䡣
	
	defaultҲ����û�У����������ʲôҲ��ִ�С�


*/
int main()
{
	
	int a = 1;
	switch(a == 1)
	{
		case 0:
			printf("Yes\n");
		case 1:
			printf("No\n");
		case 3:
			printf("ohhhhh\n");
	}
	
	return 0;
}
