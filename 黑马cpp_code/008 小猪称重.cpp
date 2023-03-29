#include <iostream>
using namespace std;

/*

*/

int main() {

	// if语句练习：三只小猪ABC，请分别输入三只小猪体重，并判断哪只小猪最重
	int a, b, c;
	cout << "请输入三只小猪的体重：" << endl;
	cin >> a >> b >> c;
	if (a > b) {
		if (a < c) {
			cout << "第三只小猪最重！" << endl;
		}
		else if (a > c) {
			cout << "第一只小猪最重！" << endl;
		}
		else {
			cout << "第一只小猪和第三只小猪最重！" << endl;
		}
	}
	else if (a < b) {
		if (b < c) {
			cout << "第三只小猪最重！" << endl;
		}
		else if (b < c) {
			cout << "第二只小猪最重！" << endl;
		}
		else {
			cout << "第二只小猪和第三只小猪最重！" << endl;
		}
	}
	else {
		if (a < c) {
			cout << "第三只小猪最重！" << endl;
		}
		else if (a > c) {
			cout << "第一只小猪和第二只最重！" << endl;
		}
		else {
			cout << "三只小猪一样重！" << endl;
		}
	}

	return 0;
}