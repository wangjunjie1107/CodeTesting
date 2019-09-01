#include<stdio.h>

#define SIZE 10

int sum(int ar[], int n);
int sum2(int *start, int *end); //有开始和结束 

int main(void)
{
	int marbles[SIZE]={1,2,3,44,58,45,23,6,5,8};
	long answer;
	long answer2;
	
	//两个函数调用 
	answer = sum(marbles, SIZE);
	answer2 = sum2(marbles, marbles + SIZE);  //C保证了 marbles+SIZE 有效 
	
	//C保证在给数组分配空间时，指向数组后面第一个位置的指针仍然是有效的指针 
	 
	printf("The total number of marbles is %d.\n", answer2);
	printf("The total number of marbles is %d.\n", answer);
	printf("The size of marbles is %d bytes.\n", sizeof(marbles));
	
	return 0;
}

int sum(int ar[], int n)  //与int sum(int *ar, int n)等价 
{
	int i;
	int total = 0;
	
	for(i = 0; i < n; i++)
	{
		total += ar[i];
	}
	printf("The size of ar is %d bytes.\n", sizeof ar);
	// ar 是一个指向数组首元素的指针     
	//sizeof(ar)  与  sizeof ar 等价 
	return total;
 } 
 
 //指针表示法更接近机器语言，因此一些编译器在编译时能生产效率更高的代码。 
 int sum2(int *start, int *end)
 {
 
 	int total = 0;
 	
 	while(start < end)
 	{
 		total += *start++;  //简化代码，先把指针位置 上的值加到total上，然后再递增指针  
	}
	
	return total;
	 
 	
 	
  } 
