#include<stdio.h>

int main()
{
	const char * mesg = "Don't be fool!";
	const char * copy;
	
	copy = mesg;  //�������mesg��ֵ������copy,����copyҲָ����mesgָ����ַ��� 
	
	printf("%s\n\n", copy);
	
	//��ӡ�ĵ�һ���ʾָ��ָ���ֵ 
	
	//��ӡ�ĵڶ����ʾָ��洢�������ַ����ڴ��� 
	
	//value ��ʾ ָ��mesg������ֵ�ĵ�ַ
	//��νָ���ֵ����������洢�ĵ�ַ��
	 
	printf("mesg = %s, &mesg = %p, value = %p.\n\n", mesg, &mesg, mesg);
	printf("copy = %s, &copy = %p, value = %p.\n\n", copy, &copy, copy);
	
	return 0; 
}
