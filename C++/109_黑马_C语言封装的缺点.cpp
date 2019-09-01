#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//人
struct Person
{
	char m_Name[64]; //姓名
	int m_Age; // 年龄
};

//吃饭
void personEat(struct Person * p)
{
	printf("%s在吃人饭\n", p->m_Name);
}

//狗
struct Dog
{
	char m_Name[64]; //姓名
	int m_Age; // 年龄
};


//吃饭
void DogEat(struct Dog* dog)
{
	printf("%s在吃狗粮\n", dog->m_Name);
}


void test01()
{
	//创建人
	struct Person p1;
	strcpy(p1.m_Name, "张三");
	p1.m_Age = 19;

	personEat(&p1);


	//创建狗
	struct Dog d1;
	strcpy(d1.m_Name, "旺财");
	d1.m_Age = 10;

	DogEat(&d1);

}

void test02()
{
	struct Person p1;
	strcpy(p1.m_Name, "老王");
	p1.m_Age = 10;

	DogEat(&p1); //人吃狗粮 ，调用错误 在C语言下只会有警告 并不会出错
}


//C语言封装 缺点：将属性 和行为分离 ，导致不同类型之间 可以互相调用不同行为

int main() 
{

	//test01();

	test02();

	system("pause");
	return EXIT_SUCCESS;
}
