#include "myString.h"

//����<<�����
ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString;
	return cout;
}

//���� >> �����
istream& operator>>(istream& cout, MyString& str)
{
	//���ж�ԭ���ͷ����ַ�������������ͷ�
	if (str.pString != NULL)
	{
		free(str.pString);
		str.pString = NULL;
	}
	char buf[1024];
	memset(buf, 0, 1024);
	cin >> buf; //�Ƚ��û���������� ���뵽buf��

	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);

	return cin;
}

//Ĭ�Ϲ���
MyString::MyString()
{
	cout << "Ĭ�Ϲ���" << endl;
	this->pString = NULL;
	this->m_Size = 0;
}

//�вι���
MyString::MyString(const char* str)
{
	//���ٶ����ռ�
	this->pString = new char[strlen(str) + 1];
	//��ֵ
	strcpy(this->pString, str);
	//�����ַ�������
	this->m_Size = strlen(str);

	cout << "�вι������" << endl;
}

//��������
MyString::MyString(const MyString& str)
{
	//���ٶ����ռ�
	this->pString = new char[strlen(str.pString) + 1];
	//��ֵ
	strcpy(this->pString, str.pString);
	//�����ַ�������
	this->m_Size = strlen(str.pString);
}


//���� ==
bool MyString::operator==(const char* str)
{
	return strcmp(this->pString, str) == 0;
}

//���� ==
bool MyString::operator==(const MyString& str)
{
	return strcmp(this->pString, str.pString) == 0;
}


//���� = �����
MyString& MyString::operator=(const char* str)
{
	
	//�жϱ�����Ķ����Ƿ�Ϊ��
	if (this->pString != NULL)
	{
		free(this->pString);
		this->pString = NULL;
	}

	//���ٶ����ռ�
	this->pString = new char[strlen(str) + 1];
	//��ֵ
	strcpy(this->pString, str);
	//�����ַ�������
	this->m_Size = strlen(str);

	return *this;
}


MyString& MyString::operator=(const MyString& str)
{
	

	//�жϱ�����Ķ����Ƿ�Ϊ��
	if (this->pString != NULL)
	{
		free(this->pString);
		this->pString = NULL;
	}

	//���ٶ����ռ�
	this->pString = new char[strlen(str.pString) + 1];
	//��ֵ
	strcpy(this->pString, str.pString);
	//�����ַ�������
	this->m_Size = strlen(str.pString);

	return *this;
}

//���� + �����
MyString MyString::operator+(const char* str)
{
	//�����µĶ����ռ�
	int newSize = this->m_Size + strlen(str) + 1;
	char* temp = new char[newSize];
	//��ֵ
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
	//�����µĶ����ռ�
	char* temp = new char[newSize];
	//��ֵ
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str.pString);


	MyString mystring = temp;
	delete[]temp;

	return mystring;
}

//���� []�����
char& MyString::operator[](int pos)
{
	if (pos < 0 || pos>this->m_Size)
	{
		cout << "pos error" << endl;
		return this->pString[0];
	}

	return this->pString[pos];
}

//����+=
void MyString::operator+=(const char* str)
{
	

	//�����µĶ����ռ�
	int newSize = strlen(this->pString) + strlen(str) + 1;
	char* temp = new char[newSize];
	//��ֵ
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);


	MyString mystring = temp;
	delete[]temp;

	*this = mystring;

}
void MyString::operator+=(const MyString& str)
{
	//�����µĶ����ռ�
	int newSize = strlen(this->pString) + strlen(str.pString) + 1;
	char* temp = new char[newSize];
	//��ֵ
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str.pString);


	MyString mystring = temp;
	delete[]temp;

	*this = mystring;

	
}

//����
MyString::~MyString()
{
	cout << "  " << this->pString << " ��������������" << endl;
	
	if (this->pString != NULL)
	{
		free(this->pString);
		this->pString = NULL;
	}
}