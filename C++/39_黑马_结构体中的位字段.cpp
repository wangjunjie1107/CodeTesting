#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

struct Person
{
	unsigned int str : 4; //4 bit for str value
	int age : 4; //4 bit for age value
	bool goodIn : 1; //1 bit for goodIn value


};
int main() 
{
	
	system("pause");
	return EXIT_SUCCESS;
}
