#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include<ctime>  //describes clock() function, clock_t type

int main()
{
	cout << "Enter the delay time ,in seconds: ";
	float secs;
	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC; //convert to clock  ticks

	cout << "Starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	
	cout << "done\n";

	system("pause");
	return 0;

}
