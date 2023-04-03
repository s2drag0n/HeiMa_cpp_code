#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
* Ϊ�˽������ݽṹ���㷨��һ�ױ�׼��������STL��standard template librariy����׼ģ��⣩��
* �ӹ����Ϸ�Ϊ
*	1.����	container
*	2.�㷨	algorithm
*	3.������	iterator
* �������㷨֮��ͨ�������������޷�����
* STL�������д��붼������ģ�������ģ�庯��
* 
* STL����������������㷨�����������º�����������������������ռ�������
*	������		�������ݽṹ������������ݣ�vector��list��deque��set��map
*	�㷨��		�����㷨��sort��find��copy��for_each
*	��������		�������㷨֮��Ľ��ϼ�
*	�º�����		��Ϊ���ƺ�����������Ϊ�㷨��ĳ�ֲ���
*	��������		�����������߷º�����������ӿڵĶ���
*	�ռ���������	����ռ�����������	
* 
* STL������ʵ��һЩ��õ����ݽṹ�����顢����ջ�����С����ϡ�ӳ����
* ����ʽ������ǿ��ֵ������ÿ��Ԫ�ؾ��й̶�λ��
* ����ʽ�������������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ
* 
* �㷨
* �ʱ��㷨����������л���������ڵ�Ԫ�����ݡ��������滻��ɾ����
* ���ʱ��㷨����������в�����������ڵ�Ԫ�����ݡ����ҡ�������������Ѱ�Ҽ�ֵ��
* 
* ���������ṩһ�ַ�����ʹ֮�ܹ�����Ѱ��ĳ�������������ĸ���Ԫ�أ����豩¶�������ڲ��ı�ʾ��ʽ
* ÿ�����������Լ�ר���ĵ�����
* ������ָ��
*	����				����							֧������
*	���������		ֻ��							++ == !=
*	���������		ֻд							++
*	ǰ�������		��д������ֻ����ǰ�ƽ�			++ == !=
*	˫�������		��д,�ҿ�����ǰ��������		++ --
*	������ʵ�����		��д����Ծ��ʽ������������		++ -- [n] -n < <= > >=
* 
* ��ʶ:��main����test01��test02��test03
* ������vector
* �㷨��for_each
* ��������vector<int>::iterator
* 
* ����Ƕ��������test04
* 
*/

void myPrint(int a) {
	cout << a << endl;
}

void test01() {
	vector<int> v;

	//������������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//��һ�ֱ�����ʽ
	//ͨ������������
	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();//����v.end()ָ�����v�����һ��Ԫ�ص���һ��λ��

	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	//�����ֱ�����ʽ	����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

void test02() {
	vector<Person> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "name:" << it->name << " age:" << it->age << endl;
	}
}

void test03() {
	vector<Person*> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "name:" << (*it)->name << " age:" << (*it)->age << endl;
	}
}

void test04() {
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//����
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		for (vector<int>::iterator it1 = it->begin(); it1 != it->end(); it1++) {
			cout << (*it1) << " ";
		}
		cout << endl;
	}
}

int main() {

	//test01();
	//test02();
	//test03();
	test04();

	return 0;
}