#include <iostream>
using namespace std;

/*

*/

int main() {

	// if�����ϰ����ֻС��ABC����ֱ�������ֻС�����أ����ж���ֻС������
	int a, b, c;
	cout << "��������ֻС������أ�" << endl;
	cin >> a >> b >> c;
	if (a > b) {
		if (a < c) {
			cout << "����ֻС�����أ�" << endl;
		}
		else if (a > c) {
			cout << "��һֻС�����أ�" << endl;
		}
		else {
			cout << "��һֻС��͵���ֻС�����أ�" << endl;
		}
	}
	else if (a < b) {
		if (b < c) {
			cout << "����ֻС�����أ�" << endl;
		}
		else if (b < c) {
			cout << "�ڶ�ֻС�����أ�" << endl;
		}
		else {
			cout << "�ڶ�ֻС��͵���ֻС�����أ�" << endl;
		}
	}
	else {
		if (a < c) {
			cout << "����ֻС�����أ�" << endl;
		}
		else if (a > c) {
			cout << "��һֻС��͵ڶ�ֻ���أ�" << endl;
		}
		else {
			cout << "��ֻС��һ���أ�" << endl;
		}
	}

	return 0;
}