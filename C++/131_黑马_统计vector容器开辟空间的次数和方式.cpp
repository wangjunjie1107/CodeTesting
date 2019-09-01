#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<list>

//小测试 检测vector容器重新开辟空间的次数 和 每次开辟的容量
void test01()
{
	vector<int>v;
	int num = 0;
	int * p = NULL;
	for (int i = 0;i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;   //统计开辟空间的次数
			cout << "第 " << num << " 次开辟空间   ";
			cout << "此时开辟的空间容量为： " << v.capacity() << endl;//每次新开辟空间时，空间容量的大小
		}
	}
	cout << "在vector容器中插入100000个数据，开辟空间次数为："<< num << endl;	
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
