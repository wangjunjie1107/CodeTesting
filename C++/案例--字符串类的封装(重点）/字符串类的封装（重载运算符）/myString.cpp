#include "myString.h"


//有参构造
MyString::MyString(const char * str)//MyString str = "abc"
{
	//开辟堆空间
	this->pString = new char[strlen(str) + 1];

	//赋值
	strcpy(this->pString, str);

	//更新字符串长度
	this->m_Size = strlen(str);
}


//拷贝构造
MyString::MyString(const MyString & str)//MyString str2 = str1;
{
	//开辟堆空间
	this->pString = new char[strlen(str.pString) + 1];

	//赋值
	strcpy(this->pString, str.pString);

	//更新字符串长度
	this->m_Size = strlen(str.pString);

}

//析构函数
MyString::~MyString()
{
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}
}


//重载左移运算符
ostream& operator<<(ostream & cout, MyString & str)
{
	cout << str.pString;
	return cout;
}

//重载右移运算符
istream& operator>>(istream & cin, MyString & str)
{
	//释放原来的字符
	if (str.pString != NULL)
	{
		delete[]str.pString;
		str.pString = NULL;
	}

	char buf[1024];
	cin >> buf;//先将用户输入的数据 放入到buf中


	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);


	return cin;
}


//重载=运算符
MyString & MyString::operator=(const char * str)
{
	//先置空
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	//分配内存空间
	this->pString = new char[strlen(str) + 1];

	//赋值
	//字符串拷贝会拷贝 结束符 吗？
	strcpy(this->pString, str);

	//字符串大小更新
	this->m_Size = strlen(str);

	//返回
	return *this;
}

//重载=运算符
MyString & MyString::operator=(const MyString & str)
{
	//先置空
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	//分配内存空间
	this->pString = new char[strlen(str.pString) + 1];

	//赋值
	strcpy(this->pString, str.pString);

	//字符串大小更新
	this->m_Size = strlen(str.pString);

	//返回
	return *this;
}


//重载+运算符
MyString MyString::operator+(const char * str)
{
	//确定总的字符串大小 原本字符串+要追加的字符串
	int newSize = this->m_Size + strlen(str) + 1;

	//分配空间
	char * temp = new char[newSize];
	memset(temp, 0, newSize);

	//追加字符串
	strcat(temp, this->pString);
	strcat(temp, str);

	//建立新的类，将字符串放入 其中=运算符已经重载
	MyString newString = temp;

	//释放堆空间
	delete[]temp;

	//返回新的类
	return newString;
}

//重载+运算符
MyString MyString::operator+(const MyString & str)
{
	//确定总的字符串大小 原本字符串+要追加的字符串
	int newSize = this->m_Size + strlen(str.pString) + 1;

	//分配空间
	char * temp = new char[newSize];
	memset(temp, 0, newSize);

	//追加字符串
	strcat(temp, this->pString);
	strcat(temp, str.pString);

	//建立新的类，将字符串放入 其中=运算符已经重载
	MyString newString = temp;

	//释放堆空间
	delete[]temp;

	//返回新的类
	return newString;
}


//重载[]运算符
char& MyString::operator[](int pos)
{
	return this->pString[pos];
}



//重载==
bool MyString::operator==(const char * str)
{
	return strcmp(this->pString, str) == 0;
}

//重载==
bool MyString::operator==(const MyString & str)
{
	return strcmp(this->pString, str.pString) == 0;
}





























