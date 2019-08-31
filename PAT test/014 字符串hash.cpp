#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;




/*
	�ַ���hash:ָ��һ���ַ���Sӳ��Ϊһ��������ʹ�ø��������Ծ�����Ψһ�ش����ַ���S
	
	���⣺����N���ַ�����ÿ���ַ�������λ��ĸ��һλ�������,��4λ����
  	
	      �ٸ���M����ѯ�ַ�����Ҳ��4λ������ÿ����ѯ�ַ�����N���ַ����г��ֵĴ���

	�����ɢ�У�hash)���ַ���ת��Ϊ���֣����бȽϡ�

*/ 


const int maxn = 100; //�����100���ַ���
char s[maxn][5], temp[5]; //sΪ�ַ����飬�����洢N���ַ�����temp�����洢M����ѯ�ַ���
int hashTable[52 * 52 * 52 * 10 + 10] = { 0 }; //�����洢���ַ���ת��Ϊ����id��ֵ �Կռ任ʱ�� 



//hash���������ַ���sת��Ϊ����
//ת������52����  ����  0-25 == A-Z     26-52 == a-z
int hashFunc(char s[], int len)
{
	int id = 0;

	//���һλ�����֣����Բ�ת�����һλ��ֱ�ӽ����һλ����id����
	for (int i = 0; i < len - 1; i++)
	{
		//����Ǵ�д��ĸ
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			id = id * 52 + (s[i] - 'A');
		}
		//�����Сд��ĸ
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			id = id * 52 + (s[i] - 'a') + 26;
		}
	}

	//ת����ɺ󣬼������һλ����
	id = id * 10 + (s[len - 1] - '0');

	//����id
	return id;
}

void test()
{
	int n, m;

	cout << "������N��M��ֵ��" << endl;
	cin >> n >> m;

	//��ȡN�е��ַ�������ת��
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		int id = hashFunc(s[i], 4);//���ַ���s[i]ת��Ϊ����
		++hashTable[id]; //���ַ������ֵĴ���+1
	}

	//��ȡM�е��ַ�������ת�������Ա�
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		if (strlen(temp) > 4)
		{
			cout << temp << "���Ȳ����ϣ�" << endl;
			continue;
		}
		
		int id = hashFunc(temp, 4);
		if (hashTable[id] > 0)
		{
			//˵�����ַ�����N�г��ֹ�����ӡ���ִ���
			cout << temp << "��N�г�����" << hashTable[id] << "�Ρ�" ;
			cout << "   ת�����idΪ" << id << endl;
		}
		else
		{
			cout << temp << "û����N�г��ֹ�" << endl; 
		}
	}
}


int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

