#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


//ѧУ����
const long long schoolNumber = 1000;

void test01()
{
	//��¼ѧУ�ֵܷ�����
	int school[schoolNumber] = { 0 };

	//��¼��������
	int count;
	cout << "�������������: " << endl;
	cin >> count;

	//��Ӧ�� ѧУID ��¼ ѧУ�ܳɼ�
	int tempeleCount = count;		//��ʱ��¼��������
	int schoolId = 0;				//��¼ѧУID
	int score = 0;					//��¼ÿ�еķ���  �����ۼӵ�������
	int schoolIdMax = 0;           //��¼����schoolID,�����ӡ������
	cout << "������ѧУ��ź�ѧ���ɼ�:" << endl;
	while (tempeleCount != 0)
	{
		cin >> schoolId;
		cin >> score;
		school[schoolId] += score;
		--tempeleCount;

		//��¼����schoolID,�����ӡ������
		if (schoolIdMax < schoolId)
		{
			schoolIdMax = schoolId;
		}
	}

	//ѭ����ӡ������¼�ɼ�������
	for (int i = 1; i <= schoolIdMax; i++)
	{
		cout << "ѧУID:  " << i << "   �����ɼ�:  " << school[i] << endl;
	}

	//��ѯ  �ҳ��ܷ���ߵ�ѧУ
	int maxSchoolId = 0;		//��¼��߷ֵ�ѧУ��ID
	int maxSchoolScore = 0;	//��¼��ߵ��ܷ�
	for (int i = 1; i <= schoolIdMax; i++)
	{
		if (maxSchoolScore < school[i])
		{
			maxSchoolId = i;
			maxSchoolScore = school[i];
		}
	}
	cout << "------------------------" << endl;
	cout << "�ܵ÷���ߵ�ѧУΪ:" << endl;
	cout << "ѧУID:  " << maxSchoolId << "   �����ɼ�:  " << maxSchoolScore << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
