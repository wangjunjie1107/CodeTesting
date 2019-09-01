#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

/*

		使用new和delete时， 遵守以下规则：

				（1）不要使用delete来释放不是new分配的内存
				（2）不要使用delete释放同一个内存块两次
				（3）如果使用new[]为数组分配内存，则应使用delete[]来释放
				（4）如果使用new[]为一个实体分配内存，则应使用delete（没有方括号）来释放。
				（5）对空指针应用delete是安全的。

*/ 
int main()
{



	int    * temp1 = new int;
	double * temp2 = new double;
	char   * temp3 = new char [10];


	delete temp1;
	delete temp2;
	delete[]temp3;



	system("pause");
	return EXIT_SUCCESS;
}
