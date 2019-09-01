#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//数组类的封装
template<class T>
class MyArray
{
public:
	//默认构造函数
	MyArray() {};

	//有参构造函数
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
	}


	//拷贝构造函数
	MyArray(const MyArray & arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		
		//开辟堆空间
		this->pAddress = new T[arr.m_Capacity];
		
		//赋值
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}

	// = 运算符重载
	MyArray& operator=(MyArray & arr)
	{
		//先判断原有堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}


		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//开辟堆空间
		this->pAddress = new T[arr.m_Capacity];

		//赋值
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	// [] 运算符重载
	T operator[](int pos)
	{
		if (pos >= this->m_Capacity || pos < 0)
		{
			cout << "位置错误,返回首地址数据！" << endl;
			return this->pAddress[0];
		}

		return this->pAddress[pos];
	}

	//尾插
	void push_back(const T & value)
	{
		if (this->m_Size == this->m_Capacity)
		{
			cout << "数组已满" << endl;
			return;
		}

		this->pAddress[this->m_Size] = value;
		this->m_Size++;
	}

	//获取容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取数组大小
	int getSize()
	{
		return this->m_Size;
	}


//属性
private:
	T * pAddress; //指向堆区数组指针
	int m_Capacity;//数组容量
	int m_Size;//数组大小
};



//int数组测试

void printInt(MyArray<int> & pInt)
{
	for (int i = 0;i < pInt.getSize();i++)
	{
		cout << pInt[i] << "  ";
	}
	cout << endl;
	cout << "数组容量为：" << pInt.getCapacity() << endl;

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


//Person 数组测试
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
		cout << "姓名： " << arr[i].m_Name << endl;
		cout << "年龄： "<< arr[i].m_Age << endl;
	}
	cout << endl;
}
void testClass()
{
	//分配10个Person类大小的空间
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
	
	p2 = p5;// = 运算符重载
	personArray[2];//[]运算符重载
}
int main()
{
	testInt();
	testClass();

	system("pause");
	return EXIT_SUCCESS;

}
