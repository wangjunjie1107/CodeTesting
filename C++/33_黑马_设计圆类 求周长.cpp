#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


const double PI = 3.14;
//���Բ��

//�﷨�� class + ����{ };
class Circle
{
	//��������д��������� �� ��Ϊ
	//����Ȩ��
public:
	
	//�ܳ�
	int m_R;


	//���ܳ� ��Ϊ
	double calculateZC()
	{
		return 2 * PI * m_R;
	}
	

	//ͨ������ ���뾶���Ը�ֵ
	void setR(int r)
	{
		m_R = r;
	}


	//ͨ������ ����Բ�İ뾶
	int getR()
	{
		return m_R;
	}
	
};


void test01()
{
	//ͨ��Բ�� ������ Բ����
	Circle c1;//c1Ϊ����

	c1.setR(10);

	cout << "c1�İ뾶�ǣ� " << c1.getR() << endl;
	cout << "c1���ܳ�Ϊ�� " << c1.calculateZC() << endl;

}
int main()
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}
