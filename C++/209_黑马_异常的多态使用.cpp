#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//�쳣�Ļ���
class BaseException
{
public:
	virtual void pointError()
	{

	}
};

//��ָ���쳣
class NULLPointerException :public BaseException
{
public:
	 void pointError()
	{
		cout << "��ָ���쳣" << endl;
	}
};

//Խ���쳣
class OutOfRangeException :public BaseException
{
public:
	 void pointError()
	{
		cout << "Խ���쳣" << endl;
	}
};


void doWork(int * a,int len)
{
	if (a == NULL)
	{
		throw NULLPointerException();
	}
	else if (len > 5)
	{
		throw OutOfRangeException();
	}
}

void test()
{
	int b = 2; 
	int * a = NULL ;
	int len = 6;

	try
	{
		doWork(a,len);
	}
	catch(BaseException & e)
	{
		e.pointError(); //����ָ��ָ���������  ��̬��ʹ�� 
	}

}

int main()
{
	test();

	system("pause");
	return 0;
}




