#include <iostream>
using namespace std;

/*

*/

int main() {

	//一维数组练习：声明一个五个元素的数组并将其逆置

	int arr[5] = { 4,5,6,7,8 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << arr[3] << endl << arr[4] << endl;

	return 0;
}