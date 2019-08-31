#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

struct s
{
	int number;
	int x;
};

bool myCmp(s s1, s s2)
{
	//一共两级排序
	if (s1.x != s2.x)
	{
		return s1.x < s2.x;
	}
	else
	{
		return s1.number < s2.number;
	}
}



ostream& operator<<(ostream& out, s s)
{
	out << s.number << " " << s.x << endl;
	return out;
}

void test01()
{
	s s1 = { 111,44 };
	s s2 = { 22,44 };
	s s3 = { 33,111 };
	s s4 = { 44,7 };
	s s5 = { 55,6 };

	s s[] = { s1,s2,s3,s4,s5 };

	sort(s, s + 5, myCmp);
	for (int i = 0; i < 5; i++)
	{
		cout << s[i];
	}
	


}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

