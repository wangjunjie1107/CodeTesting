#include "STD.c"

typedef struct 
{
	//�ڴ�Ҫ���룬���Է���ʱҪע����ܸ�char���Ͷ���伸���ֽ�
	int num;   			// 0-3   ռ4���ֽ� 
	char name[15]; 		//4 - 19  ռ16���ֽ� 
	int age;		 	//20 - 23  ռ4���ֽ� 
}MyPerson;

int main()
{
	MyPerson p1 = {001, "wang", 20};
	MyPerson * p;
	
	p = &p1;
	
	//ָ���޸Ľṹ���ڵ�ֵ 
	p->age = 22;
	printf("%d\n", p->age);
	
	char * p2  = &p1;
	printf("%d\n", *(int *)(p2 + 20));  //��C������ִ�� ���о��� ������ִ�� 
}
