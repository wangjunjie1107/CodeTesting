#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	a = 19.99 + 11.99;
	b = (int)19.99 + (int)11.99;
	c = int(19.99) + int(11.99);
	
	cout<< a <<endl; 
	cout<< b <<endl; 
	cout<< c <<endl; 
	
	char ch = 'Z';
	cout<<"the code for "<< ch <<" is ";
	cout<< int(ch) <<endl;
	
	
	cout<<"Yes,the code is ";
	cout<<static_cast<int>(ch)<<endl;
	
	
	return 0;
 } 
