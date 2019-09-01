#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector> //类似于单端数组的容器
#include<algorithm>
using namespace std;

void Myprint(string s)
{
	cout << s;
}
void test07()
{
	string str = "www.itcast.com.cn";

	vector<string>v;

	// www.itcast.com.cn  不要小数点存放到v中
	int pos = -1;
	int start = 0;
	while (true)
	{
		pos = str.find('.', start);
		if (pos == -1)
		{
			string subS = str.substr(start, str.size() - start);
			v.push_back(subS);
			break;
		}

		string subS = str.substr(start, pos - start);

		v.push_back(subS);

		start = pos + 1;
	}

	for_each(v.begin(), v.end(), Myprint);


}



int main() 
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	//test08();
	//test09();
	//test10();
	//test11();

	system("pause");
	return EXIT_SUCCESS;
}
