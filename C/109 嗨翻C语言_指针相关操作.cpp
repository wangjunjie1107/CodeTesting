#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//1
void skip(char *msg)
{
	puts( msg + 6 );
}

//2
void go_south_east(int * lat, int * lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

//3
void array_track()
{
	int doses[] = {1, 3, 2, 1000};
	
	doses[3] == *(doses + 3) == *(3 + doses) == 3[doses]; //������д�� 
	
	printf("���� %i ���˵�ҩ\n", doses[3]);  
	printf("���� %i ���˵�ҩ\n", 3[doses]);  //ע�������д�� 
	
}

//4
void Fgets()
{
	char arr1[5];
	
	char arr2[10];
	char *p;
	p = arr2;
	
	fgets(arr1, sizeof(arr1), stdin); //ʹ��fgets������ע�����
	puts(arr1);                      //��һ��������ָ�򻺳�����ָ�룬�ڶ����ǽ����ַ����Ĵ�С����������ʾ�������Լ��� 
	
	
	fgets(p, 10, stdin);  //�����һ��������ָ�룬����Ҫ��ʽ�ĸ������� 
	puts(p);
	

	
}
int main()
{
	//1
	char * msg_from_amy = "Don't call me\n";
	skip(msg_from_amy);
	
	//2
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);
	printf("ͣ����ǰλ�ã�[%i, %i]\n\n", latitude, longitude);
	
	//3
	array_track();
	
	//4
	Fgets();
	
	return 0;
 } 
