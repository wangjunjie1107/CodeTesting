#include "myString.h"


//�вι���
MyString::MyString(const char * str)//MyString str = "abc"
{
	//���ٶѿռ�
	this->pString = new char[strlen(str) + 1];

	//��ֵ
	strcpy(this->pString, str);

	//�����ַ�������
	this->m_Size = strlen(str);
}


//��������
MyString::MyString(const MyString & str)//MyString str2 = str1;
{
	//���ٶѿռ�
	this->pString = new char[strlen(str.pString) + 1];

	//��ֵ
	strcpy(this->pString, str.pString);

	//�����ַ�������
	this->m_Size = strlen(str.pString);

}

//��������
MyString::~MyString()
{
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}
}


//�������������
ostream& operator<<(ostream & cout, MyString & str)
{
	cout << str.pString;
	return cout;
}

//�������������
istream& operator>>(istream & cin, MyString & str)
{
	//�ͷ�ԭ�����ַ�
	if (str.pString != NULL)
	{
		delete[]str.pString;
		str.pString = NULL;
	}

	char buf[1024];
	cin >> buf;//�Ƚ��û���������� ���뵽buf��


	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);


	return cin;
}


//����=�����
MyString & MyString::operator=(const char * str)
{
	//���ÿ�
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	//�����ڴ�ռ�
	this->pString = new char[strlen(str) + 1];

	//��ֵ
	//�ַ��������´�� ������ ��
	strcpy(this->pString, str);

	//�ַ�����С����
	this->m_Size = strlen(str);

	//����
	return *this;
}

//����=�����
MyString & MyString::operator=(const MyString & str)
{
	//���ÿ�
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	//�����ڴ�ռ�
	this->pString = new char[strlen(str.pString) + 1];

	//��ֵ
	strcpy(this->pString, str.pString);

	//�ַ�����С����
	this->m_Size = strlen(str.pString);

	//����
	return *this;
}


//����+�����
MyString MyString::operator+(const char * str)
{
	//ȷ���ܵ��ַ�����С ԭ���ַ���+Ҫ׷�ӵ��ַ���
	int newSize = this->m_Size + strlen(str) + 1;

	//����ռ�
	char * temp = new char[newSize];
	memset(temp, 0, newSize);

	//׷���ַ���
	strcat(temp, this->pString);
	strcat(temp, str);

	//�����µ��࣬���ַ������� ����=������Ѿ�����
	MyString newString = temp;

	//�ͷŶѿռ�
	delete[]temp;

	//�����µ���
	return newString;
}

//����+�����
MyString MyString::operator+(const MyString & str)
{
	//ȷ���ܵ��ַ�����С ԭ���ַ���+Ҫ׷�ӵ��ַ���
	int newSize = this->m_Size + strlen(str.pString) + 1;

	//����ռ�
	char * temp = new char[newSize];
	memset(temp, 0, newSize);

	//׷���ַ���
	strcat(temp, this->pString);
	strcat(temp, str.pString);

	//�����µ��࣬���ַ������� ����=������Ѿ�����
	MyString newString = temp;

	//�ͷŶѿռ�
	delete[]temp;

	//�����µ���
	return newString;
}


//����[]�����
char& MyString::operator[](int pos)
{
	return this->pString[pos];
}



//����==
bool MyString::operator==(const char * str)
{
	return strcmp(this->pString, str) == 0;
}

//����==
bool MyString::operator==(const MyString & str)
{
	return strcmp(this->pString, str.pString) == 0;
}





























