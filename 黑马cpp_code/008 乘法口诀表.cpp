#include <iostream>
using namespace std;

/*

*/

int main() {

	for (int line = 1; line < 10; line++) {
		for (int colum = 1; colum < line + 1; colum++) {
			cout << colum << "¡Á" << line << "=" << colum * line << "\t";
		}
		cout << endl;
	}

	return 0;
}