#include <iostream>
using namespace std;

/*

*/

int main() {

	//二维数组练习：三名同学张三、李四、王五，在一次考试中各科成绩如下，请分别输出总成绩
	//			语文			数学			英语	
	//张三		100			100			100
	//李四		90			50			100
	//王二		60			70			80
	
	int scores[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
	for (int i = 0; i < 3; i++) {
		cout << scores[i][0] + scores[i][1] + scores[i][2] << endl;
	}

	return 0;
}