#include <iostream>
using namespace std;
#include <string>

/*
* ���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
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
		cout << "������ѧ��������" << endl;
		cin >> name;
	}
	void set_id() {
		cout << "������ѧ��ѧ�ţ�" << endl;
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