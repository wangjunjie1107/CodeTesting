#include<stdio.h>

//统计学生成绩

struct stu
{
	int num;
	char name[50];
	char sex;
	float score;
};

int main()
{
	//定义一个含有5个元素的结构体数组并将其初始化
	struct stu boy[5] = {
		{101,"wang",'M',80},
		{102,"zhao",'M',70},
		{103,"sun",'M',60},
		{104,"li",'M',50},
		{105,"liu",'M',40},
	}; 
	
	float sum = 0;//总分
	float average; //平均分
	int lower = 0; //不及格人数 
	
	for(int i = 0; i < 5; i++)
	{
		sum += boy[i].score;  //总分
		
		if(boy[i].score < 60)
			lower++;
	}
	
	printf("总分为：%0.2f\n", sum);
	printf("不及格人数为：%d\n", lower);
	
	average = (float)sum / 5;
	printf("平均分为：%0.2f\n", average);
	
	//打印所有人的成绩
	for(int j = 0; j < 5; j++)
	{
		//两种方法打印，boy因为是数组名，所以相当于首地址
		 
		printf("name:%s\tsex:%c\tscore:%0.2f\n", boy[j].name, boy[j].sex, boy[j].score);
		printf("name:%s\tsex:%c\tscore:%0.2f\n", (boy + j)->name, (boy + j)->sex, (boy + j)->score);
	} 
	
 } 
