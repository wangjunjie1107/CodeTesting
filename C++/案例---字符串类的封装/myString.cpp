#include "myString.h"

//重载<<运算符
ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString;
	return cout;
}

//重载 >> 运算符
istream& operator>>(istream& cout, MyString& str)
{
	//先判断原来释放有字符串，如果有先释放
	if (str.pString != NULL)
	{
		free(str.pString);
		str.pString = NULL;
	}
	char buf[1024];
	memset(buf, 0, 1024);
	cin >> buf; //先将用户输入的数据 放入到buf中

	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);

	return cin;
}

//默认构造
MyString::MyString()
{
	cout << "默认构造" << endl;
	this->pString = NULL;
	this->m_Size = 0;
}

//有参构造
MyString::MyString(const char* str)
{
	//开辟堆区空间
	this->pString = new char[strlen(str) + 1];
	//赋值
	strcpy(this->pString, str);
	//更新字符串长度
	this->m_Size = strlen(str);

	cout << "有参构造调用" << endl;
}

//拷贝构造
MyString::MyString(const MyString& str)
{
	//开辟堆区空间
	this->pString = new char[strlen(str.pString) + 1];
	//赋值
	strcpy(this->pString, str.pString);
	//更新字符串长度
	this->m_Size = strlen(str.pString);
}


//重载 ==
bool MyString::operator==(const char* str)
{
	return strcmp(this->pString, str) == 0;
}

//重载 ==
bool MyString::operator==(const MyString& str)
{
	return strcmp(this->pString, str.pString) == 0;
}


//重载 = 运算符
MyString& MyString::operator=(const char* str)
{
	
	//判断本对象的堆区是否为空
	if (this->pString != NULL)
	{
		free(this->pString);
		this->pString = NULL;
	}

	//开辟堆区空间
	this->pString = new char[strlen(str) + 1];
	//赋值
	strcpy(this->pString, str);
	//更新字符串长度
	this->m_Size = strlen(str);

	return *this;
}


MyString& MyString::operator=(const MyString& str)
{
	

	//判断本对象的堆区是否为空
	if (this->pString != NULL)
	{
		free(this->pString);
		this->pString = NULL;
	}

	//开辟堆区空间
	this->pString = new char[strlen(str.pString) + 1];
	//赋值
	strcpy(this->pString, str.pString);
	//更新字符串长度
	this->m_Size = strlen(str.pString);

	return *this;
}

//重载 + 运算符
MyString MyString::operator+(const char* str)
{
	//开辟新的堆区空间
	int newSize = this->m_Size + strlen(str) + 1;
	char* temp = new char[newSize];
	//赋值
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);


	MyString mystring = temp;
	delete[]temp;

	
	return mystring;
}

MyString MyString::operator+(const MyString& str)
{
	
	int newSize = (this->m_Size + strlen(str.pString) + 1);
	//开辟新的堆区空间
	char* temp = new char[newSize];
	//赋值
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str.pString);


	MyString mystring = temp;
	delete[]temp;

	return mystring;
}

//重载 []运算符
char& MyString::operator[](int pos)
{
	if (pos < 0 || pos>this->m_Size)
	{
		cout << "pos error" << endl;
		return this->pString[0];
	}

	return this->pString[pos];
}

//重载+=
void MyString::operator+=(const char* str)
{
	

	//开辟新的堆区空间
	int newSize = strlen(this->pString) + strlen(str) + 1;
	char* temp = new char[newSize];
	//赋值
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);


	MyString mystring = temp;
	delete[]temp;

	*this = mystring;

}
void MyString::operator+=(const MyString& str)
{
	//开辟新的堆区空间
	int newSize = strlen(this->pString) + strlen(str.pString) + 1;
	char* temp = new char[newSize];
	//赋值
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str.pString);


	MyString mystring = temp;
	delete[]temp;

	*this = mystring;

	
}

//析构
MyString::~MyString()
{
	cout << "  " << this->pString << " 的析构函数调用" << endl;
	
	if (this->pString != NULL)
	{
		free(this->pString);
		this->pString = NULL;
	}
}