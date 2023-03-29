#include <iostream>
#include <string>
using namespace std;

//��ͨд��
class Calculator {
public:

	int getResult(string oper) {
		
		if (oper == "+") {
			return num1 + num2;
		}
		if (oper == "-") {
			return num1 - num2;
		}
		if (oper == "*") {
			return num1 * num2;
		}
		// �������չ�¹��ܣ������޸�Դ��
		// ����ʵ�Ŀ����У��ᳫ ����ԭ��
		// ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
	}

	int num1;
	int num2;
};

//���ö�̬ʵ�ּ�������
//��֯�ṹ�������ɶ���ǿ��ǰ�ںͺ�����չά���Ը�

//ʵ�ּ�����������
class AbstractCalculator {
public:

	virtual int getResult() {
		return 0;
	}

	int num1;
	int num2;
};
//�ӷ���������
class AddCalculator:public AbstractCalculator{
public:

	virtual int getResult() {
		return num1 + num2;
	}
};
//����
class SubCalculator :public AbstractCalculator {
public:

	virtual int getResult() {
		return num1 - num2;
	}
};
//�˷�
class MulCalculator :public AbstractCalculator {
public:

	virtual int getResult() {
		return num1 * num2;
	}
};

void test01() {
	Calculator c;
	c.num1 = 10;
	c.num2 = 10;
	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
}

void test02() {
	AbstractCalculator* abc = new AddCalculator;
	abc->num1 = 10;
	abc->num2 = 10; 
	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getResult() << endl;
	delete abc;
	// ����ǵ����٣������ڴ棩
	abc = new SubCalculator;
	abc->num1 = 10;
	abc->num2 = 10;
	cout << abc->num1 << "-" << abc->num2 << "=" << abc->getResult() << endl;
	delete abc;
	// ����ǵ����٣������ڴ棩
	abc = new MulCalculator;
	abc->num1 = 10;
	abc->num2 = 10;
	cout << abc->num1 << "*" << abc->num2 << "=" << abc->getResult() << endl;
	delete abc;
}

int main() {

	test01();
	test02();

	return 0;
}