#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


//1 ��ʾ 
void tips()
{
	printf("==============������Ϸ==================\n");
	printf("==========�밴�������ʼ��Ϸ============\n");
	printf("=============��ESC�˳���Ϸ==============\n");
	
	char a = _getch(); //�����ַ�����Ҫ����س���
	if( a == 27 )  //27 �� ASCII�������ESC��
	{
		exit(0);
	} 
}
 
//2 ��������ַ�����������������
void CreateString(char * a)
{
	srand((unsigned int)time(NULL));  //������������� 
	
	for(int i = 0; i < 30; i++)
	{
		a[i] = rand()%26 + 'a';  //����26����ĸ 
	}
	
	printf("\n%s\n\n", a);
}

//3 ���֣�ƥ���ַ��� ��ʾ��ȷ�ʺ�����ʱ�� 
void StartMyGame(char * a)
{
	char test; //��Ϸ��������ַ�
	int start_time;  //��ʼʱ��
	int end_time;//����ʱ��
	float count = 0;//��¼��ȷ���ַ���
	 
	for(int i = 0; i < 30; i++)
	{
		//��¼ʱ��
		if(i == 0)
		{
			
			start_time = time(NULL); 
		}
		
		//ƥ���ַ�
		test = _getch(); //��Ϸ��������ַ�
		
		if(test == a[i])//���ƥ�� 
		{
			count++; //��¼��ȷ�ĸ��� 
			printf("%c", test); //����Ϸ�ߴ�ӡ���ַ���� 
		}
		else
		{
			putchar('_');
		} 
	}	
	
	end_time = time(NULL);
	
	printf("\n\n��Ϸ��ʱ(��): %d\n", end_time - start_time);
	printf("\n��ȷ�ʣ�%0.2f%%\n", count / 30 * 100); 
	
}  
int main()
{
	char a[31];  //������ʮ���ַ���Ҫ��һ�������������������ִ������� 
	
	//1 ��ʾ
	//2 ��������ַ�����������������
	//3 ���֣�ƥ���ַ��� ��ʾ��ȷ�ʺ�����ʱ��
	while(1)
	{
		tips();
		CreateString(a); //��ַ����
		StartMyGame(a);
	}
	
	return 0;
}
