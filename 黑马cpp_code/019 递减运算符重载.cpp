#include <iostream>
using namespace std;

/*
*/

class MyInteger {

	friend ostream& operator<<(ostream& cout, MyInteger myInt);

public:
	MyInteger(int x) {
		Num = x;
	}

	//����ǰ�õݼ������--�����ﷵ��ֵ����������Ϊ���ܻ���������εݼ�����
	MyInteger& operator--() {
		Num--;
		return *this;
	}

	//���غ��õݼ������--������int��Ϊ������ǰ�ú��õ�ռλ������ʹ����������Ϊ���ص��Ǿֲ�����
	MyInteger operator--(int) {
		MyInteger temp = *this;
		Num--;
		return temp;
	}

private:
	int Num;
};

void test01() {
	MyInteger myInt(5);
	cout << --(--myInt) << endl;
	cout << myInt << endl;
	cout << myInt-- << endl;
	cout << myInt << endl;
}

//�������������<< 
ostream& operator<<(ostream& cout, MyInteger myInt) {
	cout << myInt.Num;
	return cout;
}


int main() {

	test01();

	return 0;
}