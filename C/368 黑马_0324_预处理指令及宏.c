#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Ԥ����ָ��
//1 ͷ�ļ�����
// "" �Զ���ͷ�ļ� <> ϵͳͷ�ļ�

//2 �궨��
//�곣�� ������������
//û����������
//�������� #undef ж�غ�
//�꺯�� ����Ƶ����С�ĺ���  ��װΪ�꺯��
//����ʱ�� ��Ҫ��֤����������

void test01()
{
	#define MAX 1000
	#undef MAX
}


//3 ��������
#define DEBUG
#ifdef DEBUG
#if 0
void func()
{
	printf("debug1\n");
}
#else
void func()
{
	printf("debug2\n");
}
#endif

#else
void func()
{
	printf("release�汾����\n");
}
#endif

void func1(char * p)
{
	if (p == NULL)
	{
		//__LINE__ ��ǰ��
		// __FILE__ ��ǰ�ļ� ����·��
		printf("�ļ���%s �� %d �г����ˣ�\n", __FILE__, __LINE__);
		
		//��ǰ����
		printf("���ڣ�%s\n", __DATE__);

		//��ǰʱ��  ����Ϊ�����»���
		printf("ʱ�䣺%s\n", __TIME__);
	}

	return;
}

//�����
void test02()
{
	func1(NULL);
}

int main()
{
	func();

	//printf("%d\n", MAX);

	test02();

	system("pause");
	return EXIT_SUCCESS;
}

