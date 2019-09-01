#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include<valarray>  //模板类的声明


void test()
{
	//valarray被定义为一个模板类，以便能够处理不同的数据类型
	valarray<double>v1;  //一个double类型的数组
	valarray<int>v2(10); //一个int类型的数组 拥有10个元素
	valarray<char>v3('a', 10);//一个char类型的数组，拥有10个元素，每个元素用 a 来填充


	double v4[] = { 22,2.2,2232.2,22.2,11.1 };
	valarray<double>v5(v4, 4); //一个double类型的数组 拥有4个元素， 这4个元素用v4数组中前4个元素初始化

	valarray<int>v6 = { 4,5,6,5,3,5 }; //初始化列表

	//valarray的类方法
	v6.operator[](1);	  //访问每个元素
	v6.size();			 //返回包含的元素数量
	v6.sum();			 //返回所有元素的总和
	v6.max();			 //返回最大的元素
	v6.min();			//返回最小的元素
}
