#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;	//������� 1 ����Ȼ�� 
	
	int count = 0;	//���� �� n �� 1 ���õĲ��� 
	
	while(n != 1)
	{
		if(n % 2 == 0)
		{
			//ż��
			n /= 2; 
		}
		else
		{
			//����
			n = 3 * n + 1;	
		} 
		++count;
	} 
	
	cout << count << endl;
	return EXIT_SUCCESS;
} 
