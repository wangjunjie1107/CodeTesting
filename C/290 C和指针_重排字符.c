/*
** �������ӱ�׼�����ȡ�ı�����������޸ģ�Ȼ�����д����׼���
** �������ȶ�ȡһ���б�š���Щ��ųɶԳ��֣���ʾ�����е��з�Χ��
** �⴮�б����һ����ֵ��β����Ϊ������־��
** ʣ��������б�������벢��ӡ��Ȼ���������б�ѡ�з�Χ���ַ��������벢��ӡ
** Ȼ���������б�ѡ�з�Χ���ַ�������ȡ��������ӡ
*/


/*
** �������ӱ�׼�����ж�ȡ�����в��ڱ�׼����д�ӡ��Щ�����
** ÿ�������еĺ���һ���Ǹ������ݵ�һ����
**
** ����ĵ�1����һ���б�ţ����������һ��������β
** ��Щ�б�ųɶԳ��֣�˵����Ҫ��ӡ�������е��еķ�Χ
** ���磬 0 3 10 12 -1 ��ʾ��0�е���3�У���10�е���12�е����ݽ�����ӡ
**
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_COLS 20		//���ܴ��������к� 
#define MAX_INPUT 1000	//ÿ�������е���󳤶� 

//��ȡ�ַ������� 
int read_column_numbers(int columns[], int max);

//���ź��� 
void rearrange( char *output, char const *input,
			int n_columns, int const colunms[] );

int main( void )
{
	int n_columns; 				//���д�����б��
	int columns[MAX_COLS]; 		//��Ҫ���������
	char input[MAX_INPUT];		//���������е�����		
	char output[MAX_INPUT]; 	//��������е�����
	
	/*
	** ��ȡ�ô��б��
	*/
	
	n_columns = read_column_numbers( columns, MAX_COLS );
	
	/*
	** ��ȡ������ʹ�ӡʣ��������� 
	*/
	
	while( gets( input ) != NULL )
	{
		printf( "Original input�� %s\n", input );
		rearrange( output, input, n_columns, columns );
		printf( "Rearranged line: %s\n", output );
	} 
	
	return 0;
}

/*
** ��ȡ�б�ţ� ��������涨��Χ������� 
*/

int read_column_numbers( int columns[], int max)
{
	int num = 0;
	/* 
	** Ϊʲôch������Ϊ���ͣ���������ʵ����Ҫ������ȡ�ַ���
	** ����EOF��һ������ֵ������λ�����ַ�����Ҫ�࣬��ch����Ϊ���Ϳ��Է�ֹ�������ȡ���ַ�
	** ����ر�����ΪEOF����ͬʱ����Ҳ��ζ�Ž����ַ���ch�����㹻�󣬿�������EOF�������chʹ������ֵ��ԭ��
	*/
	// ����EOF��stdio.h�ж��壬������ʾ�ļ��Ľ�β�� 
	int ch;
	
	/*
	** ȡ���б�ţ��������ȡ����С�� 0 ��ֹͣ 
	*/
	
	/*
	** �������C������������ж������±����Ч�Լ�飬�������Ҫ���������±����Ч�Լ��
	** ��������б�д���롣�˴���������� num < max ������ԣ����ҳ�������ȡ���ļ���������20���б��
	** ��ô�������ֵ�ͻ�洢�ڽ�������֮����ڴ�λ�ã������ͻ��ƻ�ԭ�ȴ洢�����λ�õ�����
	** ����������������Ҳ�����Ǻ����ķ��ص�ַ������ܻᵼ�¶��ֽ����
	*/
	 
	while( num < max && scanf( "%d", &columns[num] ) == 1
		&& columns[num] >= 0)
	{
		num += 1;
	} 	
		/*
		** ȷ���Ѿ���ȡ�ı��Ϊż��������Ϊ�������ԶԵ���ʽ���ֵġ� 
		*/	
		if( num % 2 != 0)
		{
			puts( "Last column number is not paired.");
			exit(0);
		}
	
		/*
		** ���������а������һ�����ֵ��ǲ������ݡ� 
		*/
		while( (ch = getchar()) != EOF && ch != '\n')
			;
		
		return num; 	 
	
} 

/*
** ���������У���ָ���е��ַ�������һ���������NUL��β 
*/

void rearrange( char *output, char const *input,
		int n_columns, int const columns[] )
{
	int col;			//columns������±�
	int output_col;		//����м����� 
	int len; 			//�����еĳ���
	
	len = strlen( input );
	output_col = 0;
	
	/*
	** ����ÿ���б�� 
	*/
	for( col = 0; col < n_columns; col += 2 )
	{
		int nchars = columns[col + 1] - columns[col] + 1;
		
		/*
		** ��������н�����������������������ͽ������� 
		*/
		if( columns[col] >= len || output_col == MAX_INPUT - 1)
			break;
		
		/*
		** �����������ݿռ䲻����ֻ���ƿ������ɵ����ݡ� 
		*/
		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;
			
		/*
		** ������ص����ݡ� 
		*/
		strncpy( output + output_col, input + columns[col],
			nchars);
		output_col += nchars;	
	} 
	
	output[output_col] = '\0'; 
}
		

