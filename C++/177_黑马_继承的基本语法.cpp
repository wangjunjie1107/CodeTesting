#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//  �̳кô��� �����ظ����룬���Ч��
//  �̳��﷨�� class ���� �� �̳з�ʽ ����
//  ������������  ����  ���ʵ�  ����ĳ�Ա�����ͳ�Ա������public��protected��


//	���� ---  �����ࣨ�̳��ࣩ
//	���� --- ����



//���ü̳�ʵ��ҳ��
class BasePage
{
public:

	//����ͷ��
	void header()
	{
		cout << "��ҳ/������/��½/ע�ᡣ����������ͷ����" << endl;
	}

	//��������б�
	void leftList()
	{
		cout << "Java��Python��C++ѧ�Ʒ��ࣨ��������б�" << endl;
	}


	//�����ײ�
	void footer()
	{
		cout << "�������ġ��������ӡ�վ�ڵ�ͼ�������ײ���" << endl;
	}
};

//Javaѧ��
class Java : public BasePage
{
public:

	//�м���ʾJava�̳�
	void Content()
	{
		cout << "Javaѧ�ƽ̳�����" << endl;
	}
};

//Pythonѧ��
class Python : public BasePage
{
public:

	//�м���ʾPython�̳�
	void Content()
	{
		cout << "Pythonѧ�ƽ̳�����" << endl;
	}
};

//C++ѧ��
class CPlusPlus : public BasePage
{
public:

	//�м���ʾC++�̳�
	void Content()
	{
		cout << "C++ѧ�ƽ̳�����" << endl;
	}
};

//�̳кô��� �����ظ����룬���Ч��
//�̳��﷨�� class ���� �� �̳з�ʽ ����

//	���� ---  �����ࣨ�̳��ࣩ
//	���� --- ����


void test01()
{
	cout << "-------------------------" << endl;
	cout << "Javeҳ�����£�" << endl;
	Java ja;

	//������ʸ���ĳ�Ա����
	ja.header();
	ja.footer();
	ja.leftList();

	//���౾��ĳ�Ա����
	ja.Content();  


	cout << "-------------------------" << endl;
	cout << "Pythonҳ�����£�" << endl;
	Python py;

	//������ʸ���ĳ�Ա����
	py.header();
	py.footer();
	py.leftList();

	//���౾��ĳ�Ա����
	py.Content();


	cout << "-------------------------" << endl;
	cout << "C++ҳ�����£�" << endl;
	CPlusPlus cpp;

	//������ʸ���ĳ�Ա����
	cpp.header();
	cpp.footer();
	cpp.leftList();

	//���౾��ĳ�Ա����
	cpp.Content();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
