#include <iostream>
using namespace std;

void bubbleSort(int* arr, int length);



int main() {

	//指针配合数组和函数练习：封装一个函数，利用冒泡排序，实现对整型数组的升序排序

	int arr[10] = {};

	cout << "请分别输入int型数组元素的值：" << endl;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "array length:" << length << endl;

	cout << "============================" << endl;
	bubbleSort(arr, length);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}

void bubbleSort(int* arr, int length) {

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}