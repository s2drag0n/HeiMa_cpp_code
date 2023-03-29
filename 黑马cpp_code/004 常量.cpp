#include <iostream>
using namespace std;

/*
	作用：记录程序中不可更改的数据
	两种定义方式
	1：#define 宏常量：#define 常量名 常量值	通常在文件上方定义
	2：const修饰的变量：const 数据类型 常量名 = 常量值	通常在变量定义之前加关键字const，修饰该变量为常量
*/

#define day_per_week 7

int main() {

	cout << "一周有" << day_per_week << "天" << endl;

	const int month_per_year = 12;

	cout << "一年有" << month_per_year << "月" << endl;

	system("pause");

	return 0;
}