#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
* 文件操作
* 
* 通过文件将数据持久化
* 需要包含头文件<fstream>
* 
* 文件类型
*	1.文本文件：以文本的ASCII码形式存储
*	2.二进制文件：以文本的二进制形式存储，用户一般不能直接读懂
* 
* 操作文件三大类
*	1.ofstream：写操作output
*	2.ifstream：读操作input
*	3.fstream：读写操作file
* 
* 文本文件写文件
*	1.包含头文件：include<fstream>
*	2.创建流对象：ofstream ofs;
*	3.打开文件：ofs.open("文件路径", 打开方式);
*	4.写数据：ofs<<"写入的数据";
*	3.关闭文件：ofs.close();
* 
* 文件打开方式
*	ios::in		读文件
*	ios::out	写文件
*	ios::ate	打开初始位置在文件尾
*	ios::app	追加方式写文件
*	ios::trunc	如果文件存在则先删除，再创建
*	ios::binary	二进制方式
* 文件打开方式可以配合使用，使用|操作符
*	
* 文本文件读文件
*	1.包含头文件：include<fstream>
*	2.创建流对象：ifstream ifs;
*	3.打开文件：ifs.open("文件路径", 打开方式);
*	4.读数据：四种方式
*	3.关闭文件：ifs.close();
* 
* 二进制写
* 打开方式指定为ios::binary
* 二进制方式写文件主要利用流对象调用成员函数write
* 函数原型：ostream& write(const char* buffer, int len);
* 字符buffer指向内存中的一段存储空间；len是读写的字节数
* 
* 二进制读
* ifstream& read(char* buffer, int len);
*/

//写文本文件
void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "姓名：张三" << endl << "性别：女" << endl;
	ofs.close();
}

//读文本文件
void test02() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open()) {
		cout<< "文件打开失败" << endl;
		return;
	}

	//读数据
	//第一种
	char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}

	//第二种
	char buf1[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf1))) {
		cout << buf1 << endl;
	}

	//第三种
	string buf2;
	while (getline(ifs, buf2)) {
		cout << buf2 << endl;
	}

	//第四种
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}

	ifs.close();
}

//二进制写文件
class Person {
public:
	char m_Name[64];
	int m_age;
};

void test03() {
	ofstream ofs("person.txt", ios::out | ios::binary);
	// ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "张三",18 };

	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();

}

//二进制读文件
void test04() {
	ifstream ifs("person.txt", ios::in | ios::binary);
	// ifs.ipen("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Name << endl << p.m_age << endl;
	ifs.close();

}

int main() {

	// test01();
	// test02();
	// test03();
	test04();
	return 0;
}