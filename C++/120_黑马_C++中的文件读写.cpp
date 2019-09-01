#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<fstream>//�ļ���д

//д�ļ�
void test01()
{
	//ofstream ���ƣ���·�������򿪷�ʽ����
	//ofstream ofs("./test.txt", ios::out | ios::trunc);

	ofstream ofs;
	ofs.open("./test.txt", ios::out | ios::trunc);
	
	//�ж϶����Ƿ�򿪳ɹ�
	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}

	ofs << "������Tom" << endl;
	ofs << "���䣺20" << endl;
	ofs << "�Ա���" << endl;

	//�رն���
	ofs.close();

}

//���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("./test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}


	//��һ�ַ�ʽ���ļ�
	char buf[1024] = { 0 };
	while (ifs >> buf) //�����ļ���
	{
		cout << buf << endl;
	}

	//�ڶ��ַ�ʽ  ���ж�
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}

	//�����ַ�ʽ ���ַ���  ���Ƽ�
	char ch;
	while ((ch = ifs.get()) != EOF)
	{
		cout << ch;
	}

	//�����ַ�ʽ ���ַ�����
	string buf1;
	while (getline(ifs,buf1))
	{
		cout << buf << endl;
	}

	ifs.close();//�ļ��ر�
}

int main()
{
	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}

