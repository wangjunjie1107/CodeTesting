#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
#include "stack.h"

int main()
{
	Stack sk;		 //�����
	char ch;		 //�����ַ� �ж�ʵ�ֺ��ֲ���
	unsigned long p; // ��ջ  ������

	cout << "���� A ��ʾ�򵥣����� P ��ʾ���ˣ����� Q ��ʾ�˳���" << endl;

	while (cin >> ch && toupper(ch) != 'Q')
	{
		//��� �ַ� ch ������������ ֱ�Ӻ���
		while(cin.get() != '\n')
			continue;

		//������ַ� ֱ�Ӻ���
		if (!isalpha(ch))
			continue;

		//�ж�
		switch (ch)
		{
			case 'a':
			case 'A':
				cout << "��ʼ���ˣ���������Ʒ�� ";
				cin >> p;

				if (sk.isFull())
					cout << "�˵����������Ƚ��ˣ��ٽ��м��ˡ�" << endl;
				else
					sk.push(p); //��ջ����
				
				break;
			
			case 'p':
			case 'P':
				cout << "���н��ˣ��ղŵ���Ʒ���Ϊ�� ";
				
				if (sk.isEmpty())
					cout << "�˵�Ϊ�գ����ȼ���,�ٽ��н��ˣ�" << endl;
				else
					cout<< sk.getTop();
					sk.pop(); //��ջ����
				
				break;
		}
		cout << "���� A ��ʾ�򵥣����� P ��ʾ���ˣ����� Q ��ʾ�˳���" << endl;
	}
	cout << "Byebye!" << endl;


	system("pause");
	return EXIT_SUCCESS;
}