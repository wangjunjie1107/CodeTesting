#include<stdio.h>
#include<stdio.h>
#include<string.h>   //�ṩstrlen������ԭ�� 
#define DENSITY 62.4  //�����ܶ� 

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];
	
	printf("Hi! Whats your first name?\n");
	scanf("%s", name);  //û��ǰ׺  ��Ϊ������������һ����ַ 
	printf("Whats your weight in pounds?\n");
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to stores it.\n", size);
	
	return 0;
	
}
