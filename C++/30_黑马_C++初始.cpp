#include <iostream>  //i input 输入  o output 输出   等价于 C  stdio.h
using namespace std; // 使用 标准 命名空间   打开房间 后序房间中的内容我们会去使用


//C++头文件包含  不需要.h
#include <time.h>
#include <ctime>

#include <math.h>
#include <cmath>

// main程序入口函数
int main()
{
	//cout 标准输出流对象  可以用cout对象向屏幕上输出内容

	// C++ << 左移运算符有了新的含义，接在cout后输出内容
	// endl  end line  刷新缓冲区 并且换行
	// C语言下记住格式转换 %s  %d  %c  %f  C++不需要
	// 对于换行   \n  \r\n     endl统一
	cout << "hello world" << 12345  << 3.14 <<endl;

	system("pause"); //按任意键继续 阻塞
	return EXIT_SUCCESS ; //返回正常退出值  
}
