#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//����������ࣨCube)
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

class Cube
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}

	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}

	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}

	//��ȡ���
	int getS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;
	}

	//��ȡ���
	int getV()
	{
		return m_H * m_L * m_W;
	}

	//ͨ����Ա���� �ж������������Ƿ����
	bool isSameByMem(Cube & c) //�������жϵ������������
	{
		return m_L == c.getL() && m_H == c.getH() && m_W == c.getW();
	}

private:
	//��
	int m_L;
	//��
	int m_W;
	//��
	int m_H;
};

//ͨ��ȫ�ֺ��� �ж������������Ƿ����
//�������Ϊ�����������
bool isSame(Cube &c1, Cube &c2)
{
	c1.setH(10);  //���ô���ֱ�Ӹ���ԭ����ֵ
	c2.setH(10);
	return c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW();
}

//����
void test()
{
	Cube c1;//ʵ���� ���������

	//����������ĳ����
	int length, width, high;
	cout << "������������ĳ������ߣ� ";
	cin >> length >> width >> high;
	c1.setH(high);
	c1.setW(width);
	c1.setL(length);

	//��ȡ��������
	cout << "c1�����Ϊ�� " << c1.getS() << endl;
	cout << "c1�����Ϊ�� " << c1.getV() << endl;



	Cube c2;//׼���ڶ���������
	//����������ĳ����
	cout << "������ڶ���������ĳ������ߣ� ";
	cin >> length >> width >> high;
	c2.setH(high);
	c2.setW(width);
	c2.setL(length);

	//��ȡ��������
	cout << "c2�����Ϊ�� " << c2.getS() << endl;
	cout << "c2�����Ϊ�� " << c2.getV() << endl;



	cout << "--------------------------------------" << endl;
	//ͨ��ȫ�ֺ����ж� �����������Ƿ���ͬ
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "ȫ�ֺ����жϣ�c1��c2����ȵġ�" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϣ�c1��c2�ǲ���ȵġ�" << endl;
	}

	cout << "::::" << c1.getH() << c2.getH() << endl;

	ret = c1.isSameByMem(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ�c1��c2����ȵġ�" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵġ�" << endl;
	}



}
int main() 
{
	test();



	system("pause");
	return EXIT_SUCCESS;
}
