#include "STD.c"

#define MYADD(x,y) ((x)+(y))

//�꺯��ע�⣺��֤�����������  ������
//�꺯��ʹ�ó�������Ƶ����С�ĺ�������װΪ�꺯��
//�ŵ㣺�Կռ任ʱ��  ��������ջ�ͳ�ջ

int MyAdd(int x, int y)
{
	return x + y;
} 

void test01()
{
	int a = 10;
	int b = 20;
	//((10) + (20)) * 20 
	printf("a + b = %d\n", MYADD(a, b) * 20);
	
}

int main()
{
	test01();
	
	return 0;
}
