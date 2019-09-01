#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include<fstream>

//写文件
void test01()
{
	ofstream ofs; // 写文件  out
	ofs.open("./test.txt", ios::out | ios::trunc);
	
	//判断对象是否打开成功
	if (!ofs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	ofs << "姓名：Tom" << endl;
	ofs << "年龄：18" << endl;
	ofs << "性别：男" << endl;

	//关闭对象
	ofs.close();
}

//读文件
void test02()
{
	ifstream ifs; //读文件  in
	ifs.open("./test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//第一种方式
	/*char buf1[1024] = { 0 };
	while (ifs >> buf1)
	{
		cout << buf1 << endl;
	}*/

	//第二种方式
	/*char buf2[1024] = { 0 };
	while (ifs.getline(buf2,sizeof(buf2)))
	{
		cout << buf2 << endl;
	}*/

	//第三种方式
	/*string buf3;
	while (getline(ifs,buf3))
	{
		cout << buf3 << endl;
	}*/

	//第四种方式  不推荐
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
}
int main()
{

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}



