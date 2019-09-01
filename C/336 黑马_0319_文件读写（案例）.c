#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>



//之后运行要注意要在当前路径下建立文件 才能打开读写 
//或者设置绝对路径，并建立文件

//读取文件的有效行数
int getFileLines(FILE * file)
{
	//判断文件指针是否有效
	if (file == NULL)
	{
		printf("文件指针无效\n");
		return -1;
	}

	char buf[1024]; //建立缓冲区，暂时存储字符
	int lines = 0;

	//fgets表示将文件中的行数据写到buf中
	//此处为什么清空buf ??? 下一行的数据写到数组里，会覆盖上一行的数据
	//fgets进行下一次判断的过程？？？ 文件的结尾才是NULL  行与行之间是换行符
	while (fgets(buf, 1024, file) != NULL)
	{
		//fgets读一行数据—发现结尾不是NULL--执行括号中的内容lines++—再读入下一行数据
		lines++;
		//printf("%s\n", buf);
	}

	//此时文件的光标已经读到文件末尾了
	//所以需要将文件的光标置首
	//fseek(file, 0, SEEK_SET); 
	rewind(file);  //也可以将文件光标置首
				   /*
				   int fseek( (FILE * *stream, , long offset, , int whence );
				   功能：移动文件流（文件光标）的读写位置。
				   参数：
				   stream：已经打开的文件指针
				   offset：根据 whence 来移动的位移数（偏移量），可以是正数，也可以负数，如果正数，
				   则相对于 whence 往右移动，如果是负数，则相对于 whence 往左移动。如果向前移动的字节数超
				   过了文件开头则出错返回，如果向后移动的字节数超过了 文件末尾，再次写入时将增大文件尺
				   寸。
				   whence：其取值如下：
				   SEEK_SET：从文件开头移动 offset 个字节
				   SEEK_CUR：从当前位置移动 offset 个字节
				   SEEK_END：从文件末尾移动 offset 个字节
				   */


				   //SEEK_SET
				   //SEEK_END
				   //SEEK_CUR

	return lines;
}

//将文件中的数据放入到pArray的数组中
void readFileData(FILE * file, char ** pArray, int len)
{
	if (file == NULL)
	{
		printf("文件指针无效\n");
		return;
	}
	if (pArray == NULL)
	{
		printf("数组指针无效\n");
		return;
	}
	if (len <= 0)
	{
		printf("文件行数小于等于0，出错\n");
		return;
	}

	char buf[1024] = { 0 };
	int index = 0;

	//while循环保证读取行数有效
	//fgets表示将文件中的行数据写到buf中
	while (fgets(buf, 1024, file) != NULL)
	{
		//计算开辟每个字符串的大小
		int currentLen = strlen(buf) + 1;

		//将字符串最后的换行符改为 \0   这样就可以自己操作换行
		//strlen(buf) - 1 作为数组下标表示的是每行最后的换行符
		buf[strlen(buf) - 1] = '\0';

		//开辟堆空间
		char * currentP = malloc(sizeof(char) * currentLen);

		//将文件中读取的内容，放入到开辟的空间中
		strcpy(currentP, buf);

		//将开辟的数据 放入到我们维护的数组中
		pArray[index++] = currentP;

		//清空buf
		memset(buf, 0, 1024);
	}
}

//打印数组
void showFileData(char ** pArray, int len)
{
	int blanklines = 0;
	
	//统计打印空白行 
	for (int i = 0; i < len; i++)
	{
		if (pArray[i][0] == '\0')
			blanklines++;
	}
	printf("\n空白行有%d行\n\n", blanklines);

	for (int i = 0; i < len; i++)
	{
		//不打印文档中的空格部分  本来是判断释放和\n相同  
		//因为在数据读取函数中，已经将行末尾的\n换成了\0  所以判断是否是空行
		//应该和\0去比较
		//二级指针就是一个二维数组
		if (pArray[i][0] == '\0')
			;
		else
			printf("%d行的数据为：%s\n", i + 1, pArray[i]);
	}
	
	printf("\n");
}

//通过地址传递释放堆空间
void freeSpace(char *** p, int len)
{
	//建立二级指针 接收三级指针
	char ** q = *p;

	for (int i = 0; i < len;i++)
	{

		if (q[i] != NULL)
		{
			printf("%s被释放了\n", q[i]);
			free(q[i]);
			q[i] = NULL;
		}

	}

	//对应malloc写free的代码
	//因为 q 已经指向 p 所指的堆空间内存，所以可以直接free(q),就释放了p指向的堆空间
	free(q);
	q = NULL;
	p = NULL;
}

void test01()
{
	//打开文件
	FILE * file = fopen("./test.txt", "r");
	if (file == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	//获取文件有效的行数
	int len = getFileLines(file);
	printf("文件的有效行数为：%d\n", len);
	char ** pArray = malloc(sizeof(char *) * len);

	//将文件中的数据放入到pArray的数组中
	readFileData(file, pArray, len);

	//打印数组
	showFileData(pArray, len);

	//释放堆区空间
	freeSpace(&pArray, len);
	//pArray = NULL; //传址free就不用在外面再写

	//关闭文件
	fclose(file);
	file = NULL;
}

int main()
{
	test01();
	system("pause");
	return  EXIT_SUCCESS;
}



