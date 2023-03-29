#include <iostream>
using namespace std;
#include <string>

/*
* 结构体案例2
* 设计一个英雄结构体，包括姓名、年龄、性别
* 创建英雄数组，存放五名英雄
* 通过冒泡算法排序，将数组中的英雄按照年龄升序排列，打印排序结果
*/
void bubbleSort(struct Hero* arr, int length);
struct Hero {
	string name;
	int age;
	string gender;
};

int main() {

	struct Hero heros[5] = { {"top",55,"man"},
		{"jungle",19,"man"}, {"mid",30,"man"}, {"adc",16,"man"}, {"support",23,"girl"} };

	bubbleSort(heros, sizeof(heros) / sizeof(heros[0]));

	struct Hero* p = heros;
	cout << "各个英雄按照年龄从小到大顺序排列为：" << endl;
	for (int i = 0; i < sizeof(heros) / sizeof(heros[0]); i++) {
		cout << p->name << ":" << p->age << endl;
		p++;
	}

	return 0;
}

void bubbleSort(struct Hero* arr, int length) {

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j].age > arr[j + 1].age) {
				struct Hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}