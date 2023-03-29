#include <iostream>
using namespace std;

/*
* 设计立方体类
* 求出表面积和体积
* 分别用全局函数和成员函数判断两个立方体是否相等
*/

class Cube {
private:
	int m_L;
	int m_H;
	int m_W;
public:
	Cube(int l, int h, int w) {
		m_H = h;
		m_L = l;
		m_W = w;
	}
	int getL(){
		return m_L;
	}
	int getH(){
		return m_H;
	}
	int getW(){
		return m_W;
	}
	int calArea() {
		return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
	}
	int calVolume() {
		return m_L * m_H * m_W;
	}
	bool isEqualTo(Cube &c) {
		if (this->getH() == c.getH() && this->getL() == c.getL() && this->getW() == c.getW()) {
			return true;
		}
		return false;
	}
};

int main() {

	Cube c1(2, 2, 3);
	cout << c1.calArea() << endl;
	cout << c1.calVolume() << endl;
	Cube c2(1, 2, 3);
	cout << c1.isEqualTo(c2) << endl;

	return 0;
}