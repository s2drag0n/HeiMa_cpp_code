

/*
* set/multiset关联式容器，底层是二叉树实现
* 
* 所有元素插入时，自动进行排序
* 
* set和multiset区别：
*   set不允许存在重复的元素，但是multiset允许；
*   set插入数据的同时会返回结果，表示是否成功；
*   返回值为pair<set<type>::iterator, bool> ret = s.insert(elem);
*   ret.second未插入是否成功的标识
*   multiset不会检测数据
* 
* 构造函数：默认构造、拷贝构造
* 
* 赋值操作：=直接赋值
* 
* 插入数据只有insert()
* 
* size()
* empty()
* swap()
* 
* insert(0
* clear()
* erase(pos)
* erase(beg, end)
* erase(elem)
* 
* 查找和统计
* find(key)存在则返回迭代器，不存在则返回set.end();
* count(key)
* 
* pair对组创建：成对出现的数据，可以使用对组返回两个数据
* pair<type, type> p(value1, value2);
* pair<type, type> p = make_pair(value1, value2);
* p.first   p.second
* 
* set容器排序：默认从小到大(技术点：利用仿函数(重载小括号）)
*   对于内置数据类型修改排序规则：创建对象时就要声明排序方式
*       set<int, myCompare> s1;
*       class myCompare{
*       public:
*           bool operator()(int v1, int v2) {
*               return v1 < v2;
*           }
*       }
*   自定义数据类型首先要指定默认排序规则，使用仿函数
*/