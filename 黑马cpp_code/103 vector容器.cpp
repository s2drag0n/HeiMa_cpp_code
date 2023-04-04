#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
* vector����Ϊ��������
* 
* ��ͨ�����Ǿ�̬�ռ䣬��vector���Զ�̬��չ
* 
* ��̬��չ����������ԭ�пռ�֮�������¿ռ䣬�����ҵ�������ڴ�ռ䣬Ȼ��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�пռ�
* 
* vector�ĵ�������ǿ��֧���������
* 
* vector�Ĺ��캯��
*	�޲ι���
*	���乹��vector<int> v2(v1.begin(0, v1.end());
*	n��elem����
*	��������
* 
* vector�ĸ�ֵ����
*	1.ʹ�����ص�=
*	2.ʹ��assign(beg, end)��[beg,end)�����е����ݸ�ֵ������
*	3.assign(n, elem��
* 
* vector�������ʹ�С����
*	empty()					�ж��Ƿ�Ϊ��
*	capacity()				����
*	size()					Ԫ�ظ���
*	resize(int num)			�������䳤����Ĭ��ֵ�����λ��
*	resize(int num, elem)		�������䳤����elem�����λ��
*	reserve(int num)			��������
* 
* vector�����ɾ��
*	push_back(ele)
*	pop_back()
*	insert(pos, ele)
*	insert(pos, count, ele)
*	erase(pos)
*	erase(start, end)
*	clear()
* 
* vector���ݴ�ȡ
*	at(int index)
*	[]
*	front()
*	back()
* 
* vector��������
*	swap(vec)
* ����swap���������ڴ�ռ�
* ������һ������Ϊ100000�Ŀռ�ֻ����3��Ԫ�ص�vector v
* ����ʹ����������vector<int>(v).swap(v)��v�������ʹ�С����Ϊ3
* 
* vectorԤ���ռ䣺��ǰ����ռ䣬��Сvector�ڶ�̬��չ����ʱ����չ����
* reverse(int len)����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
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