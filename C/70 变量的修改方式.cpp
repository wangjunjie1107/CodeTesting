#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01()
{
	int a = 10;
	//ֱ���޸� 
	a = 20;
	//����޸� 
	int * p =&a;
	*p= 100;
	printf("a = %d\n", a) ;
 } 
 
 //�����Զ�����������
 struct Person
 {
 	char a;  //0-3
 	int b;	//4-7
 	char c;//8-11
 	int d;//12-15
  };
  
void test02()
{
	struct Person p1 = {'a',10,'b',20};
   
   //ֱ���޸�d����
    p1.d = 1000;
   
   //����޸�d����
    struct Person * p = &p1;
    //p->d = 2000; 
	
	//printf("%d\n",p);
	//printf("%d\n",p+1);
	
	int * pPerson;
	pPerson = p;
	printf("d = %d\n",(int *)(pPerson + 12));
}
   
    
 int main()
 {
 	test02();
 	return 0;
 }
