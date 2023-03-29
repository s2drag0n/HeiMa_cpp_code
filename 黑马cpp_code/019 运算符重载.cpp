#include <iostream>
using namespace std;

/*
* 运算符重载：对已有的运算符重新定义，赋予其另一种功能，以适应不同的数据类型
* 可以通过成员函数或者全局函数重载运算符
* Person operator+(Person p){}
* Person operator+(Person p1, Person p2){}
* 
* << 运算符重载：自定义输出的数据类型，一般不使用成员函数重载，这样不发达到cout在<<左边
* cout属于ostream标准输出流对象
* void operator<<(ostream &cout, Person &p){}	这种方式不能继续<<endl;
* ostream & operator<<(ostream &cout, Person &p){return cout;}
* 
* ++运算符重载：实现自己的整型数据
* ++a:	MyInteger& oprerator++(){return *this;}
* a++:	MyInteger oprerator++(int){先记录结果temp = *this；再递增；return temp;}这里的int是占位符，为了区分前置后置
* 
* = 赋值运算符重载
* c++给类提供的=赋值运算符重载是值拷贝，对于堆区数据会有浅拷贝的问题
* Person& operator=(){return *this;}
* 
* == < > <= >= != 关系运算符重载，让两个自定义类型对象进行对比操作
* 
* 函数调用运算符()重载，可以让对象像函数一样调用，故命名为仿函数
* 匿名对象Person()
* 匿名函数对象 Person()(10,10)  相当于 Person p;	p(10,10)
*/

int main() {

	cout << "HelloWorld" << endl;

	return 0;
}