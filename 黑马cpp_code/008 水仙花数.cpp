#include <iostream>
#include<math.h>
using namespace std;

/*

*/

int main() {

	//do...while练习：求出所有三位数的水仙花数（各位上的数字三次幂之和等于它自己）
	int num = 100;
	do {
		if (pow(num % 10, 3) + pow(num / 10 % 10, 3) + pow(num / 100, 3) == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	return 0;
}