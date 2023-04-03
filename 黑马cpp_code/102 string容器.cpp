#include <iostream>
#include <string>
using namespace std;

/*
* string 本质上是一个类，类的内部封装着char*，管理这个字符串
* 
* 封装了很多成员方法：find、copy、delete、replace、insert等
* 不必担心复制越界和取值越界等，由类内部进行负责
* 
* string构造函数	test01()
* string();
* string(const char* s);
* string(const string& str);
* string(int n, char c);使用n个c初始化
* 
* string赋值操作	test02()
* string& operator=(const char* s);
* string& operator=(const string& s);
* string& operator=(const char c);
* string& assign(const char* s);
* string& assign(const char* s, int n);//把字符s的前n个字符赋值给当前的字符串
* string& assign(const string& s);
* string& assign(int n, char c);//用n个字符c赋值给当前的字符串
* 
* string字符串拼接 test03()
* 在字符串末尾追加字符串
* 有两种方式分别是 += 和 append()
* 其中+=实现了：		const char* str		const char c											const string& str
* 而append()实现了：	const char* str		const char* str, int n(字符串的前n个连接到当前字符串末尾）		const string& str
* 和append(const string& s, int pos, int n)（将字符串s的pos位置开始的n个字符拼接到当前字符串末尾）
* 
* string的查找和替换
* int find(const string& str, int pos = 0) const;			查找str第一次出现位置,从pos开始查找
* int find(const char* s, int pos = 0) const;				查找s第一次出现位置,从pos开始查找
* int find(const char* s, int pos, int n) const;			从pos位置查找s的前n个字符第一次位置
* int find(const char c, int pos = 0) const;				查找字符c第一次出现位置
* int rfind(const string& str, int pos = npos) const;		查找str最后一次位置,从pos开始查找
* int rfind(const char* s, int pos = npos) const;			查找s最后一次出现位置,从pos开始查找
* int rfind(const char* s, int pos, int n) const;			从pos查找s的前n个字符最后一次位置
* int rfind(const char c, int pos = 0) const;				查找字符c最后一次出现位置
* string& replace(int pos, int n, const string& str);		替换从pos开始的n个字符为字符串str
* string& replace(int pos, int n,const char*);				替换从pos开始的n个字符为字符串s
* 
* string 字符串比较：比较的是ASCII码
* = 返回0
* > 返回1
* < 返回-1
* str.compare(str2);
* str.compare("HelloWordl");
* 
* string字符存取
*	1.重载了中括号string[n]
*	2.str.at(int n)
* 
* string中的插入和删除
* str.insert(int pos, const char* str)
* str.insert(int pos, const char* str)
* str.insert(int pos, int n, char c)//插入n个c
* str.erase(int pos, int n = npos);
* 
* 子串获取
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

	string str1 = "我";

	str1 += "是帅哥";
	cout << "str1 = " << str1 << endl;

	str1 += 'a';
	cout << "str1 = " << str1 << endl;

	str1 += str1;
	cout << "str1 = " << str1 << endl;

	string str2 = "我";
	string str3 = "12345";
	str2.append("是帅哥");
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