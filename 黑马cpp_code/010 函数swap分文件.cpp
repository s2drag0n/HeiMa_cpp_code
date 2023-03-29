#include "010 函数swap分文件.h"


//两数字交换函数定义
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}