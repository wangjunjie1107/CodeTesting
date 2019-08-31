#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<cstdio>

using namespace std;


struct node
{
	double num;	//������
	char op;	//������
	bool flag;	//true��ʾ��������false��ʾ������
};

string str;
stack<node> s;		//������ջ
queue<node> q;		//��׺���ʽ����
map<char,int> op;	//���������ȼ�

//����׺���ʽת��Ϊ��׺���ʽ
void change()
{
	double num;
	node temp;

	for (int i = 0; i < str.length();)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp.flag = true; //���Ϊ����
			temp.num =  str[i++] - '0';	//��¼����������ĵ�һ����λ

			//�����һλ�������֣������������������
			while (i < str.length() && str[i] >= '0' && str[i] <= '9')
			{
				temp.num = temp.num * 10 +  (str[i] - '0');
				++i;
			}
			
			q.push(temp);//�����������ѹ���׺���ʽ�Ķ���
		}
		else
		{
			//����ǲ�����
			temp.flag = false;	//���Ϊ������

			//ֻҪ������ջ��ջ��Ԫ�رȸò��������ȼ���
			//�ͰѲ�����ջջ��Ԫ�ص�������׺���ʽ�Ķ�����
			while (!s.empty() && op[str[i]] <= op[s.top().op])
			{
				q.push(s.top());
				s.pop();
			}
			
			temp.op = str[i];
			
			s.push(temp);		//�ѸôӲ�����ѹ�������ջ��
			++i;
		}	
	}
	
	//���������ջ�л��в��������Ͱ�����������׺���ʽ������
	while (!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
}

//�����׺���ʽ
double calculate()
{
	double temp1, temp2;
	node cur, temp;

	//���м���
	while (!q.empty())
	{
		cur = q.front();	//ֻҪ��׺���ʽ���зǿգ�cur��¼����Ԫ��
		q.pop();

		if (cur.flag == true)
		{
			//����ǲ�������ֱ��ѹ��ջ��
			s.push(cur);
		}
		else
		{
			//����ǲ�����  �ȼ���Ȼ��ѹ��ջ��
			temp2 = s.top().num;	//�����ڶ�������
			s.pop();
			temp1 = s.top().num;	//������һ������
			s.pop();

			temp.flag = true;
			if (cur.op == '+')
			{
				temp.num = temp1 + temp2;
			}
			else if (cur.op == '-')
			{
				temp.num = temp1 - temp2;
			}
			else if (cur.op == '*')
			{
				temp.num = temp1 * temp2;
			}
			else if (cur.op == '/')
			{
				temp.num = temp1 / temp2;
			}
			s.push(temp);//�Ѹò�����ѹ��ջ
		}
	}

	return s.top().num;
}

void test()
{
	//���������ȼ�
	op['+'] = op['-'] = 1;
	op['/'] = op['*'] = 2;

	//�������룬ֱ��ĳ�е�ֵΪ0���ͽ���
	while (getline(cin,str), str != "0")
	{
		//�ѱ��ʽ�еĿո�ȥ��
		
		for (string::iterator it = str.begin(); it != str.end(); it++)
		{
			if(*it == ' ')
			{
				str.erase(it);
			}
		}
		
		//��ʼ��ջ
		while (!s.empty())
		{
			s.pop();
		}

		//����׺���ʽת��Ϊ��׺���ʽ
		change();

		//�����׺���ʽ
		printf("%.2f\n",calculate());
	}
}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

