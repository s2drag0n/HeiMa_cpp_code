#pragma once
#include <iostream>
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

template<class T>
class MyArray {

public:

    MyArray(int capacity) {

        //cout << "MyArray的有参构造调用" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        pAddress = new T[this->m_capacity];
    }

    ~MyArray() {

        //cout << "MyArray的析构构造调用" << endl;
        if (this->pAddress != NULL) {
            delete[] pAddress;
            pAddress = NULL;
        }
    }

    //拷贝构造：防止浅拷贝
    MyArray(const MyArray& arr) {

        //cout << "MyArray的拷贝构造调用" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];

        for (int i = 0; i < arr.m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //重载=：防止浅拷贝 (a=b=c，所以需要返回MyArray&)
    MyArray& operator=(const MyArray& arr) {

        //cout << "MyArray的=重载调用" << endl;
        //先判断堆区是否有数据，有则释放
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

    //尾插法
    void pushBack(const T& value) {

        if (this->m_capacity == this->m_size) {
            cout << "容量已满" << endl;
            return;
        }
        this->pAddress[this->m_size] = value;
        this->m_size++;
    }

    //尾删法
    void popBack() {
        if (this->m_size == 0) {
            cout << "已经没有元素" << endl;
            return;
        }
        this->m_size--;
    }

    //通过下标访问，重载[]
    T& operator[](int index) {

        return this->pAddress[index];
    }

    //返回容量和大小
    int getCapacity() {
        return this->m_capacity;
    }
    int getSize() {
        return this->m_size;
    }

private:

    T* pAddress;
    int m_capacity;     //容量
    int m_size;         //大小

};