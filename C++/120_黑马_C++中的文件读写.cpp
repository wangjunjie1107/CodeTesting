#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<fstream>//文件读写

//写文件
void test01()
{
	//ofstream 名称（“路径”，打开方式）；
	//ofstream ofs("./test.txt", ios::out | ios::trunc);

	ofstream ofs;
	ofs.open("./test.txt", ios::out | ios::trunc);
	
	//判断对象是否打开成功
	if (!ofs.is_open())
	{
		cout << "文件打开失败" << endl;
	}

	ofs << "姓名：Tom" << endl;
	ofs << "年龄：20" << endl;
	ofs << "性别：男" << endl;

	//关闭对象
	ofs.close();

}

//读文件
void test02()
{
	ifstream ifs;
	ifs.open("./test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}


	//第一种方式读文件
	char buf[1024] = { 0 };
	while (ifs >> buf) //整个文件读
	{
		cout << buf << endl;
	}

	//第二种方式  按行读
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}

	//第三种方式 按字符读  不推荐
	char ch;
	while ((ch = ifs.get()) != EOF)
	{
		cout << ch;
	}

	//第四种方式 按字符串读
	string buf1;
	while (getline(ifs,buf1))
	{
		cout << buf << endl;
	}

	ifs.close();//文件关闭
}

int main()
{
	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}

