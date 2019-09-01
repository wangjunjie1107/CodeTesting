#include<iostream>
using namespace std;

int main()
{
		
	// fill(int n)    填充字符   
	//新填充的字符一直有效 直到更改它
	//  width(int n)  设置字段宽度  只作用于下一个目标 

	//默认填充的字符 为 空格 
	int n = 10;
	cout.width(8); 
	cout << n<< endl;
	
	//更改填充字符 	
	cout.fill('*'); 
	cout.width(8);  
	cout << n<< endl;
	

	//更改填充字符 
	cout.fill('$');
	cout.width(8);
	cout<< n << endl; 
	
	
	
	return 0;
 } 
