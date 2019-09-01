#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu2
{
	//成员列表
	//char name[21];
	char * name;
	float * scores;
};

int main()
{
	struct stu2 *p = (struct stu2 *)malloc(sizeof(struct stu2) * 3);
	for (int i = 0; i < 3; i++)
	{
		p[i].name = (char *)malloc(sizeof(char) * 21);
		p[i].scores = (float *)malloc(sizeof(float) * 3);

		printf("请您输入学生 姓名   成绩 ：\n");
		scanf("%s%f%f%f", p[i].name, &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);

	}

	//冒泡排序, 成绩总和：从小到大 
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			float sum1 = p[j].scores[0] + p[j].scores[1] + p[j].scores[2];
			float sum2 = p[j + 1].scores[0] + p[j + 1].scores[1] + p[j + 1].scores[2];
			if (sum1 > sum2)
			{
				struct stu2 temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}


	for (int i = 0; i < 3; i++)
	{

		printf("姓名：%s\n", p[i].name);
		printf("成绩: %.1f   %.1f   %.1f\n", p[i].scores[0], p[i].scores[1], p[i].scores[2]);
	}


	//释放
	for (int i = 0; i < 3; i++)
	{
		free(p[i].name);
		free(p[i].scores);
	}

	free(p);



	system("pause");
	return EXIT_SUCCESS;
}
