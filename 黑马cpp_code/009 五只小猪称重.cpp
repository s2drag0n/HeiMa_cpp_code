#include <iostream>
using namespace std;

/*

*/
int a[2];
int main() {

	//一维数组练习：在一个数组中记录了五只小猪的体重，找出并打印最重的小猪的体重
	int weights[5];
	cout << a[0] << a[1] << endl;
	cout << weights[0] << weights[1] << weights[2] << weights[3] << weights[4] << endl;
	cout << "请输入五只小猪的体重" << endl;
	cin >> weights[0] >> weights[1] >> weights[2] >> weights[3] >> weights[4];
	int maxWeight = weights[0];
	int num = 0;
	for (int i = 1; i < 5; i++) {
		if (maxWeight < weights[i]) {
			maxWeight = weights[i];
			num = i;
		}
	}
	cout << "第" << num + 1 << "只小猪最重！它的体重是" << maxWeight << "kg" << endl;

	return 0;
}