#include <iostream>
using namespace std;

/*
* 电脑零件：CPU GPU Memory
* 零件厂商：Intel ASUS
*/

//零件抽象类
class CPU {
public:
	virtual void calculator() = 0;
};

class GPU {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

//不同厂商零件实现
//Intel
class IntelCPU :public CPU {
	virtual void calculator() {
		cout << "IntelCPU is calculating right now！" << endl;
	}
};

class IntelGPU :public GPU {
	virtual void display() {
		cout << "IntelGPU is displaying right now！" << endl;
	}
};

class IntelMemory :public Memory {
	virtual void storage() {
		cout << "IntelMemory is storaging right now！" << endl;
	}
};
//ASUS
class ASUSCPU :public CPU {
	virtual void calculator() {
		cout << "ASUSCPU is calculating right now！" << endl;
	}
};

class ASUSGPU :public GPU {
	virtual void display() {
		cout << "ASUSGPU is displaying right now！" << endl;
	}
};

class ASUSMemory :public Memory {
	virtual void storage() {
		cout << "ASUSMemory is storaging right now！" << endl;
	}
};

//电脑类
class Computer {
private:
	CPU* cpu;
	GPU* gpu;
	Memory* memory;
public:
	Computer(CPU* cpu, GPU* gpu, Memory* memory):cpu(cpu),gpu(gpu),memory(memory){}
	void work() {
		cpu->calculator();
		gpu->display();
		memory->storage();
	}
	~Computer() {
		delete cpu;
		cpu = NULL;
		delete gpu;
		gpu = NULL;
		delete memory;
		memory = NULL;
	}
};

void test01() {
	cout << "=================================================" << endl;
	Computer* com1 = new Computer(new IntelCPU, new IntelGPU, new IntelMemory);
	com1->work();
	delete com1;
	com1 = NULL;


	cout << "=================================================" << endl;
	Computer* com2 = new Computer(new ASUSCPU, new ASUSGPU, new ASUSMemory);
	com2->work();
	delete com2;
	com2 = NULL;


	cout << "=================================================" << endl;
	Computer* com3 = new Computer(new ASUSCPU, new ASUSGPU, new IntelMemory);
	com3->work();
	delete com3;
	com3 = NULL;
}

int main() {

	test01();

	return 0;
}