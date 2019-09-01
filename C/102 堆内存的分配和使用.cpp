#include<stdio.h>
#include<stdlib.h> 
void heapsUseing()
{
	int ctr;
	int * iPtr;
	float * fPtr;
	double * dPtr;
	
	//���ٶѿռ� 
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
	//�ѿռ丳ֵ 
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
	
	//��ӡ�ѿռ��ֵ
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
		printf("%f\t", dPtr[ctr]);   //��ӡdouble���͵�ֵ������ĸ�ʽ˵��������%f 
	} 
	//�ͷŶѿռ� 
	free(iPtr);
	free(fPtr);
	free(dPtr);
}	



int main()
{
	heapsUseing();
	 
	int * temps; //ָ��ѵ�ָ��
	temps = (int *)malloc(10 * sizeof(int)); //���ڴ��������� 
	
	if(temps == 0) //����ʧ�� 
	{
		printf("Oops! Not enough memory.\n");
		exit(1);    //Exit the program early
	} //(int *) ��һ��ָ��ǿ������ת�� 
	
	free(temps); //Gives the memory back to the heap 
	
	return 0; 
 } 
