#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//羊类
class Animal
{
public:
	int m_Age; //年龄
};

//Animal 类 成为 虚基类
//加上virtual 关键字之后，继承行为成为 虚继承
//羊类
class Sheep :virtual public Animal {};
//驼类
class Tuo :virtual public Animal {};
//羊驼类
class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	//菱形继承第一个问题：从最上面父类继续下来的属性，使用时候有二义性，可以解决，加作用域
	//菱形继承第二个问题：数据有两份相同的，无意义，浪费内存
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

	//通过Sheep找到偏移量
	//*(int *)&st 找到了vbtable
	cout << "Sheep的偏移量： " << *((int*)*(int *)&st + 1) << endl;

	//通过Tuo找到偏移量
	//*((int *)(&st) + 1) 找到 vbtable
	cout << "Tuo的偏移量： " << *((int *)*((int *)(&st) + 1) + 1) << endl;


	//通过Sheep的偏移量 获取到具体m_Age
	cout << "st.m_Age = " << *((int *)((char *)&st + (*((int*)*(int *)&st + 1)))) << endl;
	cout << "st.m_Age = " << ((Animal *)((char *)&st + (*((int*)*(int *)&st + 1))))->m_Age << endl;
}


int main() {
	test01();
	//test02();

	system("pause");
	return EXIT_SUCCESS;
}
