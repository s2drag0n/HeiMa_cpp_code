#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
* vector被称为单端数组
* 
* 普通数组是静态空间，而vector可以动态扩展
* 
* 动态扩展：并不是在原有空间之后续接新空间，而是找到更大的内存空间，然后将原数据拷贝到新空间，释放原有空间
* 
* vector的迭代器很强大：支持随机访问
* 
* vector的构造函数
*	无参构造
*	区间构造vector<int> v2(v1.begin(0, v1.end());
*	n个elem构造
*	拷贝构造
* 
* vector的赋值操作
*	1.使用重载的=
*	2.使用assign(beg, end)将[beg,end)区间中的数据赋值给本身
*	3.assign(n, elem）
* 
* vector的容量和大小操作
*	empty()					判断是否为空
*	capacity()				容量
*	size()					元素个数
*	resize(int num)			若容器变长，以默认值填充新位置
*	resize(int num, elem)	若容器变长，以elem填充新位置
*	reserve(int num)		设置容量
* 
* vector插入和删除
*	push_back(ele)
*	pop_back()
*	insert(pos, ele)
*	insert(pos, count, ele)
*	erase(pos)
*	erase(start, end)
*	clear()
* 
* vector数据存取
*	at(int index)
*	[]
*	front()
*	back()
* 
* vector互换容器
*	swap(vec)
* 巧用swap可以收缩内存空间
* 例如有一个容量为100000的空间只存了3个元素的vector v
* 可以使用匿名对象vector<int>(v).swap(v)将v的容量和大小都改为3
* 
* vector预留空间：提前分配空间，减小vector在动态扩展容量时的扩展次数
* reverse(int len)容器预留len个元素长度，预留位置不初始化，元素不可访问
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(10, 100);
	printVector(v3);

	vector<int> v4(v3);
	printVector(v4);

}


int main() {

	//test01();

	return 0;
}