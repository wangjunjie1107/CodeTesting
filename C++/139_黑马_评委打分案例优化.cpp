/*
create by wangjunjie
2019 4 16

*/

/*
��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
//1. ��������ѡ�֣��ŵ�vector��
//2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//3. sort�㷨��deque�����з�������pop_back pop_frontȥ����ߺ���ͷ�
//4. deque��������һ�飬�ۼӷ������ۼӷ���/d.size()
//5. person.score = ƽ����
*/


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<ctime>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>

//1�����ѡ����
class Person
{
public:

	Person() {};

	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}


	string m_Name;   //����
	int m_Score;	//ƽ����
};

//2���������ѡ������
void createPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0;i < 5;i++)
	{
		//��ʼ������
		string name = "ѡ��";
		name += nameSeed[i];

		//��ʼ������
		int score = 0;

		//�������󲢸���ֵ
		Person p(name, score);

		//��������뵽������ v�����д����5��ѡ�ֵ���Ϣ
		v.push_back(p);
	}
}

//3������5��ѡ��
void setScore(vector<Person>&v)
{
	//v�����д����5��ѡ�ֵ���Ϣ
	//��ѡ�ֵķ�ֵ��Ϣ�����ֵ
	for (vector<Person>::iterator it = v.begin(); it != v.end();it++)
	{
		//׼��deque���� ��� ��ί����
		deque<int>d;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 41 + 60;//0-40 + 60 = 60--100
			d.push_back(score);
		}

		//�鿴10����ί����
		//cout << "ѡ�� " << it->m_Name << "��֣� " << endl;
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;


		//����
		sort(d.begin(), d.end());

		//ȥ����߷� ��ͷ�
		d.pop_back();    //���
		d.pop_front();  //���

		//�ܷ�
		int sum = 0;
		for (deque<int>::iterator dit = d.begin();dit != d.end();dit++)
		{
			sum += *dit;
		}

		//ƽ����
		int average = sum / d.size();

		//��ƽ���ָ�ֵ��Person
		it->m_Score = average;
	}
}

void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������"<< it->m_Name << "  ���䣺  " << it->m_Score << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1�����ѡ����


	//2���������ѡ������
	vector<Person>v;


	//3������5��ѡ��
	createPerson(v);


	//4��ѡ�ִ��
	setScore(v);

	//5����ӡƽ����
	showScore(v);

	////��������
	//for (vector<Person>::iterator it = v.begin(); it != v.end();it++)
	//{
	//	cout << "������ " << (*it).m_Name << " ������ " << it->m_Score << endl;
	//}

	system("pause");
	return EXIT_SUCCESS;
}






