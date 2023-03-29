#include <iostream>
#include <string>
using namespace std;

//普通写法
class Calculator {
public:

	int getResult(string oper) {
		
		if (oper == "+") {
			return num1 + num2;
		}
		if (oper == "-") {
			return num1 - num2;
		}
		if (oper == "*") {
			return num1 * num2;
		}
		// 如果想扩展新功能，需求修改源码
		// 在真实的开发中，提倡 开闭原则
		// 开闭原则：对扩展进行开放，对修改进行关闭
	}

	int num1;
	int num2;
};

//利用多态实现计算器类
//组织结构清晰；可读性强；前期和后期扩展维护性高

//实现计算器抽象类
class AbstractCalculator {
public:

	virtual int getResult() {
		return 0;
	}

	int num1;
	int num2;
};
//加法计算器类
class AddCalculator:public AbstractCalculator{
public:

	virtual int getResult() {
		return num1 + num2;
	}
};
//减法
class SubCalculator :public AbstractCalculator {
public:

	virtual int getResult() {
		return num1 - num2;
	}
};
//乘法
class MulCalculator :public AbstractCalculator {
public:

	virtual int getResult() {
		return num1 * num2;
	}
};

void test01() {
	Calculator c;
	c.num1 = 10;
	c.num2 = 10;
	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
}

void test02() {
	AbstractCalculator* abc = new AddCalculator;
	abc->num1 = 10;
	abc->num2 = 10; 
	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getResult() << endl;
	delete abc;
	// 用完记得销毁（堆区内存）
	abc = new SubCalculator;
	abc->num1 = 10;
	abc->num2 = 10;
	cout << abc->num1 << "-" << abc->num2 << "=" << abc->getResult() << endl;
	delete abc;
	// 用完记得销毁（堆区内存）
	abc = new MulCalculator;
	abc->num1 = 10;
	abc->num2 = 10;
	cout << abc->num1 << "*" << abc->num2 << "=" << abc->getResult() << endl;
	delete abc;
}

int main() {

	test01();
	test02();

	return 0;
}