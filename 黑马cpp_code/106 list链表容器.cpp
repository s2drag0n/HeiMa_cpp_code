


/*
* 将数据进行链式存储：
*   优点：可以对任意位置进行插入和删除
*   缺点：遍历速度没有数组快；占用空间比数组大
* 
* STL的链表是一个双向循环链表
* 
* 链表的存储空间并不连续，因此list的迭代器只支持前移和后移，属于双向迭代器
* 
* list插入和删除操作不会造成原有迭代器的失效，这在vector是不成立的
* （因为vector插入和删除都可能会造成数组占用物理空间的重新分配，此时迭代器可能会失效）
* 
* 构造函数
*   无参构造
*	区间构造list<int> l2(l1.begin(0, l1.end());
*	n个elem构造
*	拷贝构造
* 
* list的赋值操作
*	1.使用重载的=
*	2.使用assign(beg, end)将[beg,end)区间中的数据赋值给本身
*	3.assign(n, elem）
*   3.swap(lst)将lst的元素和本身互换
* 
* size()
* empty()
* resize(int num)
* resize(int num, elem)
* 
* 插入和删除
*   push_back()
*   push_front()
*   pop_back()
*   pop_front()
*   insert(pos, elem)
*   insert(pos, n, elem)
*   insert(pos, beg, end)
*   clear()
*   erase(beg, end)
*   erase(pos)
*   remove(elem)移除容器中所有与elem值匹配的元素
* 
* list数据存取
*   front()
*   back()
* 
* list反转和排序
*   reverse()
*   sort()类内部算法，默认排序从小到大
* 
* 不支持随机访问的迭代器，不可以使用标准算法，但是其内部会提供相应算法
* 
*/