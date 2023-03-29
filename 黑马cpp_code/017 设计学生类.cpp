#include <iostream>
using namespace std;
#include <string>

/*
* 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
*/

class Student {
public:
	string name;
	int id;

	string get_name() {
		return name;
	}
	int get_id() {
		return id;
	}
	void set_name() {
		cout << "请输入学生姓名：" << endl;
		cin >> name;
	}
	void set_id() {
		cout << "请输入学生学号：" << endl;
		cin >> id;
	}
};

int main() {

	Student stu01;
	stu01.set_name();
	stu01.set_id();
	cout << stu01.get_name() << endl;
	cout << stu01.get_id() << endl;
	return 0;
}