#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

//��������ѡ������
void MySort(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		//�϶�iΪ��Сֵ���±�
		int min = i;

		for (int j = i + 1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				//������ʵ��Сֵ�±�
				min = j;
			}
		}
		//�ж��϶�i��min�Ƿ�һ���������һ���������������±��Ӧ��Ԫ��
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
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
void test01()
{
	//ѡ������
	//��С��������  ����
	int arr[] = { 3,5,1,2,4 };

	//��װѡ��������
	int len = sizeof(arr) / sizeof(int);
	MySort(arr, len);

	//��ӡ����
	printArray(arr, len);
}



//�ַ�����ѡ������  ����
//�ַ����Ƚϣ�strcmp(str1,str2)  str1 < str2 ����-1
void MySortString(char * pArr[], int len)
{

	for (int i = 0; i < len;i++)
	{
		//�϶�iΪ���ֵ���±�
		int max = i;
		for (int j = i + 1;j < len;j++)
		{
			//�������±�ֵ  
			//�ַ����Ƚ�  ��ֱ����һάָ����бȽ� Ҳ����һλ�������Ƚ�
			//�����һ���ַ���ͬ���ͱȽϽ��������ַ�
			//��������бȽϵĹ��̣�ʵ���Ͻ��ַ�ת��Ϊ��Ӧ��ASCII��ֵ���бȽϵ�

			//if(pArr[max] < pArr[j])  
			if (strcmp(pArr[max],pArr[j]) == -1)
			{
				//�������ֵ�±�
				max = j;
			}
		}

		if (i != max)
		{
			char * temp = pArr[i];
			pArr[i] = pArr[max];
			pArr[max] = temp;
		}
	}
}

//��ӡ�ַ�����
void printString(char ** pArr, int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%s\n", pArr[i]);
	}
}


//ָ������ --  ������ÿ��Ԫ�� ����ָ������
void test02()
{
	char * pArr[] = { "aaa", "bbb", "ccc", "ddd", "fff", "eee","cafefa","cbfefa" };

	int len = sizeof(pArr) / sizeof(char *);
	
	//����
	MySortString(pArr, len); //ָ�����飬��������һ����άָ��
	//��ӡ
	printString(pArr, len);
	// fff  eee  ddd  ccc  bbb  aaa ������������ѡ�������㷨
}

int main()
{
	//test01();
	test02();

	system("pause");
	system("pause");


	return EXIT_SUCCESS;
}
