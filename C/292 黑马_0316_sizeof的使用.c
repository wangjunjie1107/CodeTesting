#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//sizeof�ǲ���һ������������
//1�����ʲ���һ��������������� + - * /
void test01()
{
	printf("sizeof int = %d\n", sizeof(int));
	
	//����ͳ�Ʊ�����ʱ�򣬿��Բ���С����
	double d = 3.14;
	printf("sizeof d = %d\n", sizeof d); 
}

//2��sizeof ����ֵ��ʲô���� unsigned int 
void test02()
{
	unsigned int a = 10;
	
	//����
	if(a - 20 > 0)
	{
		//���һ��unsigned int ��int ȥ���㣬�����ͳһת��Ϊunsigned int 
		printf("����0\n"); 
	}
	else
	{
		printf("С��0\n");
	}
	 
	if(sizeof(int) - 5 > 0)
	{
		//���һ��unsigned int ��int ȥ���㣬�����ͳһת��Ϊunsigned int 
		printf("����0\n");
		printf("%u\n",sizeof(int) - 5); 
	}
	else
	{
		printf("С��0\n");
	}
}

//3 sizeof�����÷�
// ͳ������ռ���ڴ�ռ��С
void calculateArray(int arr[])  //�����������뵽�����У��������ᱻ�˻�Ϊָ�룬ָ��ָ�������е�һ��Ԫ�صĵ�ַ 
{
	printf("::::sizeof arr = %d\n", sizeof(arr)); 
}

void test03()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	calculateArray(arr);
} 
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}
