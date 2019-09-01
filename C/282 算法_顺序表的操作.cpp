//��ʼ��˳���
void SeqListInit(SeqListType *SL)
{
	SL->ListLen = 0;//��ʼ��ʱ������˳�����Ϊ0 
}

//����˳����Ԫ������ 
int SeqListLength(SeqListType *SL)
{
	return (SL->ListLen); 
} 

//��˳��������Ԫ��
int SeqListAdd(SeqListType *SL, DATA data)
{
	if(SL->ListLen >= MAXSIZE)//˳�������
	{
		printf("˳�����������������ӽ����\n");
		return 0; 
	} 
	SL->ListData[++SL->ListLen] = data;
	return 1;
}

//��˳����в���Ԫ��
int SeqListInsert(SeqListType *SL, int n, DATA data)
{
	int i;
	
	//˳����������ѳ���������� 
	if(SL->ListLen >= MAXSIZE)
	{
		printf("˳������������ܲ�����\n");
		return 0;	//����0��ʾ�����벻�ɹ�	
	}
	
	//��������Ų���ȷ 
	if(n < 1 || n > SL->ListLen - 1)
	{
		printf("����Ԫ����Ŵ��󣬲��ܲ���Ԫ�أ�\n");
		return 0;  //����0����ʾ���벻�ɹ� 
	} 
	
	//��˳������������ƶ� 
	for(i = SL->ListLen; i >= n; i--)
	{
		SL->ListData[i + 1] = SL->ListData[i];  
	} 
	
	SL->ListData[n] = data;	//������
	SL->ListLen++;			//˳���������1
	return 1;    			//����1����ʾ�ɹ����� 
}

//ɾ��˳����е�Ԫ��
int SeqListDelete(SeqListType *SL, int n)
{
	int i;
	
	//ɾ��Ԫ����Ų���ȷ 
	if(n < 1 || n > SL->ListLen)
	{
		printf("ɾ�������Ŵ��󣬲���ɾ����㣡\n");
		return 0;  //����0����ʾɾ�����ɹ�	
	}
	
	//��˳����е�Ԫ����ǰ�ƶ� 
	for(i = n; i < SL->ListLen; i++)
	{
		SL->ListData[i] = SL->ListData[i + 1];
	}
	
	SL->ListLen--;	//˳���Ԫ�ؼ�1 
	
	return 1; // ���سɹ�ɾ�� 
 } 

//������ŷ���Ԫ��
DATA *SeqListFindByNum(SeqListType *SL, int n)
{
	//Ԫ����Ų���ȷ 
	if(n < 1 || n > SL->ListLen + 1)
	{
		printf("�����Ŵ��󣬲��ܷ��ؽ�㣡\n");
		return NULL;  //����NULL����ʾ���Ҳ��ɹ�	
	}
	
	return &(SL->ListData[n]); //ͨ��ָ�뷵�أ��Ƚ���ͨ���� 
} 

//���ؼ��ֲ��ҽ�� 

int SeqListFindByCont(SeqListType *SL, char *key)
{
	int i;
	
	for(i = 1; i <= SL->ListLen; i++)
	{
		//����ҵ������� 
		if(strcmp(SL->ListData[i].key, key) == 0)
		{
			return i; //���ؽ����� 
		}
	} 
	
	return 0; //��������û���ҵ����򷵻�0 		
} 






