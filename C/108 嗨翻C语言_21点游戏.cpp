/*
 * ���ֱ�ע 
 * �� 
 * �� 
 * �� 
 *
 */ 
 
 //  21����Ϸ 
 
 #include<stdio.h>
 #include<stdlib.h>
  
 int main()
 {
 	char card_name[3];
 	int count = 0;
 	
 	do
	{	
	
	int val = 0;
 	puts("���������� ");
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
		case 'X': continue;  //������X�����˳�����
		default: val = atoi(card_name);  //atoi()���ı�תΪ���� 
		
		if(val < 1 || val > 10)
		{
			printf("�����������������");
			continue;
		}	
	}
	
	if(val > 2 && val < 7)    //����Ƶĵ����Ƿ���3��6֮��
		{
			count++;
		}
	else if(val == 10)     //���򣬼�����Ƿ���10��J��Q��K
		{
			count--;	
		}
	
	printf("��ǰ�ļ�����%i\n", count);
	 	
	}while(card_name[0] != 'X');
		
	

 	return 0;
  } 
