#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//��������ѡ������
void MySort(int * arr, int len)
{
	for (int i = 0;i < len;i++) //�ҵ���Сֵ���±���ƣ���ʣ��������м�����
	{
		int min = i;

		for (int j = i + 1;j < len;j++)//�൱���ڵ�ǰ������Ѱ�ң��ҵ���Сֵ���±�󣬺�֮ǰָ�����±���н��� 
		{
			if (arr[min] > arr[j])
			{
				//������ʵ��Сֵ�±�
				min = j;
			}
		}

		//�ж��϶�i��min�Ƿ�һ���������һ������������
		//��Ϊ�п��ܴ�ʱ�� i �Ѿ�����С��ֵ��
		if (i != min)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

void printArray(int *arr, int len)
{
	for (int i = 0;i < len;i++)
	{ 
		printf("%d ", arr[i]);
	}
}
void test01()
{
	//ѡ������
	//��С�������� ����
	int arr[] = { 1,0,516,-1,216,52,60 };

	//��װѡ��������
	int len = sizeof(arr) / sizeof(int);
	MySort(arr, len);

	//��ӡ����
	printArray(arr, len);
}

//�ַ�����ѡ������ ����
//�ַ����Ƚϣ�strcmp(str1,str2) str1 < str2 ����-1
//ָ�����顪����������ÿ��Ԫ�� ����ָ������

void MySortString(char *pArr[], int len)
{
	if(pArr == NULL)
	{ 
		return;
	}
	if (len < 2)
	{
		return;
	}

	for (int i = 0;i < len;i++)
	{
		int max = i;
		for (int j = i + 1;j < len;j++)
		{
			//strcmp(str1,str2)
			//str1 < str2 ���� -1 
			//str1 > str2 ���� 1
			//str1 = str2 ���� 0
			//���������ַ�������ǰ��ģ��򽻻�

			//�������±�ֵ  
			//�ַ����Ƚ�  ��ֱ����һάָ����бȽ� Ҳ����һλ�������Ƚ�
			//�����һ���ַ���ͬ���ͱȽϽ��������ַ�
			//��������бȽϵĹ��̣�ʵ���Ͻ��ַ�ת��Ϊ��Ӧ��ASCII��ֵ���бȽϵ�
			
			if (strcmp(pArr[max], pArr[j]) == -1)
			{
				//printf("%d\n", strcmp(pArr[max], pArr[j]));

				max = j;//һ·�ҵ����ֵ���±�
			}
		}

		//����
		if (max != i)
		{
			char * temp = pArr[i];
			pArr[i] = pArr[max];
			pArr[max] = temp;
		}
	}
}

void printString(char *pArr[], int len)
{
	if (pArr == NULL)
	{
		return;
	}
	if (len < 1)
	{
		return;
	}

	for (int i = 0; i < len;i++)
	{ 
		printf("%s\n", pArr[i]);
	}
}


void test02()
{
	char * pArr[] = { "aaa", "bbb", "ccc", "ddd", "fff", "eee","cafefa","cbfefa" };
	
	int len = sizeof(pArr) / sizeof(char *);

	//����
	MySortString(pArr, len);

	//��ӡ
	printString(pArr,len);
}


int main() 
{
	//test01(); //����ѡ������ ���ϸ����±� 
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
