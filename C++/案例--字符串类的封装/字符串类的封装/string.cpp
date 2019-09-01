#include  "string.h"


//重载<<运算符
ostream & operator<<(ostream& cout, MyString & str)
{
	cout << str.pString;
	return cout;
}


//重载>>运算符
istream& operator >> (istream & cin, MyString & str)
{
	//先判断原来释放有字符串，如果有先释放
	if (str.pString != NULL)
	{
		delete[] str.pString;
		str.pString = NULL;
	}

	char buf[1024]; //先将用户输入的数据 放入到buf中
	cin >> buf;

	//只有先将数据放到buf中，才能开辟对应的空间
	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);

	return cin;
}


//默认构造
MyString::MyString()
{
	this->m_Size = 0;
	this->pString = NULL;
};


//有参构造
MyString::MyString(const char * str)
{

	//开辟堆区空间
	this->pString = new char[strlen(str) + 1];
	//赋值
	strcpy(this->pString, str);
	//更新字符串长度
	this->m_Size = strlen(str);
}


//拷贝构造
MyString::MyString(const MyString & str)
{
	//开辟堆区空间
	this->pString = new char[strlen(str.pString) + 1];
	//赋值
	strcpy(this->pString, str.pString);
	//更新字符串长度
	this->m_Size = strlen(str.pString);
}


//重载=运算符 
MyString & MyString::operator=(const MyString & p)
{
	//先判断原来释放有字符串，如果有先释放
	//如果不释放，直接开辟新空间，将导致原有空间得不到释放
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}


	this->pString = new char[strlen(p.pString) + 1];
	strcpy(this->pString, p.pString);

	this->m_Size = strlen(this->pString);

	return *this;
}

//重载=运算符 
MyString & MyString::operator=(const char * str)
{
	//先判断原来释放有字符串，如果有先释放
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);

	this->m_Size = strlen(this->pString);

	return *this;
}


//重载+运算符
MyString MyString::operator+(const MyString & p)
{
	//计算新开辟空间大小
	int newSize = this->m_Size + strlen(p.pString) + 1;

	//开辟空间
	char * temp = new char[newSize];

	//字符串追加
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, p.pString);

	// 隐式调用 有参构造 
	MyString newString = temp;
	newString.m_Size = newSize;

	delete[]temp;

	return newString;
}

//重载+运算符
MyString MyString::operator+(const char * str)
{
	//计算新开辟空间大小
	int newSize = this->m_Size + strlen(str) + 1;

	//开辟空间
	char * temp = new char[newSize];

	//字符串追加
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);

	// 隐式调用 有参构造
	MyString newString = temp;
	newString.m_Size = newSize;

	delete[]temp;

	return newString; //值拷贝  函数结束后 析构函数将 newString 析构
}


//重载+=运算符
MyString & MyString::operator+=(const MyString & p1)
{
	//计算新开辟空间大小
	int newSize = this->m_Size + strlen(p1.pString) + 1;

	//开辟空间
	char * temp = new char[newSize];

	//字符串追加
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, p1.pString);

	//  将新的字符串赋值到  *this  中
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	// = 运算符重载
	*this = temp;

	//释放临时数组
	delete[]temp;
	temp = NULL;

	return *this;
}




//重载+=运算符
MyString & MyString::operator+=(const char * p2)
{
	//计算新开辟空间大小
	int newSize = this->m_Size + strlen(p2) + 1;

	//开辟空间
	char * temp = new char[newSize];

	//字符串追加
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, p2);


	//先将原有字符串置为空
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	// = 运算符重载
	*this = temp;


	//释放临时数组
	delete[]temp;
	temp = NULL;

	return *this;
}



//重载[]运算符
char & MyString::operator[](int pos)
{
	return this->pString[pos];
}

//重载==
bool MyString::operator==(const MyString & p)
{
	if (strcmp(this->pString, p.pString) == 0)
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const char * str)
{
	return strcmp(this->pString, str) == 0;
}


//析构函数
MyString::~MyString()
{
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
		this->m_Size = 0;
	}
}
