#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include<fstream>

//д�ļ�
void test01()
{
	ofstream ofs; // д�ļ�  out
	ofs.open("./test.txt", ios::out | ios::trunc);
	
	//�ж϶����Ƿ�򿪳ɹ�
	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	ofs << "������Tom" << endl;
	ofs << "���䣺18" << endl;
	ofs << "�Ա���" << endl;

	//�رն���
	ofs.close();
}

//���ļ�
void test02()
{
	ifstream ifs; //���ļ�  in
	ifs.open("./test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//��һ�ַ�ʽ
	/*char buf1[1024] = { 0 };
	while (ifs >> buf1)
	{
		cout << buf1 << endl;
	}*/

	//�ڶ��ַ�ʽ
	/*char buf2[1024] = { 0 };
	while (ifs.getline(buf2,sizeof(buf2)))
	{
		cout << buf2 << endl;
	}*/

	//�����ַ�ʽ
	/*string buf3;
	while (getline(ifs,buf3))
	{
		cout << buf3 << endl;
	}*/

	//�����ַ�ʽ  ���Ƽ�
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
}
int main()
{

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}



