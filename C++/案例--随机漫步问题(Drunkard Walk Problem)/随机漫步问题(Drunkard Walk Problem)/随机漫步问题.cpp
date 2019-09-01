#include<iostream>
#include<cstdlib>
#include<ctime>
#include "vector.h"
using namespace std;

void test()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	double direction;//方向
	Vector step; //走的长度
	Vector result(0.0, 0.0);//结果
	unsigned long steps = 0; //统计步数
	double target; //目的地
	double dstep; //步长

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
		{
			break;
		}

		while (result.mag_val() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, 1);
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the subject has "
			"the following location: " << endl;
		cout << result << endl;
		result.setModeTwo();
		cout << " or\n" << result << endl;

		cout << "Average outward distance per step = "
			<< result.mag_val() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}
	cout << "Bye!\n";
	
	
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}