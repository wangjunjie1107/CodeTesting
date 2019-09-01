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
	
	doses[3] == *(doses + 3) == *(3 + doses) == 3[doses]; //厉害的写法 
	
	printf("服用 %i 毫克的药\n", doses[3]);  
	printf("服用 %i 毫克的药\n", 3[doses]);  //注意数组的写法 
	
}

//4
void Fgets()
{
	char arr1[5];
	
	char arr2[10];
	char *p;
	p = arr2;
	
	fgets(arr1, sizeof(arr1), stdin); //使用fgets函数，注意参数
	puts(arr1);                      //第一个参数是指向缓冲区的指针，第二个是接收字符串的大小，第三个表示数据来自键盘 
	
	
	fgets(p, 10, stdin);  //如果第一个参数是指针，就需要显式的给出长度 
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
	printf("停！当前位置：[%i, %i]\n\n", latitude, longitude);
	
	//3
	array_track();
	
	//4
	Fgets();
	
	return 0;
 } 
