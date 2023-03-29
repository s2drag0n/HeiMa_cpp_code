#include <iostream>
using namespace std;
#include <string>

/*
* �ṹ�尸��2
* ���һ��Ӣ�۽ṹ�壬�������������䡢�Ա�
* ����Ӣ�����飬�������Ӣ��
* ͨ��ð���㷨���򣬽������е�Ӣ�۰��������������У���ӡ������
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
	cout << "����Ӣ�۰��������С����˳������Ϊ��" << endl;
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