#include<stdio.h>

int main01(void)
{
	int arr[]={1,2,2,5,4,8,6,4,2,8};
	int* p=arr;
	//p�Ǳ���   arr�ǳ���
	//p��һ��ָ�� 8�ֽڴ�С
	//arr��һ������  40�ֽڴ�С 
	printf("ָ�����ʹ�СΪ�� %d\n", sizeof(p));//?Ϊʲô��8���ֽ� 
	printf("�����СΪ�� %d\n", sizeof(arr)) ;
    
    p= &arr[3];
	//  ָ���������ʱ�����±��Ǹ��� 
	printf("%d\n", p[-2]); //�൱�� *(p-2) 
	
	return 0;
}

int main()
{
	//ָ���������Ĳ���
	int arr[]={1,1,5,4,8,6,9};
	int *p= arr;
	
	//Ұָ��
	/*  ָ�����  ���   ���  ָ���������  ����  
	p = p+arr;  //err
	p = p*arr;  //err 
	p = p/arr;  //err
	p = p*4;  //err 
    */   
    //������ָ����ԱȽϴ�С  �ж���Ȳ����
    //��Чָ��  ��  Ұָ�� ���ԣ���û������ 
	if(p=arr)
	{
	   printf("��\n"); 
    }
    
    return 0;
 } 
