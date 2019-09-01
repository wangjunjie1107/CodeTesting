#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <deque>
#include <algorithm>


/*
3.3.3.1 deque���캯��
deque<T> deqT;//Ĭ�Ϲ�����ʽ
deque(beg, end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
deque(n, elem);//���캯����n��elem����������
deque(const deque &deq);//�������캯����
*/

void test01()
{
	deque<int>d;//Ĭ�Ϲ�����ʽ
	d.push_back(10);
	d.push_back(10);
	d.push_back(10);
	d.push_back(10);
	d.push_back(10);

	deque<int>d2;

	d2.assign(d.begin(), d.end());//���캯����[beg, end)�����е�Ԫ�ؿ���������

	d2.assign(10, 10);//���캯����n��elem����������

	d2 = d;//�������캯��

}

/*
3.3.3.2 deque��ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
deque& operator=(const deque &deq); //���صȺŲ�����
swap(deq);// ��deq�뱾���Ԫ�ػ���
*/

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(10);
	d1.push_front(10);
	d1.push_front(10);

	deque<int>d2;
	d2.assign(d1.begin(), d1.end());//��[beg, end)�����е����ݿ�����ֵ������
	d2.assign(10, 100);//��n��elem������ֵ������

	deque<int>d3;
	d3 = d2; //���صȺŲ�����

	d3.swap(d1);// ��d1�뱾���Ԫ�ػ���

}

/*
3.3.3.3 deque��С����
deque.size();//����������Ԫ�صĸ���
deque.empty();//�ж������Ƿ�Ϊ��
deque.resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��,���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

void PrintDeque(int a)
{
	cout << a << " ";
}

void test03()
{
	deque<int>d1;
	d1.push_back(100);
	d1.push_front(200);
	d1.push_front(200);
	d1.push_front(200);
	d1.push_front(200);

	//����������Ԫ�صĸ���
	cout << d1.size() << endl;

	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;

	}


	//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	d1.resize(20);
	
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��,
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	d1.resize(30, 100);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

}


/*
3.3.3.4 deque˫�˲����ɾ������
push_back(elem);//������β�����һ������
push_front(elem);//������ͷ������һ������
pop_back();//ɾ���������һ������
pop_front();//ɾ��������һ������
*/

void test04()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	d1.pop_back();
	d1.pop_front();
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

}
/*
3.3.3.5 deque���ݴ�ȡ
at(idx);//��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range��
operator[];//��������idx��ָ�����ݣ����idxԽ�磬���׳��쳣��ֱ�ӳ���
front();//���ص�һ�����ݡ�
back();//�������һ������
*/
void test05()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//cout << d1.at(100) << endl;//���idxԽ�磬�׳�out_of_range
	cout << d1[2] << endl;
	cout << d1.front() << endl;//���ص�һ�����ݡ�
	cout << d1.back() << endl;//�������һ������

}



/*
3.3.3.6 deque�������
insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
3.3.3.7 dequeɾ������
clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
*/


void test06()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	

	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	d1.insert(d1.begin(), 100000);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";


	d1.insert(d1.begin(), 2, 200000);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	//��d1��β������������d1����
	int arr[] = { 1,2,3,4 };
	d1.insert(d1.end(), arr, arr + sizeof(arr) / sizeof(int));
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";


	d1.erase(d1.begin(), d1.begin() + 2);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";



	d1.erase(d1.begin());
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";


	d1.clear();
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

}

int main()
{
	//test03();
	//test04();
	//test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;

}
