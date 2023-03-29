#include <iostream>
using namespace std;

/*
*/

class MyInteger {

	friend ostream& operator<<(ostream& cout, MyInteger myInt);

public:
	MyInteger(int x) {
		Num = x;
	}

	//重载前置递减运算符--，这里返回值是引用是因为可能会连续做多次递减运算
	MyInteger& operator--() {
		Num--;
		return *this;
	}

	//重载后置递减运算符--，这里int是为了区分前置后置的占位符，不使用引用是因为返回的是局部变量
	MyInteger operator--(int) {
		MyInteger temp = *this;
		Num--;
		return temp;
	}

private:
	int Num;
};

void test01() {
	MyInteger myInt(5);
	cout << --(--myInt) << endl;
	cout << myInt << endl;
	cout << myInt-- << endl;
	cout << myInt << endl;
}

//重载左移运算符<< 
ostream& operator<<(ostream& cout, MyInteger myInt) {
	cout << myInt.Num;
	return cout;
}


int main() {

	test01();

	return 0;
}