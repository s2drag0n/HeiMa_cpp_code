#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*

*/

int main() {

	// while循环练习：系统随机生成一个1到100之间的数字，玩家猜测，猜错则提示玩家数字过大还是过小，直到猜对时恭喜玩家并退出游戏
	srand((unsigned int)time(NULL));
	int x = rand() % 100 + 1;
	int y = 0;
	cout << "请输入你要猜测的数字:" << endl;
	cin >> y;
	while (x != y) {
		if (y > x) {
			cout << "抱歉你猜的数字有点大，请再次输入你要猜测的数字:" << endl;
		}
		else {
			cout << "抱歉你猜的数字有点小，请再次输入你要猜测的数字:" << endl;
		}
		cin >> y;
	}
	cout << "恭喜你，猜对了正确答案！你真棒！" << endl;

	return 0;
}