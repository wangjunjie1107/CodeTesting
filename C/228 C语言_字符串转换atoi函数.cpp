/*


atoi()��ɨ���ַ���������ǰ��Ŀո��ַ���
ֱ���������ֻ������Ųſ�ʼ��ת����
�����������ֻ��ַ���������('\0')�Ž���ת����
����������ط���ֵ�� 

atof()����һ��С����ʽ���ַ���ת��Ϊһ����������
atol()����һ���ַ���ת��Ϊlong����

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "   123456789wangjunjie";
	
	int a = atoi(arr1); //ת��Ϊ����
	printf("%d\n", a);
	
	char arr2[] = " 1.22154aaaaaa";
	float b = atof(arr2);  //ת��Ϊ������ 
	printf("%f\n", b);  
	
	char arr3[] = "  851.5";
	long int c = atof(arr3);  //ת��Ϊ������ 
	printf("%ld\n", c);

	
	return 0; 
	
 } 
