#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
void test(int arr[]);  //���������� 

//1��sizeof���ʣ��ǲ���һ��������
//             �𣺲���һ��������ֻ��һ����������
 
void test01()
{
	//�����������ͣ�sizeof�����ã���ȥʹ�ã����� sizeof��int)
	//���ڱ��������Բ��ӡ� ���磺 int a; sizeof a; 
	double 	d;
	sizeof d;
 } 
 
//2��sizeof�ķ���ֵ������ unsigned int �޷�������
//�� unsigned int �� int �������������㣬�������Ὣ�������Ͷ�ת��Ϊ unsigned int 
void test02()
{
	if(sizeof(int) - 5 > 0)
	{
		printf("dayu0\n%u", sizeof(int) - 5);
	}
	else
	{
		printf("xiaoyu0");
	}
 } 
 
 // sizeof����ͳ�����鳤��
 //����������Ϊ����������ʱ�򣬻��˻�Ϊָ�룬ָ�������еĵ�һ��Ԫ��

 void test03()
{
 	int arr[]={1,2,3,4,5,6};
 	
 	test(arr);
 	
}

void test(int arr[])
{
 	printf("%d\n", sizeof(arr));
} 
  
 int main()
 {
 	test03();
 	return 0;
 }










