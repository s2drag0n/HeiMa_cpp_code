#include "024 Person.h"

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->m_age = age;
    this->m_name = name;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
    cout << "����Ϊ��" << this->m_name << "����Ϊ��" << this->m_age << endl;
}