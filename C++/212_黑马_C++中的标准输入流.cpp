#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

/*
cin.get() //一次只能读取一个字符
cin.get(一个参数) //读一个字符
cin.get(两个参数) //可以读字符串
cin.getline()
cin.ignore()
cin.peek()
cin.putback()
*/

//cin.get() //一次只能读取一个字符
void test01()
{
	// as ，第一次获取a  ，第二次获取s，第三次获取换行  ，第四次等待输入
	char ch = cin.get();

	cout << "ch = " << ch << endl;

	ch = cin.get();

	cout << "ch = " << ch << endl;

	ch = cin.get();

	cout << "ch = " << ch << endl;

}

//cin.get()两个参数 获取字符串
void test02()
{
	char buf[1024] = { 0 };

	cin.get(buf, sizeof(buf)); //读取字符之后，换行符会遗留在缓冲区中

	char ch = cin.get();//将遗留在缓冲区的换行符读取

	if (ch == '\n')
	{
		cout << "换行符遗留在缓冲区中" << endl;
	}
	else
	{
		cout << "换行符未遗留在缓冲区中" << endl;
	}

	cout << buf << endl; //输出
}


//cin.getline()获取字符串
void test03()
{
	char buf[1024] = { 0 };

	//换行符不会遗留在缓冲区中，并且从缓冲区中扔掉
	cin.getline(buf, sizeof(buf));
	char ch = cin.get();

	cout << buf << endl;  // 输出

	if (ch == '\n')
	{
		cout << "换行符遗留在缓冲区中" << endl;
	}
	else
	{
		cout << "换行符未遗留在缓冲区中" << endl;
	}
}

//cin.ignore()忽略
void test04()
{
	//默认忽略1个缓冲区中的字符，可以填写忽略个数
	cin.ignore(2);

	char ch = cin.get();  //将要读取第三个字符
	cout << "ch = " << ch << endl;
}

// cin.peek() 偷窥
void test05()
{
	//查看缓冲区中的第一个字符，并不取走
	char ch = cin.peek();
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;
}

//cin.putback() 放回
void test06()
{
	char ch = cin.get();
	cin.putback(ch); //将ch放回到缓冲区中，并且放回原位

	char buf[1024] = { 0 };
	cin.getline(buf, sizeof(buf));

	cout << "buf = " << buf << endl;
}

//案例1
void test07()
{
	cout << "请输入一个字符串或数字：" << endl;

	char c = cin.peek(); //偷窥字符


	if (c >= '0' && c <= '9')
	{
		int num;
		cin >> num;
		cout << "您输入的是数字：" << num << endl;
	}
	else
	{
		char buf[1024];
		cin >> buf;
		cout << "您输入的是字符串： " << buf << endl;
	}
}

//案例2
void test08()
{
	int num;

	while (true)
	{
		cout << "请输入1~10之间的数字：" << endl;
		cin >> num;
		if (num > 0 && num < 10)
		{
			cout << "输入正确  值为： " << num << endl;
			break;
		}

		//重置标志位
		cin.clear();
		//清空缓冲区
		cin.sync();

		//缓冲区中的标志位  0正常 1异常
		cout << "标志位： " << cin.fail() << endl;

		cout << "输入有误，请重新输入" << endl;
	}
}



int main()
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();


	system("pause");
	return EXIT_SUCCESS;
}



