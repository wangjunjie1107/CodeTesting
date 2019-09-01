#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
cin.get()				   //一次只能读取一个字符
cin.get(一个参数)		  //读一个字符
cin.get(两个参数)		 //可以读字符串
cin.getline()			//获取一行字符串
cin.ignore()	 	   //忽略字符
cin.peek()			  //偷窥字符
cin.putback()		 //放回字符到堆区
*/

void test01()
{
	//一共输入两个字符

	char ch = cin.get();//获取一个字符

	cout << "ch = " << ch << endl;

	ch = cin.get();//获取第二个字符
	cout << "ch = " << ch << endl;

	ch = cin.get();//获取换行符
	cout << "ch = " << ch << endl;

	ch = cin.get();//等待重新输入
	cout << "ch = " << ch << endl;

}

//cin.get()两个参数  获取字符串
void test02()
{
	char buf[1024] = { 0 };

	cin.get(buf, sizeof(buf));//换行符遗留在缓冲区中

	char ch = cin.get();//用cin.get()捕获换行符
	if (ch == '\n')
	{
		cout << "换行符遗留在缓冲区中" << endl;
	}
	else
	{
		cout << "换行符未遗留在缓冲区中" << endl;
	}

	cout << "buf = " << buf << endl;
}


//cin.getline()获取字符串
void test03()
{
	char buf[1024] = { 0 };

	//换行符不会遗留在缓冲区中，并且从缓冲区中扔掉
	cin.getline(buf, sizeof(buf));

	char ch = cin.get();
	if (ch == '\n')
	{
		cout << "换行符遗留在缓冲区中" << endl;
	}
	else
	{
		cout << "换行符未遗留在缓冲区中" << endl;
	}

	cout << "buf = " << buf << endl;
}


//cin.ignore()忽略
void test04()
{
	//忽略前两个字符
	cin.ignore(2);//默认忽略缓冲区中的1个字符，可加参数修改

	char buf[1024] = { 0 };

	cin.getline(buf, 1024);
	cout << "buf = " << buf << endl;
}

//cin.peek() 偷窥第一个字符  并不会从缓冲区中拿走
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

//cin.putback()放回
void test06()
{
	char ch = cin.get();
	cin.putback(ch);//将ch放回到缓冲区中，并且放回原位置


	char buf[1024] = { 0 };
	cin.getline(buf, 1024);
	cout << "buf = " << buf << endl;

}

//案例1 根据用户输入的内容 判断是数字还是字符
void test07()
{
	cout << "请输入一串字符或数字：" << endl;
	char c = cin.peek();
	if (c >= '0'&&c <= 9)
	{
		int num;
		cin >> num;
		cout << "您输入的是数字：" << num << endl;
	}
	else
	{
		char buf[1024] = { 0 };
		cin >> buf;
		cout << "您输入的是字符串：" << buf << endl;
	}
}

//案例2  让用户输入 1 ~ 10之间的数字，如果输入有误，重新输入
void test08()
{
	int num;
	while (true)
	{
		cout << "请输入1~10之间的数字：" << endl;
		cin >> num;
		if (num > 1 && num < 10)
		{
			cout << "输入正确，值为：" << num << endl;
			break;
		}

		//重置标志位
		cin.clear();


		//清空缓冲区   2013可用 2015以上 cin.ignore()/ cin.getline();
		char buf[1024] = { 0 };
		cin.getline(buf,1024);
		memset(buf, 0, 1024);



		//缓冲区中的标志位  0正常   1异常
		cout << "标志位： " << cin.fail() << endl;

		//cout << "输入有误请重新输入" << endl;
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
	test08();


	system("pause");
	return EXIT_SUCCESS;
}
