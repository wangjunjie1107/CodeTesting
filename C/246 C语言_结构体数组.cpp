#include<stdio.h>

//ͳ��ѧ���ɼ�

struct stu
{
	int num;
	char name[50];
	char sex;
	float score;
};

int main()
{
	//����һ������5��Ԫ�صĽṹ�����鲢�����ʼ��
	struct stu boy[5] = {
		{101,"wang",'M',80},
		{102,"zhao",'M',70},
		{103,"sun",'M',60},
		{104,"li",'M',50},
		{105,"liu",'M',40},
	}; 
	
	float sum = 0;//�ܷ�
	float average; //ƽ����
	int lower = 0; //���������� 
	
	for(int i = 0; i < 5; i++)
	{
		sum += boy[i].score;  //�ܷ�
		
		if(boy[i].score < 60)
			lower++;
	}
	
	printf("�ܷ�Ϊ��%0.2f\n", sum);
	printf("����������Ϊ��%d\n", lower);
	
	average = (float)sum / 5;
	printf("ƽ����Ϊ��%0.2f\n", average);
	
	//��ӡ�����˵ĳɼ�
	for(int j = 0; j < 5; j++)
	{
		//���ַ�����ӡ��boy��Ϊ���������������൱���׵�ַ
		 
		printf("name:%s\tsex:%c\tscore:%0.2f\n", boy[j].name, boy[j].sex, boy[j].score);
		printf("name:%s\tsex:%c\tscore:%0.2f\n", (boy + j)->name, (boy + j)->sex, (boy + j)->score);
	} 
	
 } 
