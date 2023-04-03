#include <iostream>
// #include "024 Person.h"
#include "024 Person.hpp"
using namespace std;

/*
* 除面向对象外，另一种编程思想叫泛型编程，主要技术是模板
* C++提供两种模板机制：函数模板和类模板
*
* 函数模板：建立一个通用函数，其函数返回值和形参类型可以不具体指定，用一个虚拟的类型来表示
*
* 语法
*	template <typename T>		其中typename可以替换为class
*	函数声明和定义
*
* 例子
*	template <typename T>
*	void swap(T& a, T& b){}
*
* 两种方式使用函数模板
*	1.自动类型推导，直接使用		swap(a, b);
*	2.显式指定类型				swap<int>(a, b);
*
* 函数模板注意事项
*	1.自动类型推导，必须要推导出一致的数据类型T才能使用
*	2.模板必须要确定出T的数据类型，才可以使用，不能不使用T且不指定
*
* 普通函数和函数模板的区别
*	1.普通函数调用时，可以发生自动类型转换（隐式）
*		隐式类型转换：int myAdd();	int a;	char c;	可以运行myADD(a, c)
*	2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
*	3.如果利用显式指定类型，会发生隐式类型转换
*
* 普通函数和函数模板的调用规则
*	1.优先调用普通函数，如果普通函数没有实现，则报错
*	2.通过空模板参数列表强制调用函数模板	myADD<>(a, c);
*	3.函数模板可以重载
*	4.如果函数模板可以产生更好的匹配，则有限调用函数模板	char a;	char b;	myADD(a, b);此时调用的是函数模板
*
* 模板的局限性
*	使用模板函数重载，实现特定数据类型的特定操作，比如类的相加+、对比==（也可以使用运算符重载）
*	template<T> boolmyCompare(T& a, T& b){}
*	template<> boolmyCompare(Person& a, Person& b){}
*
* 学习模板不是为了写模板，而是为了在STL中使用系统提供的模板
*
* 类模板，类中的成员数据类型可以不具体指定，用虚拟的类型表示
* template<class T1, class T2>
* class Person{}
*
* 类模板和函数模板区别
*	1.没有自动类型推导
*	2.类模板在参数列表中可以有默认参数	template<class T1, class T2 = int>	调用时就无需显式指出第二个数据类型
*
* 类模板中成员函数创建时机
*	1.普通类中成员函数一开始就可以创建
*	2.类模板中的成员函数在调用时才能创建，运行时判断是否可以创建：因为在运行前不确定T这个类是否有可以调用的函数
*
* 类模板对象作函数参数
*	1.指定传入的类型 --- 直接显示对象的数据类型
*	2.参数模板化 --- 将对象中的参数变为模板进行传递
*		template<class T1, class T2>
*		void printPerson2(Person<T1, T2>& p){}
*		使用typeid(T1).name()可以使用字符串形式查看T1具体是什么类型
*	3.整个类模板化 --- 将这个对象类型模板化进行传递
*		template<class T>
*		void printPerson2(T& p){}
*
* 类模板与继承
*	1.当子类继承的父类是一个类模板，子类在声明时，要指出父类中T的类型
*	2.如果不指定，编译器无法给子类分配内存
*	3.如果想灵活指出父类中T的类型，子类也许变为类模板
*
* 类模板成员函数的类外实现
* 构造函数类外实现
*	template<class T1, class T2>
*	Person<T1, T2>::Person(T1 name,T2 age){}
*
* 类模板的分文件编写问题以及解决方式：Person类
*	问题：如果只包含Person.h头文件，此头文件中识别到了Person的成员函数，但此时并没有创建（因为是类模板），所以链接时链接不到
*		1.将此文件中包含的Person.h头文件改成Person.cpp文件（不常用）
*		2.将.h和.cpp中的文件合并，后缀名用.hpp
*
* 类模板和友元
*   1.全局函数类内实现：直接加上friend，相当于友元在类内实现
*       firend void printPerson(Person<T1, T2> p){}
*   2.全局函数类外实现
*       类内：firend void printPerson<>(Person<T1, T2> p){}
*       类内：
*       template<class T1, class T2>
*       void printPerson(Person<T1, T2> p){}
*       还需要让编译器提前知道模板类Person存在
*       template<class T1, class T2>
*       class Person;
*       还需要让编译器提前知道全局函数存在：提前声明
*/

void test01() {
    Person<string, int> p("Jerry", 18);
    p.showPerson();
} 

int main() {

    //函数模板案例：排序算法
    //test01();
    //类模板案例：实现数组

    return 0;
}