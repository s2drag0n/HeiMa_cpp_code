#include <iostream>
#include <windows.h>
using namespace std;

/*

*/

int main() {


	int i = 0;

	for (int i = 1; i < 101; i++) {
		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0) {
			cout << "ÇÃ×À×Ó£¡" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	return 0;
}