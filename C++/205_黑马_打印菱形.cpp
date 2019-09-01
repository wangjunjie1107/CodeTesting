#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


// write() 用于显示字符串

//  write()方法并不会在遇到空字符时自动停止打印字符，
//  而只是打印指定书目的字符，即使超出了字符串的边界。
void test01()
{
	//常量指针
	const char * state1 = "**************";
	const char * state2 = "             ";

	int j = 1;
	for (int i = 10; i > 0; i--)
	{

		if (j == 1)
		{
			cout.write(state2, i);
			cout.write(state1, j);
			cout << endl;
		}


		cout.write(state2, i);
		if(j <= 10)
		{
			cout.write(state1, j);
			cout.write(state1, j);
			
			j++;
		}
		
		cout << endl;
		
	}
	 
	int k = 10;
	for (int i = 1; i <= 10; i++)
	{
		cout.write(state2, i);


		if (k > 0)
		{
			cout.write(state1, k);
			cout.write(state1, k);
			k--;
		}
		cout << endl;

		if (k == 0)
		{
			cout.write(state2, i);
			cout.write(state1, 1);
			cout << endl;
		}
	}

}



int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




