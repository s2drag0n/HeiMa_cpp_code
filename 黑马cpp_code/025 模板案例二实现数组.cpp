#include <iostream>
#include "025 MyArray.hpp"
using namespace std;

/*
* �Լ�ͨ�õ����������������������
*
* ���Զ������������ͺ��Զ����������ͽ��д洢
* �������е����ݴ洢������
* ���캯���������������
* �ṩ��Ӧ�Ŀ������캯����=���ط�ֹǳ����������
* �ṩβ�巨��βɾ��
* ͨ���±����
* ��ȡ�����е�ǰԪ�ظ��������������
*/

void printIntArray(MyArray<int>& array) {

    for (int i = 0; i < array.getSize(); i++) {
        cout << "��i������Ϊ" << array[i] << endl;
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

    cout << "array1�Ĵ�ӡ���Ϊ��" << endl;
    printIntArray(arr1);
    cout << "arr1�������ʹ�С�ֱ�Ϊ��" << arr1.getCapacity() << "\t" << arr1.getSize() << endl;

    arr1.popBack();
    cout << "array1�Ĵ�ӡ���Ϊ��" << endl;
    printIntArray(arr1);
    cout << "arr1�������ʹ�С�ֱ�Ϊ��" << arr1.getCapacity() << "\t" << arr1.getSize() << endl;

}

//�����Զ�����������
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

    cout << "�������ֵ���£�" << endl;
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