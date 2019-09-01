#include<iostream>
#include<cstdlib>
#include<ctime>
#include "vector.h"
using namespace std;

void test()
{
	//���������
	srand((unsigned int)time(NULL));

	double direction;//����
	Vector step; //�ߵĳ���
	Vector result(0.0, 0.0);//���
	unsigned long steps = 0; //ͳ�Ʋ���
	double target; //Ŀ�ĵ�
	double dstep; //����

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