#include <iostream>
using namespace std;

/*
* �����������
* �������������
* �ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
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