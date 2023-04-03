#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age);

    void showPerson();

    T1 m_name;
    T2 m_age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->m_age = age;
    this->m_name = name;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
    cout << "姓名为：" << this->m_name << "年龄为：" << this->m_age << endl;
}