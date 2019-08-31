#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<time.h>
#include<ctime>
#include<limits>
using namespace std;

/*
 
	������: �û������������޷��洢�侫�ȵ�����

*/

//�����ṹ��
struct big_number
{
	int d[100];		//�洢���ָ���λ�õ����������λ�洢���ֱ���ĵ�λ
	int len;		//�洢���ֵĳ���

	//���캯�������ڳ�ʼ������
	big_number()
	{
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

//������������ַ�������ʽ���룬�������ĸ�λ��������ĵ�λ���������ĵ�λ��������ĸ�λ
//��ʱΪ���������ڽṹ������˳λ�洢�ģ��������ĵ�λ����λ���������Ǵ�0-n���±�洢��
//��Ҫ���ַ������Ÿ���d[]����
//string --  array
big_number change_to_array(string str)
{
	big_number a;

	a.len = str.length();
	for (int i = 0; i < str.length(); i++)
	{
		//���ַ����ĺ����λ��ʼ��ֵ
		a.d[i] = str[str.length() - i - 1] - '0';
	}

	return a;
}


//b1 > b2  ���� 1
//b1 < b2  ���� -1
//b1 =b2  ���� =
//���������Ƚ�
int big_number_compare(big_number b1, big_number b2)
{
	//λ����ͬ�����
	if (b1.len > b2.len)
	{
		return 1;  // b1 ��
	}
	else if (b1.len < b2.len)
	{
		return -1; // b2 ��
	}

	//λ����ͬ�������
	for (int i = b1.len - 1; i >= 0; --i)
	{
		if (b1.d[i] > b2.d[i])
		{
			return 1;  // b1 ��
		}
		else if(b1.d[i] < b2.d[i])
		{
			return -1; // b2 ��
		}
	}

	//�������
	return 0;

}

//�����������  �߾��ȼӷ� b1 + b2
big_number big_number_add(big_number b1,big_number b2)
{
	big_number result;

	//��λ
	int carry = 0;

	//�Խϳ���lenΪ���ޣ���Ϊ�����λ�����ڣ���Ϊ0�����Բ�Ӱ�� ��λ-��λ
	for (int i = 0; i < b1.len || i < b2.len; ++i)
	{
		//������Ӧ��λ��ӣ���Ҫ���Ͻ�λ
		int temp = b1.d[i] + b2.d[i] + carry;
		//������洢��result�У���ȡ��λ
		result.d[i] = temp % 10;
		//�����λ���Ա��´ν��м�
		carry = temp / 10;
	}

	//�������н�λ�Ļ���ֱ�Ӹ�ֵ�����λ
	if (carry != 0)
	{
		result.d[result.len++] = carry;
	}

	return result;
}


//�����������  �߾��ȼ���  b1 - b2
big_number big_number_sub(big_number b1, big_number b2)
{
	big_number result;

	//�Խϳ���lenΪ���ޣ���Ϊ�����λ�����ڣ���Ϊ0�����Բ�Ӱ�� ��λ-��λ
	for (int i = 0; i < b1.len || i < b2.len; ++i)
	{
		//���������������ǰ��λ
		if (b1.d[i] < b2.d[i])
		{
			b1.d[i + 1]--;  //��λ��1
			b1.d[i] += 10;  //��λ��10
		}

		//�������Ϊ��ǰλ�Ľ��
		result.d[i] = b1.d[i] - b2.d[i];
	}

	while (result.len - 1 >= 1 && result.d[result.len - 1] == 0)
	{
		//ȥ�����λ��0��ͬʱ���ٱ���һλ���λ
		--result.len;
	}

	return result;
}

//�߾�����;��ȵĳ˷�  b1 * b2
//�;��ȣ������û����������ʹ洢������
//������ȡ������ĳλ��int��������ˣ������λ��ӣ����õĽ���ĸ�λ����Ϊ��λ�Ľ������λ������Ϊ�µĽ�λ
big_number big_number_mulit(big_number b1, int b2)
{
	big_number result;

	//�˷��Ľ�λ
	int carry = 0;

	//�Խϳ���lenΪ���ޣ���Ϊ�����λ�����ڣ���Ϊ0�����Բ�Ӱ�� ��λ-��λ
	for (int i = 0; i < b1.len; ++i)
	{
		//ȡ������ĳλ��int��������ˣ������λ���
		int temp = b1.d[i] * b2 + carry;
		//���õĽ���ĸ�λ����Ϊ��λ�Ľ��
		result.d[i] = temp % 10;
		//��λ������Ϊ�µĽ�λ
		carry = temp / 10;
	}

	while (carry != 0)
	{
		//������Ľ�λ��Ϊ0�����䱣�浽���λ
		result.d[result.len++] = carry % 10;
		//��Ϊ��λ���ܴ���10�����Լ�����10��ȡ��λ����һλ�洢
		carry /= 10;
	}

	return result;
}

//�߾�����;��ȵĳ���  b1 / b2   rΪ����
big_number big_number_div(big_number b1, int b2, int& r)
{
	big_number result;

	//��������ÿһλ���̵�ÿһλ��һһ��Ӧ�ģ������������
	result.len = b1.len;

	//�Ӹ�λ��ʼ����
	for (int i = b1.len - 1; i >= 0; --i)
	{
		//����һλ�������������
		r = r * 10 + b1.d[i];

		//�������������λΪ0
		if (r < b2)
		{
			result.d[i] = 0;
		}
		else
		{
			//�������,������������
			result.d[i] = r / b2;
			r = r % b2;
		}
	}

	while (result.len - 1 >= 1 && result.d[result.len - 1] == 0)
	{
		//ȥ�����λ��0��ͬʱ���ٱ���һλ���λ
		--result.len;
	}

	return result;
}

int main()
{
	string str1;
	big_number b1;
	cin >> str1;
	b1 = change_to_array(str1);

	string str2;
	big_number b2;
	cin >> str2;
	b2 = change_to_array(str2);

	cout << big_number_compare(b1, b2) << endl;

	//�ӷ�
	big_number result;
	result = big_number_add(b1, b2);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;


	//����
	result = big_number_sub(b1, b2);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;


	//�˷�
	int x = 99;
	result = big_number_mulit(b1, x);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;

	//����
	int s = 22;		 //����
	int r = 0;		//����
	result = big_number_div(b1, s, r);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}

