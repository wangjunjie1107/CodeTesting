#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//����ָ������
void func1(int a)
{
	printf("func1�ĵ���\n");
}
void func2(int b)
{
	printf("func2�ĵ���\n");
}
void func3(int c)
{
	printf("func3�ĵ���\n");
}

void test04()
{
	//����ָ�����鶨�巽ʽ
	void(*p[3])(int);

	//ָ������ Ҫ������ķ�ʽ���±긳ֵ
	p[0] = func1;
	p[1] = func2;
	p[2] = func3;

	/*p[0](1);
	p[1](2);
	p[2](3);*/


	for (int i = 0; i < 3;i++)
	{
		p[i](i);
	}

}

int main() {
	
	test04();


	system("pause");
	return EXIT_SUCCESS;
}
