#pragma once

//实现两个数相加  外部函数 需要特殊声明
_declspec(dllexport)int myAdd(int a, int b);


//默认函数声明 是用不了
//将这个函数称为内部函数
//int mySub(int a, int b);

//外部函数 需要特殊声明 __declspec(dllexport) 
//减法 实现两个数字相减
//__declspec(dllexport) int mySub(int a, int b);


//动态库生成的.lib和静态库的不同，静态库中的.lib会将所有函数声明、实现都放入其中
//而动态库生成的.lib 只会放导出函数的声明、和变量声明，具体的实现放在 .dll

