#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
* �ļ�����
* 
* ͨ���ļ������ݳ־û�
* ��Ҫ����ͷ�ļ�<fstream>
* 
* �ļ�����
*	1.�ı��ļ������ı���ASCII����ʽ�洢
*	2.�������ļ������ı��Ķ�������ʽ�洢���û�һ�㲻��ֱ�Ӷ���
* 
* �����ļ�������
*	1.ofstream��д����output
*	2.ifstream��������input
*	3.fstream����д����file
* 
* �ı��ļ�д�ļ�
*	1.����ͷ�ļ���include<fstream>
*	2.����������ofstream ofs;
*	3.���ļ���ofs.open("�ļ�·��", �򿪷�ʽ);
*	4.д���ݣ�ofs<<"д�������";
*	3.�ر��ļ���ofs.close();
* 
* �ļ��򿪷�ʽ
*	ios::in		���ļ�
*	ios::out	д�ļ�
*	ios::ate	�򿪳�ʼλ�����ļ�β
*	ios::app	׷�ӷ�ʽд�ļ�
*	ios::trunc	����ļ���������ɾ�����ٴ���
*	ios::binary	�����Ʒ�ʽ
* �ļ��򿪷�ʽ�������ʹ�ã�ʹ��|������
*	
* �ı��ļ����ļ�
*	1.����ͷ�ļ���include<fstream>
*	2.����������ifstream ifs;
*	3.���ļ���ifs.open("�ļ�·��", �򿪷�ʽ);
*	4.�����ݣ����ַ�ʽ
*	3.�ر��ļ���ifs.close();
* 
* ������д
* �򿪷�ʽָ��Ϊios::binary
* �����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
* ����ԭ�ͣ�ostream& write(const char* buffer, int len);
* �ַ�bufferָ���ڴ��е�һ�δ洢�ռ䣻len�Ƕ�д���ֽ���
* 
* �����ƶ�
* ifstream& read(char* buffer, int len);
*/

//д�ı��ļ�
void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "����������" << endl << "�Ա�Ů" << endl;
	ofs.close();
}

//���ı��ļ�
void test02() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open()) {
		cout<< "�ļ���ʧ��" << endl;
		return;
	}

	//������
	//��һ��
	char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}

	//�ڶ���
	char buf1[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf1))) {
		cout << buf1 << endl;
	}

	//������
	string buf2;
	while (getline(ifs, buf2)) {
		cout << buf2 << endl;
	}

	//������
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}

	ifs.close();
}

//������д�ļ�
class Person {
public:
	char m_Name[64];
	int m_age;
};

void test03() {
	ofstream ofs("person.txt", ios::out | ios::binary);
	// ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "����",18 };

	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();

}

//�����ƶ��ļ�
void test04() {
	ifstream ifs("person.txt", ios::in | ios::binary);
	// ifs.ipen("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
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