#include<stdio.h>

// r == ֻ��  read	     ��һ���ı��ļ� 
// w == ֻд  write	    �򿪻򴴽�һ���ı��ļ� 
// a == ׷��  append   ���ļ�ĩβд���� 

// rb == ֻ��  �������ļ� 
// wb == ֻд  �������ļ�  �򿪻򴴽�һ���������ļ� 
// ab == ׷��  �������ļ�  ���ļ�ĩβд���� 

// r+ == ��д   �������д  �ı��ļ�    ��һ���ı��ļ� 
// w+ == ��д   �������д  �ı��ļ�   �򿪻򴴽�һ���ı��ļ� 
// a+ == ��д   �������д  �ı��ļ�   �� ����  ׷��д 


// rb+ == ��д   �������д  �������ļ�    ��һ���������ļ� 
// wb+ == ��д   �������д  �������ļ�   �򿪻򴴽�һ���������ļ�  
// ab+ == ��д   �������д  �������ļ�   �� ����  ׷��д 


int main()
{
	FILE * fp1 = fopen("F:\\��Ӱ\\test.txt","r");  //�ļ��򿪲��ɹ�ʱ�����Գ���д˫б�� \\ 
	
	//��ȡ�ַ� 
	char c = fgetc(fp1);
	printf("c = %c\n", c);
	fclose(fp1);
	fp1 == NULL;
	
	//д���ַ� 
	FILE * fp2 = fopen("F:\\��Ӱ\\test.txt","w");
	char d = 'V';  //Ҫд����ַ� 
	if(fputc(d,fp2))
	{
		printf("д���ַ��ɹ�\n");
	}
	fclose(fp2); 
	fp2 == NULL;
	
	//д���ַ���
	FILE * fp3 = fopen("F:\\��Ӱ\\test.txt","a+");  // a+  ��ʾ���� ���ļ� ����  ׷��д   �����Ǹ���Դ�ļ�д 
	char * str = "wangjunjie";
	fputs(str,fp3); 
	fclose(fp3);
	fp3 == NULL;
	
	//��ȡ�ַ��� 
	FILE * fp4 = fopen("F:\\��Ӱ\\test.txt","r");
	char buffer[1024] = { 0 };
	
	fgets(buffer,1024,fp4);   //��ȡһ�� ���뵽buffer�� 
	
	printf("str2 = %s\n", buffer);
	fclose(fp4);
	
	
	if(fp4 != NULL)
	{
		printf("fp4 != null\n");
		fp4 == NULL;
	}
	
	
	

	return 0;
} 
