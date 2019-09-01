#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
#include "stack.h"

int main()
{
	Stack sk;		 //类对象
	char ch;		 //输入字符 判断实现何种操作
	unsigned long p; // 入栈  输入金额

	cout << "输入 A 表示买单，输入 P 表示结账，输入 Q 表示退出：" << endl;

	while (cin >> ch && toupper(ch) != 'Q')
	{
		//如果 字符 ch 后还有其他输入 直接忽略
		while(cin.get() != '\n')
			continue;

		//输入非字符 直接忽略
		if (!isalpha(ch))
			continue;

		//判断
		switch (ch)
		{
			case 'a':
			case 'A':
				cout << "开始记账，请输入商品金额： ";
				cin >> p;

				if (sk.isFull())
					cout << "账单已满，请先结账，再进行记账。" << endl;
				else
					sk.push(p); //入栈操作
				
				break;
			
			case 'p':
			case 'P':
				cout << "进行结账，刚才的商品金额为： ";
				
				if (sk.isEmpty())
					cout << "账单为空，请先记账,再进行结账！" << endl;
				else
					cout<< sk.getTop();
					sk.pop(); //出栈操作
				
				break;
		}
		cout << "输入 A 表示买单，输入 P 表示结账，输入 Q 表示退出：" << endl;
	}
	cout << "Byebye!" << endl;


	system("pause");
	return EXIT_SUCCESS;
}