#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("C:\\code\\test.txt", "w");
	if(NULL == fp)
	{
	printf("Open Failed!\n");
	exit(-1);
	}
	// 	
	char ch = getchar();
	while(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
	
	fputc(ch, fp);
	fputc('\r', fp);//'\r'���ǰѹ���ƶ������ף������ỻ��
	fputc('\n', fp);//'\n'���ǹ������һ��ȴ�����Ƶ���һ�еĿ�ͷ
	
	//fprintf(fp, "%c\r\n", ch);
	getchar();			// �Ե�����ʱ�Ļس���
	ch = getchar();		// ���������ַ�
	}
	
	fclose(fp);		// �ر��ļ�
	return 0;
}

