#include<iostream> 
using namespace std;
int main()
{	
int n;
	n=sizeof(short int);
	cout<<"short int"<<"\t"<<n<<endl;
	n=sizeof(int);
	cout<<"int"<<"\t"<<n<<endl;
	n=sizeof(long int);
	cout<<"long int"<<"\t"<<n<<endl;
	n=sizeof(char);
	cout<<"char"<<"\t"<<n<<endl;
	n=sizeof(bool);
	cout<<"bool"<<"\t"<<n<<endl;
	n=sizeof(float);
	cout<<"float"<<"\t"<<n<<endl;
	n=sizeof(double);
	cout<<"double"<<"\t"<<n<<endl;
	return 0;
	
	
	
 } 
