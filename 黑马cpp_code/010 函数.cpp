#include <iostream>
using namespace std;
#include "010 函数swap分文件.h"
/*
==================================================================================
函数（封装常用功能）定义步骤：
	1.返回值类型
	2.函数名
	3.参数列表
	4.函数体语句
	5.return表达式
==================================================================================
函数进行值传递时，形参的变化不会影响实参
==================================================================================
函数形式：
	无参无返
	有参无返
	无参有返
	有参有返
==================================================================================
函数声明（如果将函数定义在main后面，不在main函数前声明则无法使用）：
	1.告诉编译器函数名称以及如何调用函数
	2.函数声明可以多次，但是函数定义只能一次
==================================================================================
函数分文件编写：
	1.创建后缀名为.h的头文件
	2.创建后缀名为.cpp的源文件
	3.在头文件中写函数的声明
	4.在源文件中写函数的定义,并包含头文件,在主文件中包含头文件

*/

int main() {

	// 两数字交换分文件
	int a = 1, b = 2;
	swap(a, b);

	return 0;
}