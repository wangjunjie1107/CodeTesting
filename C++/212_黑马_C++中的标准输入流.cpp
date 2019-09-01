#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

/*
cin.get() //һ��ֻ�ܶ�ȡһ���ַ�
cin.get(һ������) //��һ���ַ�
cin.get(��������) //���Զ��ַ���
cin.getline()
cin.ignore()
cin.peek()
cin.putback()
*/

//cin.get() //һ��ֻ�ܶ�ȡһ���ַ�
void test01()
{
	// as ����һ�λ�ȡa  ���ڶ��λ�ȡs�������λ�ȡ����  �����Ĵεȴ�����
	char ch = cin.get();

	cout << "ch = " << ch << endl;

	ch = cin.get();

	cout << "ch = " << ch << endl;

	ch = cin.get();

	cout << "ch = " << ch << endl;

}

//cin.get()�������� ��ȡ�ַ���
void test02()
{
	char buf[1024] = { 0 };

	cin.get(buf, sizeof(buf)); //��ȡ�ַ�֮�󣬻��з��������ڻ�������

	char ch = cin.get();//�������ڻ������Ļ��з���ȡ

	if (ch == '\n')
	{
		cout << "���з������ڻ�������" << endl;
	}
	else
	{
		cout << "���з�δ�����ڻ�������" << endl;
	}

	cout << buf << endl; //���
}


//cin.getline()��ȡ�ַ���
void test03()
{
	char buf[1024] = { 0 };

	//���з����������ڻ������У����Ҵӻ��������ӵ�
	cin.getline(buf, sizeof(buf));
	char ch = cin.get();

	cout << buf << endl;  // ���

	if (ch == '\n')
	{
		cout << "���з������ڻ�������" << endl;
	}
	else
	{
		cout << "���з�δ�����ڻ�������" << endl;
	}
}

//cin.ignore()����
void test04()
{
	//Ĭ�Ϻ���1���������е��ַ���������д���Ը���
	cin.ignore(2);

	char ch = cin.get();  //��Ҫ��ȡ�������ַ�
	cout << "ch = " << ch << endl;
}

// cin.peek() ͵��
void test05()
{
	//�鿴�������еĵ�һ���ַ�������ȡ��
	char ch = cin.peek();
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;
}

//cin.putback() �Ż�
void test06()
{
	char ch = cin.get();
	cin.putback(ch); //��ch�Żص��������У����ҷŻ�ԭλ

	char buf[1024] = { 0 };
	cin.getline(buf, sizeof(buf));

	cout << "buf = " << buf << endl;
}

//����1
void test07()
{
	cout << "������һ���ַ��������֣�" << endl;

	char c = cin.peek(); //͵���ַ�


	if (c >= '0' && c <= '9')
	{
		int num;
		cin >> num;
		cout << "������������֣�" << num << endl;
	}
	else
	{
		char buf[1024];
		cin >> buf;
		cout << "����������ַ����� " << buf << endl;
	}
}

//����2
void test08()
{
	int num;

	while (true)
	{
		cout << "������1~10֮������֣�" << endl;
		cin >> num;
		if (num > 0 && num < 10)
		{
			cout << "������ȷ  ֵΪ�� " << num << endl;
			break;
		}

		//���ñ�־λ
		cin.clear();
		//��ջ�����
		cin.sync();

		//�������еı�־λ  0���� 1�쳣
		cout << "��־λ�� " << cin.fail() << endl;

		cout << "������������������" << endl;
	}
}



int main()
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();


	system("pause");
	return EXIT_SUCCESS;
}



