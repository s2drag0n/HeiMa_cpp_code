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