#include <iostream>
using namespace std;

/*
* 继承：class Java : public BasePage{}
* 优点：减少重复代码，提高代码复用性
* 
* 子类 = 派生类
* 父类 = 基类
* 
* 三种继承方式：首先明确父类中的私有private属性子类永远无法访问
*	1.公共继承public：父类的public和protected属性权限不变，public依然public，protected依然protected
*	2.保护继承protected：父类中public和protected属性均变成protected属性
*	3.私有继承private：父类中public和protected属性均变成private属性
* 
* 继承中的对象模型
* 父类中所有非静态成员都会被子类继承
* 父类中私有成员属性被编译器隐藏，因此访问不到，但是确实被继承到了子类
* 
* 继承中构造和析构顺序
* 先构造父类、再构造子类
* 先析构子类、再析构父类
* 
* 继承中同名成员的处理方式
* 同名属性
*	1.默认访问子类中新定义的属性
*	2.可以通过p.Base::name来访问父类中的属性
* 同名函数
*	1.默认调用子类中新定义的函数
*	2.可以通过p.Base::func()来调用父类中的函数
*	3.如果子类中出现了和父类同名的成员函数，那么子类的同名成员函数会隐藏掉父类中所有同名成员函数，包括重载的函数，必须通过作用域访问
* 
* 继承中同名静态成员处理方式
*	1.通过对象访问时和非静态成员一致
*	2.通过类名访问时直接使用作用域Son::name	Son::Base::name
* 
* 多继承语法
* class Son : 继承方式 Base1 ,  继承方式 Base2 ,  继承方式 Base3{}
* 父类中有重名时，需要加上作用域来访问
* 
* 菱形继承：继承了两份属性	a->b	a->c	b,c->d
* 使用虚继承：在b,c继承之前加上virtual
* 虚基类a
* 虚继承之后就只有一份属性了
* 底层：d继承自两个父类b,c的是两个虚基类指针，指向虚基类表，指明了真实数据相对此处的偏移量
*/

int main() {

	cout << "HelloWorld" << endl;

	return 0;
}