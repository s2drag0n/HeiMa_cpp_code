#include <iostream>
#include<math.h>
using namespace std;

/*

*/

int main() {

	//do...while��ϰ�����������λ����ˮ�ɻ�������λ�ϵ�����������֮�͵������Լ���
	int num = 100;
	do {
		if (pow(num % 10, 3) + pow(num / 10 % 10, 3) + pow(num / 100, 3) == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	return 0;
}