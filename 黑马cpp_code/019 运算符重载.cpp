#include <iostream>
using namespace std;

/*
* ��������أ������е���������¶��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
* ����ͨ����Ա��������ȫ�ֺ������������
* Person operator+(Person p){}
* Person operator+(Person p1, Person p2){}
* 
* << ��������أ��Զ���������������ͣ�һ�㲻ʹ�ó�Ա�������أ����������ﵽcout��<<���
* cout����ostream��׼���������
* void operator<<(ostream &cout, Person &p){}	���ַ�ʽ���ܼ���<<endl;
* ostream & operator<<(ostream &cout, Person &p){return cout;}
* 
* ++��������أ�ʵ���Լ�����������
* ++a:	MyInteger& oprerator++(){return *this;}
* a++:	MyInteger oprerator++(int){�ȼ�¼���temp = *this���ٵ�����return temp;}�����int��ռλ����Ϊ������ǰ�ú���
* 
* = ��ֵ���������
* c++�����ṩ��=��ֵ�����������ֵ���������ڶ������ݻ���ǳ����������
* Person& operator=(){return *this;}
* 
* == < > <= >= != ��ϵ��������أ��������Զ������Ͷ�����жԱȲ���
* 
* �������������()���أ������ö�������һ�����ã�������Ϊ�º���
* ��������Person()
* ������������ Person()(10,10)  �൱�� Person p;	p(10,10)
*/

int main() {

	cout << "HelloWorld" << endl;

	return 0;
}