#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

//strcmp(str1,str2)
//str1 < str2 ���� -1 
//str1 > str2 ���� 1
//str1 = str2 ���� 0

//�ַ����Ƚ�ʵ������ASCII��Ƚ�
int main()
{
	char arr1[] = "a";
	char arr2[] = "A";
	char arr3[] = "Ab";

	printf("a = %d\n", 'a');
	printf("A = %d\n", 'A');

	//����\0�ȽϾ�ֹͣ�� 
	int value = strcmp(arr1, arr2);
	printf("%d\n", value);  //��ͬ��ֵΪ0 

	int value1 = strcmp(arr1, arr3);
	printf("%d\n", value1); //arr1 < arr3��ֵΪ -1  arr1 > arr3 ֵΪ 1 

							//���ޱȽ�   ����\0��ֹͣ�� 
	int value2 = strncmp(arr1, arr2, 5);
	printf("%d\n", value2); //��ͬ��ֵΪ0   ��ֵͬΪ����ֵ ������ 


	system("pause");
	return 0;
}
