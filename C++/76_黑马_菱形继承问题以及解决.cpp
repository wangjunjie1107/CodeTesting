#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����
class Animal
{
public:
	int m_Age; //����
};

//Animal �� ��Ϊ �����
//����virtual �ؼ���֮�󣬼̳���Ϊ��Ϊ ��̳�
//����
class Sheep :virtual public Animal {};
//����
class Tuo :virtual public Animal {};
//������
class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	//���μ̳е�һ�����⣺�������游��������������ԣ�ʹ��ʱ���ж����ԣ����Խ������������
	//���μ̳еڶ������⣺������������ͬ�ģ������壬�˷��ڴ�
	SheepTuo st;
	st.Sheep::m_Age = 100;
	st.Tuo::m_Age = 200;
	st.m_Age = 300;

	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	cout << st.m_Age << endl;
}

void test02()
{
	SheepTuo st;
	st.m_Age = 100;

	//ͨ��Sheep�ҵ�ƫ����
	//*(int *)&st �ҵ���vbtable
	cout << "Sheep��ƫ������ " << *((int*)*(int *)&st + 1) << endl;

	//ͨ��Tuo�ҵ�ƫ����
	//*((int *)(&st) + 1) �ҵ� vbtable
	cout << "Tuo��ƫ������ " << *((int *)*((int *)(&st) + 1) + 1) << endl;


	//ͨ��Sheep��ƫ���� ��ȡ������m_Age
	cout << "st.m_Age = " << *((int *)((char *)&st + (*((int*)*(int *)&st + 1)))) << endl;
	cout << "st.m_Age = " << ((Animal *)((char *)&st + (*((int*)*(int *)&st + 1))))->m_Age << endl;
}


int main() {
	test01();
	//test02();

	system("pause");
	return EXIT_SUCCESS;
}
