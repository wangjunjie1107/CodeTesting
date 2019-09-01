#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<iterator>  //copy中使用 ostream_iterator 的头文件

/*
copy算法 将容器内指定范围的元素拷贝到另一容器中
@param beg 容器开始迭代器
@param end 容器结束迭代器
@param dest 目标起始迭代器
*/
void test01()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	vector<int>v2;
	v2.resize(v.size()); //开辟空间

	//copy
	copy(v.begin(), v.end(), v2.begin());

	//打印
	for_each(v2.begin(), v2.end(), [](int val) {cout << val << " ";});
	cout << endl;
	
	
	//利用copy函数打印
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}


/*
replace算法 将容器内指定范围的旧元素修改为新元素
@param beg 容器开始迭代器
@param end 容器结束迭代器
@param oldvalue 旧元素
@param newvalue 新元素

replace_if算法 将容器内指定范围满足条件的元素替换为新元素
@param beg 容器开始迭代器
@param end 容器结束迭代器
@param callback函数回调或者谓词(返回Bool类型的函数对象)
@param oldvalue 新元素
*/
class ReplaceIF
{
public:
	bool operator()(int val)
	{
		return val > 3;
	}
};

void test02()
{
	vector<int>v;

	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);


	//将容器中的 3 替换为 333
	replace(v.begin(), v.end(), 3, 333);

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;


	//将所有大于 3 的值 替换为333
	replace_if(v.begin(), v.end(), ReplaceIF(), 333);


	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}


/*
swap算法 互换两个容器的元素
@param c1容器1
@param c2容器2
*/
void test03()
{
	vector<int>v1;
	vector<int>v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	cout << "交换前结果：" << endl;
	cout << "v1：" << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "v2：" << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	//交换两个容器的元素
	swap(v1, v2);


	cout << "交换后结果：" << endl;
	cout << "v1：" << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "v2：" << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main() 
{

	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}













