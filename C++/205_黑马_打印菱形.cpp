#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


// write() ������ʾ�ַ���

//  write()�������������������ַ�ʱ�Զ�ֹͣ��ӡ�ַ���
//  ��ֻ�Ǵ�ӡָ����Ŀ���ַ�����ʹ�������ַ����ı߽硣
void test01()
{
	//����ָ��
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




