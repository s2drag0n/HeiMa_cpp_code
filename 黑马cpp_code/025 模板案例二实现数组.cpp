#include <iostream>
#include "025 MyArray.hpp"
using namespace std;

/*
* 自己通用的数组类满足下面的条件：
*
* 可以对内置数据类型和自定义数据类型进行存储
* 将数组中的数据存储到堆区
* 构造函数传入数组的容量
* 提供对应的拷贝构造函数和=重载防止浅拷贝的问题
* 提供尾插法和尾删法
* 通过下标访问
* 获取数组中当前元素个数和数组的容量
*/

void printIntArray(MyArray<int>& array) {

    for (int i = 0; i < array.getSize(); i++) {
        cout << "第i个数据为" << array[i] << endl;
    }
}

void test01() {

    MyArray<int> arr1(5);
    MyArray<int> arr2(arr1);
    MyArray<int> arr3(100);
    arr3 = arr1;

    for (int i = 0; i < 5; i++) {
        arr1.pushBack(i);
    }

    cout << "array1的打印输出为：" << endl;
    printIntArray(arr1);
    cout << "arr1的容量和大小分别为：" << arr1.getCapacity() << "\t" << arr1.getSize() << endl;

    arr1.popBack();
    cout << "array1的打印输出为：" << endl;
    printIntArray(arr1);
    cout << "arr1的容量和大小分别为：" << arr1.getCapacity() << "\t" << arr1.getSize() << endl;

}

//测试自定义数据类型
class Person {

public:

    Person() {};

    Person(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }

    string getName() {
        return this->m_name;
    }

    int getAge() {
        return this->m_age;
    }

private:

    string m_name;
    int m_age;

};

void printPersonArray(MyArray<Person>& arr) {

    cout << "人数组的值如下：" << endl;
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i].getName() << "\t" << arr[i].getAge() << endl;
    }
}

void test02() {

    MyArray<Person> arr(10);
    Person p1("a", 91);
    Person p2("b", 92);
    Person p3("c", 93);
    Person p4("d", 94);
    Person p5("e", 95);
    arr.pushBack(p1);
    arr.pushBack(p2);
    arr.pushBack(p3);
    arr.pushBack(p4);
    arr.pushBack(p5);
    printPersonArray(arr);
}

int main() {

    test01();
    test02();

    return 0;
}