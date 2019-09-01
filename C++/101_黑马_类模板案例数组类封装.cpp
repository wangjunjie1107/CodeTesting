#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//������ķ�װ
template<class T>
class MyArray
{
public:
	//Ĭ�Ϲ��캯��
	MyArray() {};

	//�вι��캯��
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
	}


	//�������캯��
	MyArray(const MyArray & arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		
		//���ٶѿռ�
		this->pAddress = new T[arr.m_Capacity];
		
		//��ֵ
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}

	// = ���������
	MyArray& operator=(MyArray & arr)
	{
		//���ж�ԭ�ж����Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}


		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//���ٶѿռ�
		this->pAddress = new T[arr.m_Capacity];

		//��ֵ
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	// [] ���������
	T operator[](int pos)
	{
		if (pos >= this->m_Capacity || pos < 0)
		{
			cout << "λ�ô���,�����׵�ַ���ݣ�" << endl;
			return this->pAddress[0];
		}

		return this->pAddress[pos];
	}

	//β��
	void push_back(const T & value)
	{
		if (this->m_Size == this->m_Capacity)
		{
			cout << "��������" << endl;
			return;
		}

		this->pAddress[this->m_Size] = value;
		this->m_Size++;
	}

	//��ȡ����
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ�����С
	int getSize()
	{
		return this->m_Size;
	}


//����
private:
	T * pAddress; //ָ���������ָ��
	int m_Capacity;//��������
	int m_Size;//�����С
};



//int�������

void printInt(MyArray<int> & pInt)
{
	for (int i = 0;i < pInt.getSize();i++)
	{
		cout << pInt[i] << "  ";
	}
	cout << endl;
	cout << "��������Ϊ��" << pInt.getCapacity() << endl;

}


void testInt()
{
	MyArray<int>pInt(10);

	for (int i = 0;i < pInt.getCapacity(); i++)
	{
		pInt.push_back(i + 1000);
	}

	printInt(pInt);
}


//Person �������
class Person
{
public:
	Person() {};
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	int m_Age;
	string m_Name;
};


void printPerson(MyArray<Person> & arr)
{
	for (int i = 0;i < arr.getSize(); i++)
	{
		cout << "������ " << arr[i].m_Name << endl;
		cout << "���䣺 "<< arr[i].m_Age << endl;
	}
	cout << endl;
}
void testClass()
{
	//����10��Person���С�Ŀռ�
	MyArray<Person>personArray(10);

	Person p1("a", 18);
	Person p2("b", 19);
	Person p3("c", 20);
	Person p4("d", 21);
	Person p5("e", 22);

	personArray.push_back(p1);
	personArray.push_back(p2);
	personArray.push_back(p3);
	personArray.push_back(p4);
	personArray.push_back(p5);

	printPerson(personArray);
	
	p2 = p5;// = ���������
	personArray[2];//[]���������
}
int main()
{
	testInt();
	testClass();

	system("pause");
	return EXIT_SUCCESS;

}
