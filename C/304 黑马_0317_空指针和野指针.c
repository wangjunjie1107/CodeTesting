#include "STD.c"

void test01()
{
	char * p = NULL;
	//��pָ����ڴ����򿽱�����
	strcpy(p, "1111"); //err
	
	char * q = 0x1122;
	//��qָ�����ڴ����򿽱�����
	strcpy(q, "2222"); //err
}

int * doWork()
{
	int a = 10;
	int *p = &a;
	return p;
}

//Ұָ�����
void test02()
{
	//1������δ��ʼ��ָ��
	//int *p;
	//printf("%d\n", *p);
	
	//2��malloc��free��ָ��
	int * p = malloc(sizeof(int));
	*p = 100;
	printf("%d\n", *p); //right
	free(p);
	
	printf("%d\n", *p);//�ڴ��Ѿ��ͷ��ˣ����Զ�ȡ����ڴ�����ݣ�����������
	
	//*p = 100;//�����ڴ��Ѿ��ͷţ�û��Ȩ��ȥ����
	
	p = NULL; //Ҫ��Ұָ���ÿ�
	
	//3��ָ�����������������????
	int * p2 = doWork();
	printf("p2 = %d\n", *p2);
	printf("p2 = %d\n", *p2);
	
	//��ָ���Ƿ�����ظ��ͷţ�
	//��ָ������ظ��ͷš�Ұָ�벻�����ظ��ͷ�
	free(p); 
} 

int main()
{
	//test01();
	test02();
	return 0;
} 









