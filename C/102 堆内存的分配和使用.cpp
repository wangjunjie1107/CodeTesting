#include<stdio.h>
#include<stdlib.h> 
void heapsUseing()
{
	int ctr;
	int * iPtr;
	float * fPtr;
	double * dPtr;
	
	//开辟堆空间 
	iPtr = (int *)malloc(100 * sizeof(int));
	if(!iPtr)
	{
		puts("The integer allocation failed.");
		exit(1); 
	}
	
	fPtr = (float *)malloc(50 * sizeof(int));
	if(!fPtr)
	{
		puts("The float allocation failed.");
		exit(1);
	}
	
	dPtr = (double *)malloc(450 * sizeof(double));
	if(!dPtr)
	{
		puts("The double allocation failed.");
		exit(1);
	}
	
	//You now have allocated a total of 600 heap values
	//堆空间赋值 
	for(ctr = 0; ctr < 100; ctr++)
	{
		iPtr[ctr] = ctr;
	}
	
	for(ctr = 0; ctr < 50; ctr++)
	{
		*(fPtr + ctr) = (float)ctr;
	}
	
	for(ctr = 0; ctr < 450; ctr++)
	{
		dPtr[ctr] = (double)ctr;
	}
	
	//打印堆空间的值
	for(ctr = 0; ctr < 100; ctr++)
	{
		printf("%d\t", iPtr[ctr]);
	}
	
	for(ctr = 0; ctr < 50; ctr++)
	{
		printf("%f\t", fPtr[ctr]);
	}
	
	for(ctr = 0; ctr < 450; ctr++)
	{
		printf("%f\t", dPtr[ctr]);   //打印double类型的值，输出的格式说明符号是%f 
	} 
	//释放堆空间 
	free(iPtr);
	free(fPtr);
	free(dPtr);
}	



int main()
{
	heapsUseing();
	 
	int * temps; //指向堆的指针
	temps = (int *)malloc(10 * sizeof(int)); //堆内存是连续的 
	
	if(temps == 0) //分配失败 
	{
		printf("Oops! Not enough memory.\n");
		exit(1);    //Exit the program early
	} //(int *) 是一个指针强制类型转换 
	
	free(temps); //Gives the memory back to the heap 
	
	return 0; 
 } 
