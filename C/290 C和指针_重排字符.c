/*
** 这个程序从标准输入读取文本并对其进行修改，然后把它写到标准输出
** 程序首先读取一串列标号。这些标号成对出现，表示输入行的列范围。
** 这串列标号以一个负值结尾，作为结束标志。
** 剩余的输入行被程序读入并打印，然后输入行中被选中范围的字符串被读入并打印
** 然后输入行中被选中范围的字符串被提取出啦并打印
*/


/*
** 这个程序从标准输入中读取输入行并在标准输出中打印这些输出行
** 每个输入行的后面一行是该行内容的一部分
**
** 输入的第1行是一串列标号，串的最后以一个负数结尾
** 这些列标号成对出现，说明需要打印的输入行的列的范围
** 例如， 0 3 10 12 -1 表示第0列到第3列，第10列到第12列的内容将被打印
**
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_COLS 20		//所能处理的最大列号 
#define MAX_INPUT 1000	//每个输入行的最大长度 

//读取字符串函数 
int read_column_numbers(int columns[], int max);

//重排函数 
void rearrange( char *output, char const *input,
			int n_columns, int const colunms[] );

int main( void )
{
	int n_columns; 				//进行处理的列标号
	int columns[MAX_COLS]; 		//需要处理的列数
	char input[MAX_INPUT];		//容纳输入行的数组		
	char output[MAX_INPUT]; 	//容纳输出行的数组
	
	/*
	** 读取该串列标号
	*/
	
	n_columns = read_column_numbers( columns, MAX_COLS );
	
	/*
	** 读取、处理和打印剩余的输入行 
	*/
	
	while( gets( input ) != NULL )
	{
		printf( "Original input： %s\n", input );
		rearrange( output, input, n_columns, columns );
		printf( "Rearranged line: %s\n", output );
	} 
	
	return 0;
}

/*
** 读取列标号， 如果超出规定范围则不予理会 
*/

int read_column_numbers( int columns[], int max)
{
	int num = 0;
	/* 
	** 为什么ch被声明为整型，而我们事实上需要它来读取字符？
	** 答案是EOF是一个整型值，它的位数比字符类型要多，把ch声明为整型可以防止从输入读取的字符
	** 意外地被解释为EOF。但同时，这也意味着接受字符的ch必须足够大，可以容纳EOF，这就是ch使用整型值的原因
	*/
	// 常量EOF在stdio.h中定义，用于提示文件的结尾。 
	int ch;
	
	/*
	** 取得列标号，如果所读取的数小于 0 则停止 
	*/
	
	/*
	** 绝大多数C编译器不会进行对数组下标的有效性检查，如果你需要进行数组下标的有效性检查
	** 你必须自行编写代码。此处如果不进行 num < max 这个测试，而且程序所读取的文件包含超过20个列标号
	** 那么多出来的值就会存储在紧随数组之后的内存位置，这样就会破坏原先存储在这个位置的数据
	** 可能是其他变量，也可以是函数的返回地址。这可能会导致多种结果。
	*/
	 
	while( num < max && scanf( "%d", &columns[num] ) == 1
		&& columns[num] >= 0)
	{
		num += 1;
	} 	
		/*
		** 确认已经读取的标号为偶数个，因为它们是以对的形式出现的。 
		*/	
		if( num % 2 != 0)
		{
			puts( "Last column number is not paired.");
			exit(0);
		}
	
		/*
		** 丢弃该行中包含最后一个数字的那部分内容。 
		*/
		while( (ch = getchar()) != EOF && ch != '\n')
			;
		
		return num; 	 
	
} 

/*
** 处理输入行，将指定列的字符连接在一起，输出行以NUL结尾 
*/

void rearrange( char *output, char const *input,
		int n_columns, int const columns[] )
{
	int col;			//columns数组的下标
	int output_col;		//输出列计数器 
	int len; 			//输入行的长度
	
	len = strlen( input );
	output_col = 0;
	
	/*
	** 处理每对列标号 
	*/
	for( col = 0; col < n_columns; col += 2 )
	{
		int nchars = columns[col + 1] - columns[col] + 1;
		
		/*
		** 如果输入行结束或者输出行数组已满，就结束任务。 
		*/
		if( columns[col] >= len || output_col == MAX_INPUT - 1)
			break;
		
		/*
		** 如果输出行数据空间不够，只复制可以容纳的数据。 
		*/
		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;
			
		/*
		** 复制相关的数据。 
		*/
		strncpy( output + output_col, input + columns[col],
			nchars);
		output_col += nchars;	
	} 
	
	output[output_col] = '\0'; 
}
		

