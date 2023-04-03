#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
* 为了建立数据结构和算法的一套标准，诞生了STL（standard template librariy，标准模板库）、
* 从广义上分为
*	1.容器	container
*	2.算法	algorithm
*	3.迭代器	iterator
* 容器和算法之间通过迭代器进行无缝链接
* STL几乎所有代码都采用了模板类或者模板函数
* 
* STL六大组件：容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
*	容器：		各种数据结构，用来存放数据，vector、list、deque、set、map
*	算法：		常用算法，sort、find、copy、for_each
*	迭代器：		容器和算法之间的胶合剂
*	仿函数：		行为类似函数，可以作为算法的某种策略
*	适配器：		修饰容器或者仿函数或迭代器接口的东西
*	空间适配器：	负责空间的配置与管理	
* 
* STL容器：实现一些最常用的数据结构，数组、链表、栈、队列、集合、映射表等
* 序列式容器：强调值的排序，每个元素均有固定位置
* 关联式容器：二叉树结构，各元素之间没有严格的物理上的顺序关系
* 
* 算法
* 质变算法：运算过程中会更改区间内的元素内容。拷贝、替换、删除等
* 非质变算法：运算过程中不会更改区间内的元素内容。查找、计数、遍历、寻找极值等
* 
* 迭代器：提供一种方法，使之能够依序寻访某个容器中所含的各个元素，无需暴露该容器内部的表示方式
* 每个容器都有自己专属的迭代器
* 类似于指针
*	种类				功能							支持运算
*	输入迭代器		只读							++ == !=
*	输出迭代器		只写							++
*	前向迭代器		读写，并且只能向前推进			++ == !=
*	双向迭代器		读写,且可以向前和向后操作		++ --
*	随机访问迭代器		读写，跳跃方式访问任意数据		++ -- [n] -n < <= > >=
* 
* 初识:见main函数test01；test02；test03
* 容器：vector
* 算法：for_each
* 迭代器：vector<int>::iterator
* 
* 容器嵌套容器：test04
* 
*/

void myPrint(int a) {
	cout << a << endl;
}

void test01() {
	vector<int> v;

	//容器插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//第一种遍历方式
	//通过迭代器访问
	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();//其中v.end()指向的是v中最后一个元素的下一个位置

	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	//第三种遍历方式	利用STL提供的遍历算法
	for_each(v.begin(), v.end(), myPrint);
}

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

void test02() {
	vector<Person> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "name:" << it->name << " age:" << it->age << endl;
	}
}

void test03() {
	vector<Person*> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "name:" << (*it)->name << " age:" << (*it)->age << endl;
	}
}

void test04() {
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//遍历
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		for (vector<int>::iterator it1 = it->begin(); it1 != it->end(); it1++) {
			cout << (*it1) << " ";
		}
		cout << endl;
	}
}

int main() {

	//test01();
	//test02();
	//test03();
	test04();

	return 0;
}