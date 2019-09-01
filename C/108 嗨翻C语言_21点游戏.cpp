/*
 * 这种标注 
 * 真 
 * 好 
 * 看 
 *
 */ 
 
 //  21点游戏 
 
 #include<stdio.h>
 #include<stdlib.h>
  
 int main()
 {
 	char card_name[3];
 	int count = 0;
 	
 	do
	{	
	
	int val = 0;
 	puts("输入牌名： ");
	scanf("%2s", card_name);

	switch(card_name[0])
	{
		case 'K': val = 10;
				break;
		case 'J': val = 10;
				break;
		case 'Q': val = 10;
				break;
		case 'A': val = 11;
				break;
		case 'X': continue;  //若输入X，则退出程序
		default: val = atoi(card_name);  //atoi()将文本转为数据 
		
		if(val < 1 || val > 10)
		{
			printf("输入错误，请重新输入");
			continue;
		}	
	}
	
	if(val > 2 && val < 7)    //检查牌的点数是否在3到6之间
		{
			count++;
		}
	else if(val == 10)     //否则，检查牌是否是10，J，Q或K
		{
			count--;	
		}
	
	printf("当前的计数：%i\n", count);
	 	
	}while(card_name[0] != 'X');
		
	

 	return 0;
  } 
