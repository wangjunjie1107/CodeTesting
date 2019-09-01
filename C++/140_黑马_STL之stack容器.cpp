#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stack>


/*
3.4.3.1 stack构造函数
stack<T> stkT;//stack采用模板类实现， stack对象的默认构造形式：
stack(const stack &stk);//拷贝构造函数
3.4.3.2 stack赋值操作
stack& operator=(const stack &stk);//重载等号操作符
3.4.3.3 stack数据存取操作
push(elem);//向栈顶添加元素
pop();//从栈顶移除第一个元素
top();//返回栈顶元素
3.4.3.4 stack大小操作
empty();//判断堆栈是否为空
size();//返回堆栈的大小
*/


void test()
{
	stack<int>s; //栈容器  不提供迭代器  只有栈顶可以访问

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "元素个数： " << s.size() << endl;

	//只要栈不空 查看栈顶 并出栈
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为：" << s.top() << endl;

		//出栈
		s.pop();
	}

	cout << "元素个数： " << s.size() << endl;

}


int main() {

	test();

	system("pause");
	return EXIT_SUCCESS;
}
