#include  "string.h"


//����<<�����
ostream & operator<<(ostream& cout, MyString & str)
{
	cout << str.pString;
	return cout;
}


//����>>�����
istream& operator >> (istream & cin, MyString & str)
{
	//���ж�ԭ���ͷ����ַ�������������ͷ�
	if (str.pString != NULL)
	{
		delete[] str.pString;
		str.pString = NULL;
	}

	char buf[1024]; //�Ƚ��û���������� ���뵽buf��
	cin >> buf;

	//ֻ���Ƚ����ݷŵ�buf�У����ܿ��ٶ�Ӧ�Ŀռ�
	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);

	return cin;
}


//Ĭ�Ϲ���
MyString::MyString()
{
	this->m_Size = 0;
	this->pString = NULL;
};


//�вι���
MyString::MyString(const char * str)
{

	//���ٶ����ռ�
	this->pString = new char[strlen(str) + 1];
	//��ֵ
	strcpy(this->pString, str);
	//�����ַ�������
	this->m_Size = strlen(str);
}


//��������
MyString::MyString(const MyString & str)
{
	//���ٶ����ռ�
	this->pString = new char[strlen(str.pString) + 1];
	//��ֵ
	strcpy(this->pString, str.pString);
	//�����ַ�������
	this->m_Size = strlen(str.pString);
}


//����=����� 
MyString & MyString::operator=(const MyString & p)
{
	//���ж�ԭ���ͷ����ַ�������������ͷ�
	//������ͷţ�ֱ�ӿ����¿ռ䣬������ԭ�пռ�ò����ͷ�
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

//����=����� 
MyString & MyString::operator=(const char * str)
{
	//���ж�ԭ���ͷ����ַ�������������ͷ�
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


//����+�����
MyString MyString::operator+(const MyString & p)
{
	//�����¿��ٿռ��С
	int newSize = this->m_Size + strlen(p.pString) + 1;

	//���ٿռ�
	char * temp = new char[newSize];

	//�ַ���׷��
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, p.pString);

	// ��ʽ���� �вι��� 
	MyString newString = temp;
	newString.m_Size = newSize;

	delete[]temp;

	return newString;
}

//����+�����
MyString MyString::operator+(const char * str)
{
	//�����¿��ٿռ��С
	int newSize = this->m_Size + strlen(str) + 1;

	//���ٿռ�
	char * temp = new char[newSize];

	//�ַ���׷��
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);

	// ��ʽ���� �вι���
	MyString newString = temp;
	newString.m_Size = newSize;

	delete[]temp;

	return newString; //ֵ����  ���������� ���������� newString ����
}


//����+=�����
MyString & MyString::operator+=(const MyString & p1)
{
	//�����¿��ٿռ��С
	int newSize = this->m_Size + strlen(p1.pString) + 1;

	//���ٿռ�
	char * temp = new char[newSize];

	//�ַ���׷��
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, p1.pString);

	//  ���µ��ַ�����ֵ��  *this  ��
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	// = ���������
	*this = temp;

	//�ͷ���ʱ����
	delete[]temp;
	temp = NULL;

	return *this;
}




//����+=�����
MyString & MyString::operator+=(const char * p2)
{
	//�����¿��ٿռ��С
	int newSize = this->m_Size + strlen(p2) + 1;

	//���ٿռ�
	char * temp = new char[newSize];

	//�ַ���׷��
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, p2);


	//�Ƚ�ԭ���ַ�����Ϊ��
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}

	// = ���������
	*this = temp;


	//�ͷ���ʱ����
	delete[]temp;
	temp = NULL;

	return *this;
}



//����[]�����
char & MyString::operator[](int pos)
{
	return this->pString[pos];
}

//����==
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


//��������
MyString::~MyString()
{
	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
		this->m_Size = 0;
	}
}
