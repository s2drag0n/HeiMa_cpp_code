#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*

*/

int main() {

	// whileѭ����ϰ��ϵͳ�������һ��1��100֮������֣���Ҳ²⣬�´�����ʾ������ֹ����ǹ�С��ֱ���¶�ʱ��ϲ��Ҳ��˳���Ϸ
	srand((unsigned int)time(NULL));
	int x = rand() % 100 + 1;
	int y = 0;
	cout << "��������Ҫ�²������:" << endl;
	cin >> y;
	while (x != y) {
		if (y > x) {
			cout << "��Ǹ��µ������е�����ٴ�������Ҫ�²������:" << endl;
		}
		else {
			cout << "��Ǹ��µ������е�С�����ٴ�������Ҫ�²������:" << endl;
		}
		cin >> y;
	}
	cout << "��ϲ�㣬�¶�����ȷ�𰸣��������" << endl;

	return 0;
}