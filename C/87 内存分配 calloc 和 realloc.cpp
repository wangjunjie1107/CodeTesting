#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

void test01()
{
	int * p1 = malloc(sizeof(int)*10);
	
	for(int i = 0; i < 0; i++)
	{
		printf("%d\n",p1[i]);
	}
	
	if(p1 != NULL)
	{
		free(p1);
		p1 = NULL;
	} 
	
	//calloc和malloc不同之处在于：会将堆区分配的内容初始化为0 
	int * p2 = calloc(10,sizeof(int));
	
	for(int i = 0; i < 0; i++)
	{
		printf("%d\n",p2[i]);
	}
	
	if(p2 != NULL)
	{
		free(p2);
		p2 = NULL;  //手动开辟手动释放 
	} 
	
}

//  realloc 重新在堆区分配内存
//  realloc的机制：如果比原来分配的内存要打，有两种情况 
//  情况1  如果原来的空间后面有 足够大的空闲空间，那么直接在后面继续开辟内存，返回原有地址 
//
//  情况2   如果原来的空间后面，没有足够大的空闲空间，那么系统会直接分配一个新的空间 
//          这个新空间就是需要的内存空间，将原有空间下的数据拷贝到新空间下，
//          并且将原有空间释放，返回新空间的首地址 
void test02()
{
	int * p3 = malloc(sizeof(int)*10);
	
	printf("%d\n",p3);
	
	for(int i = 0; i < 10; i++)
	{
		p3[i] = i;
	}
	
	p3 = realloc(p3,sizeof(int)*20);
    
	for(int i = 0; i < 20; i++)
    {
    	printf("%d\n",p3[i]);
	}
	
	printf("%d\n",p3);
 	
	if(p3 != NULL)
	{
		free(p3);
		p3 = NULL;
	} 
 	
 } 
 
 int main()
 {
 	test02();
 	
 	return 0;
 }
 



















