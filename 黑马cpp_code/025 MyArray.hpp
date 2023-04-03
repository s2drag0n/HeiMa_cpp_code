#pragma once
#include <iostream>
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

template<class T>
class MyArray {

public:

    MyArray(int capacity) {

        //cout << "MyArray���вι������" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        pAddress = new T[this->m_capacity];
    }

    ~MyArray() {

        //cout << "MyArray�������������" << endl;
        if (this->pAddress != NULL) {
            delete[] pAddress;
            pAddress = NULL;
        }
    }

    //�������죺��ֹǳ����
    MyArray(const MyArray& arr) {

        //cout << "MyArray�Ŀ����������" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];

        for (int i = 0; i < arr.m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //����=����ֹǳ���� (a=b=c��������Ҫ����MyArray&)
    MyArray& operator=(const MyArray& arr) {

        //cout << "MyArray��=���ص���" << endl;
        //���ж϶����Ƿ������ݣ������ͷ�
        if (this->pAddress != NULL) {
            delete[] pAddress;
            pAddress = NULL;
            this->m_capacity = 0;
            this->m_size = 0;
        }
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];

        for (int i = 0; i < arr.m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    //β�巨
    void pushBack(const T& value) {

        if (this->m_capacity == this->m_size) {
            cout << "��������" << endl;
            return;
        }
        this->pAddress[this->m_size] = value;
        this->m_size++;
    }

    //βɾ��
    void popBack() {
        if (this->m_size == 0) {
            cout << "�Ѿ�û��Ԫ��" << endl;
            return;
        }
        this->m_size--;
    }

    //ͨ���±���ʣ�����[]
    T& operator[](int index) {

        return this->pAddress[index];
    }

    //���������ʹ�С
    int getCapacity() {
        return this->m_capacity;
    }
    int getSize() {
        return this->m_size;
    }

private:

    T* pAddress;
    int m_capacity;     //����
    int m_size;         //��С

};