#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�õ����ķ�������쳲���������
void test01(int n)
{
	long result;
	long previous_result;
	long next_old_result;

	result = previous_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_old_result = previous_result;
		previous_result = result;
		result = next_old_result + previous_result;
	}

	printf("%d\n", result);
	return;
}

//�õݹ鷽������쳲��������� Ч�ʺܵ� �ܶ�ֵ���ظ������˶��
//����ʹ�õݹ鷽ʽʵ��һ������֮ǰ�����������Լ�ʹ�õݹ�����ĺô��Ƿ�ֵ������Ĵ��ۡ�
//���������С�ģ�������ۿ��ܱȳ�����ȥҪ��Ķ�
long test02(int n)
{
	int result;
	if (n <= 2)
		return 1;

	else
		return test02(n - 1) + test02(n - 2);
}
int main() 
{
	//�õ����ķ�������쳲���������
	int n = 3;
	test01(n);

	//�õݹ鷽������쳲���������
	long result;
	result = test02(n);
	printf("%d\n", result);

	system("pause");
	return EXIT_SUCCESS;
}
