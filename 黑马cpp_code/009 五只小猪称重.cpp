#include <iostream>
using namespace std;

/*

*/
int a[2];
int main() {

	//һά������ϰ����һ�������м�¼����ֻС������أ��ҳ�����ӡ���ص�С�������
	int weights[5];
	cout << a[0] << a[1] << endl;
	cout << weights[0] << weights[1] << weights[2] << weights[3] << weights[4] << endl;
	cout << "��������ֻС�������" << endl;
	cin >> weights[0] >> weights[1] >> weights[2] >> weights[3] >> weights[4];
	int maxWeight = weights[0];
	int num = 0;
	for (int i = 1; i < 5; i++) {
		if (maxWeight < weights[i]) {
			maxWeight = weights[i];
			num = i;
		}
	}
	cout << "��" << num + 1 << "ֻС�����أ�����������" << maxWeight << "kg" << endl;

	return 0;
}