#include<iostream>
using namespace std;

int main()
{
		
	// fill(int n)    ����ַ�   
	//�������ַ�һֱ��Ч ֱ��������
	//  width(int n)  �����ֶο��  ֻ��������һ��Ŀ�� 

	//Ĭ�������ַ� Ϊ �ո� 
	int n = 10;
	cout.width(8); 
	cout << n<< endl;
	
	//��������ַ� 	
	cout.fill('*'); 
	cout.width(8);  
	cout << n<< endl;
	

	//��������ַ� 
	cout.fill('$');
	cout.width(8);
	cout<< n << endl; 
	
	
	
	return 0;
 } 
