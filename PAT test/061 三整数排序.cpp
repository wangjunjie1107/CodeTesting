#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
    //��������
	int s[3] = { 0 };
    //���롢���㡢��� 
    scanf("%d%d%d", &s[0], &s[1], &s[2]);
    
    int temp = 0; 
    for(int i = 0; i < 3; ++i)
    {
    	temp = s[i];
		for(int j = i + 1; j < 3; ++j)
		{
			//��С�������� 
			if(s[j] < s[i])	
			{
				s[i] = s[j];
				s[j] = temp;
			}
		} 
	}
	printf("%d %d %d\n", s[0], s[1], s[2]);
	 
    //����
    return 0;
}
