#include <iostream>
#include <string>
using namespace std;

/*
* deque容器：双端数组，可以在头端进行插入和删除
* 
* deque和vector的区别
*   1.vector对于头部的删除插入操作效率很低
*   2.vector访问元素相对于deque更快
* 
* deque内部工作原理
* deque内部有个中控器，维护着每段缓冲区中的内容，缓冲区中存放真实数据
* 中控器中维护的是每段缓冲区的地址，使得使用deque时像使用一段连续的空间
* 
* deque支持随机访问
* 
* deque构造函数同vector
*   无参构造
*	区间构造deque<int> d2(d1.begin(0, d1.end());
*	n个elem构造
*	拷贝构造
* 
* deque赋值操作同vector
*   1.使用重载的=
*	2.使用assign(beg, end)将[beg,end)区间中的数据赋值给本身
*	3.assign(n, elem）
* 
* deque大小操作
*   empty()
*   size()
*   resize(num)         变大则默认值填充
*   resize(num, elem)   变大则elem填充
* 
* deque插入和删除
*   push_back(elem)
*   push_front(elem)
*   pop_back()
*   pop_front()
*   insert(pos, elem)
*   insert(pos, n, elem)
*   insert(pos, beg, end) 插入另一个deque的[beg, end)的内容
*   clear()
*   erase(beg, end)         返回下一个数据的位置
*   erase(pos)              返回下一个数据的位置
* 
* deque数据存取
*   at(int idx)
*   []
*   front()
*   back()
* 
* 排序操作
* sort(iterator beg, iterator end)
* 属于算法，并不是类deque的内部函数，默认从小到大
* 对于支持随机访问的迭代器，都可以使用sort()，比如vector
*/