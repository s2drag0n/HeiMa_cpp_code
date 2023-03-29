#include <iostream>
using namespace std;

/*
* ������Ʒ
*/

class AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;
	//������Ʒ
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee:public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ˮ" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class Tea:public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ˮ" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "�������" << endl;
	}
};

void doWork(AbstractDrinking* abs) {
	abs->makeDrink();
	delete abs;
}

void test01() {
	
	doWork(new Coffee);
	doWork(new Tea);
}

int main() {

	test01();

	return 0;
}