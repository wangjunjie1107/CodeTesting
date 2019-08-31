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
	double num;	//操作数
	char op;	//操作符
	bool flag;	//true表示操作数，false表示操作符
};

string str;
stack<node> s;		//操作符栈
queue<node> q;		//后缀表达式序列
map<char,int> op;	//操作符优先级

//将中缀表达式转换为后缀表达式
void change()
{
	double num;
	node temp;

	for (int i = 0; i < str.length();)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp.flag = true; //标记为数字
			temp.num =  str[i++] - '0';	//记录这个操作数的第一个数位

			//如果下一位还是数字，继续更新这个操作数
			while (i < str.length() && str[i] >= '0' && str[i] <= '9')
			{
				temp.num = temp.num * 10 +  (str[i] - '0');
				++i;
			}
			
			q.push(temp);//将这个操作数压入后缀表达式的队列
		}
		else
		{
			//如果是操作符
			temp.flag = false;	//标记为操作符

			//只要操作符栈的栈顶元素比该操作符优先级高
			//就把操作符栈栈顶元素弹出到后缀表达式的队列中
			while (!s.empty() && op[str[i]] <= op[s.top().op])
			{
				q.push(s.top());
				s.pop();
			}
			
			temp.op = str[i];
			
			s.push(temp);		//把该从操作符压入操作符栈中
			++i;
		}	
	}
	
	//如果操作符栈中还有操作符，就把它弹出到后缀表达式队列中
	while (!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
}

//计算后缀表达式
double calculate()
{
	double temp1, temp2;
	node cur, temp;

	//进行计算
	while (!q.empty())
	{
		cur = q.front();	//只要后缀表达式队列非空，cur记录队首元素
		q.pop();

		if (cur.flag == true)
		{
			//如果是操作数，直接压入栈中
			s.push(cur);
		}
		else
		{
			//如果是操作符  先计算然后压入栈中
			temp2 = s.top().num;	//弹出第二操作数
			s.pop();
			temp1 = s.top().num;	//弹出第一操作数
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
			s.push(temp);//把该操作数压入栈
		}
	}

	return s.top().num;
}

void test()
{
	//操作符优先级
	op['+'] = op['-'] = 1;
	op['/'] = op['*'] = 2;

	//按行输入，直到某行的值为0，就结束
	while (getline(cin,str), str != "0")
	{
		//把表达式中的空格都去掉
		
		for (string::iterator it = str.begin(); it != str.end(); it++)
		{
			if(*it == ' ')
			{
				str.erase(it);
			}
		}
		
		//初始化栈
		while (!s.empty())
		{
			s.pop();
		}

		//将中缀表达式转换为后缀表达式
		change();

		//计算后缀表达式
		printf("%.2f\n",calculate());
	}
}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

