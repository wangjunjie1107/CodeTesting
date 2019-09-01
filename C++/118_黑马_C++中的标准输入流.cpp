#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
cin.get()				   //һ��ֻ�ܶ�ȡһ���ַ�
cin.get(һ������)		  //��һ���ַ�
cin.get(��������)		 //���Զ��ַ���
cin.getline()			//��ȡһ���ַ���
cin.ignore()	 	   //�����ַ�
cin.peek()			  //͵���ַ�
cin.putback()		 //�Ż��ַ�������
*/

void test01()
{
	//һ�����������ַ�

	char ch = cin.get();//��ȡһ���ַ�

	cout << "ch = " << ch << endl;

	ch = cin.get();//��ȡ�ڶ����ַ�
	cout << "ch = " << ch << endl;

	ch = cin.get();//��ȡ���з�
	cout << "ch = " << ch << endl;

	ch = cin.get();//�ȴ���������
	cout << "ch = " << ch << endl;

}

//cin.get()��������  ��ȡ�ַ���
void test02()
{
	char buf[1024] = { 0 };

	cin.get(buf, sizeof(buf));//���з������ڻ�������

	char ch = cin.get();//��cin.get()�����з�
	if (ch == '\n')
	{
		cout << "���з������ڻ�������" << endl;
	}
	else
	{
		cout << "���з�δ�����ڻ�������" << endl;
	}

	cout << "buf = " << buf << endl;
}


//cin.getline()��ȡ�ַ���
void test03()
{
	char buf[1024] = { 0 };

	//���з����������ڻ������У����Ҵӻ��������ӵ�
	cin.getline(buf, sizeof(buf));

	char ch = cin.get();
	if (ch == '\n')
	{
		cout << "���з������ڻ�������" << endl;
	}
	else
	{
		cout << "���з�δ�����ڻ�������" << endl;
	}

	cout << "buf = " << buf << endl;
}


//cin.ignore()����
void test04()
{
	//����ǰ�����ַ�
	cin.ignore(2);//Ĭ�Ϻ��Ի������е�1���ַ����ɼӲ����޸�

	char buf[1024] = { 0 };

	cin.getline(buf, 1024);
	cout << "buf = " << buf << endl;
}

//cin.peek() ͵����һ���ַ�  ������ӻ�����������
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

//cin.putback()�Ż�
void test06()
{
	char ch = cin.get();
	cin.putback(ch);//��ch�Żص��������У����ҷŻ�ԭλ��


	char buf[1024] = { 0 };
	cin.getline(buf, 1024);
	cout << "buf = " << buf << endl;

}

//����1 �����û���������� �ж������ֻ����ַ�
void test07()
{
	cout << "������һ���ַ������֣�" << endl;
	char c = cin.peek();
	if (c >= '0'&&c <= 9)
	{
		int num;
		cin >> num;
		cout << "������������֣�" << num << endl;
	}
	else
	{
		char buf[1024] = { 0 };
		cin >> buf;
		cout << "����������ַ�����" << buf << endl;
	}
}

//����2  ���û����� 1 ~ 10֮������֣��������������������
void test08()
{
	int num;
	while (true)
	{
		cout << "������1~10֮������֣�" << endl;
		cin >> num;
		if (num > 1 && num < 10)
		{
			cout << "������ȷ��ֵΪ��" << num << endl;
			break;
		}

		//���ñ�־λ
		cin.clear();


		//��ջ�����   2013���� 2015���� cin.ignore()/ cin.getline();
		char buf[1024] = { 0 };
		cin.getline(buf,1024);
		memset(buf, 0, 1024);



		//�������еı�־λ  0����   1�쳣
		cout << "��־λ�� " << cin.fail() << endl;

		//cout << "������������������" << endl;
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
	test08();


	system("pause");
	return EXIT_SUCCESS;
}
