#include <iostream>
#include <string>
using namespace std;

/*
* string ��������һ���࣬����ڲ���װ��char*����������ַ���
* 
* ��װ�˺ܶ��Ա������find��copy��delete��replace��insert��
* ���ص��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���
* 
* string���캯��	test01()
* string();
* string(const char* s);
* string(const string& str);
* string(int n, char c);ʹ��n��c��ʼ��
* 
* string��ֵ����	test02()
* string& operator=(const char* s);
* string& operator=(const string& s);
* string& operator=(const char c);
* string& assign(const char* s);
* string& assign(const char* s, int n);//���ַ�s��ǰn���ַ���ֵ����ǰ���ַ���
* string& assign(const string& s);
* string& assign(int n, char c);//��n���ַ�c��ֵ����ǰ���ַ���
* 
* string�ַ���ƴ�� test03()
* ���ַ���ĩβ׷���ַ���
* �����ַ�ʽ�ֱ��� += �� append()
* ����+=ʵ���ˣ�		const char* str		const char c											const string& str
* ��append()ʵ���ˣ�	const char* str		const char* str, int n(�ַ�����ǰn�����ӵ���ǰ�ַ���ĩβ��		const string& str
* ��append(const string& s, int pos, int n)�����ַ���s��posλ�ÿ�ʼ��n���ַ�ƴ�ӵ���ǰ�ַ���ĩβ��
* 
* string�Ĳ��Һ��滻
* int find(const string& str, int pos = 0) const;			����str��һ�γ���λ��,��pos��ʼ����
* int find(const char* s, int pos = 0) const;				����s��һ�γ���λ��,��pos��ʼ����
* int find(const char* s, int pos, int n) const;			��posλ�ò���s��ǰn���ַ���һ��λ��
* int find(const char c, int pos = 0) const;				�����ַ�c��һ�γ���λ��
* int rfind(const string& str, int pos = npos) const;		����str���һ��λ��,��pos��ʼ����
* int rfind(const char* s, int pos = npos) const;			����s���һ�γ���λ��,��pos��ʼ����
* int rfind(const char* s, int pos, int n) const;			��pos����s��ǰn���ַ����һ��λ��
* int rfind(const char c, int pos = 0) const;				�����ַ�c���һ�γ���λ��
* string& replace(int pos, int n, const string& str);		�滻��pos��ʼ��n���ַ�Ϊ�ַ���str
* string& replace(int pos, int n,const char*);				�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
* 
* string �ַ����Ƚϣ��Ƚϵ���ASCII��
* = ����0
* > ����1
* < ����-1
* str.compare(str2);
* str.compare("HelloWordl");
* 
* string�ַ���ȡ
*	1.������������string[n]
*	2.str.at(int n)
* 
* string�еĲ����ɾ��
* str.insert(int pos, const char* str)
* str.insert(int pos, const char* str)
* str.insert(int pos, int n, char c)//����n��c
* str.erase(int pos, int n = npos);
* 
* �Ӵ���ȡ
* string substr(int pos = 0, int n = npos) const;
* 
* 
*
*/

void test01() {

	string s1;

	const char* str = "helloWorld";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;

}

void test02() {

	string str1;
	str1 = "helloWorld";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("Hello C++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("Hello C++", 7);
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(6, 'a');
	cout << "str7 = " << str7 << endl;

}

void test03() {

	string str1 = "��";

	str1 += "��˧��";
	cout << "str1 = " << str1 << endl;

	str1 += 'a';
	cout << "str1 = " << str1 << endl;

	str1 += str1;
	cout << "str1 = " << str1 << endl;

	string str2 = "��";
	string str3 = "12345";
	str2.append("��˧��");
	str2.append("abcde",3);
	str2.append(str3);
	str2.append(str3, 2, 2);
	cout << "str2 = " << str2 << endl;

}

int main() {

	//test01();
	//test02();
	test03();

	return 0;
}