#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include<valarray>  //ģ���������


void test()
{
	//valarray������Ϊһ��ģ���࣬�Ա��ܹ�����ͬ����������
	valarray<double>v1;  //һ��double���͵�����
	valarray<int>v2(10); //һ��int���͵����� ӵ��10��Ԫ��
	valarray<char>v3('a', 10);//һ��char���͵����飬ӵ��10��Ԫ�أ�ÿ��Ԫ���� a �����


	double v4[] = { 22,2.2,2232.2,22.2,11.1 };
	valarray<double>v5(v4, 4); //һ��double���͵����� ӵ��4��Ԫ�أ� ��4��Ԫ����v4������ǰ4��Ԫ�س�ʼ��

	valarray<int>v6 = { 4,5,6,5,3,5 }; //��ʼ���б�

	//valarray���෽��
	v6.operator[](1);	  //����ÿ��Ԫ��
	v6.size();			 //���ذ�����Ԫ������
	v6.sum();			 //��������Ԫ�ص��ܺ�
	v6.max();			 //��������Ԫ��
	v6.min();			//������С��Ԫ��
}
