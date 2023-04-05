

/*
* map中所有元素都是pair
* pair中第一个元素叫key（键值），第二个叫value（实值）
* 所有元素根据键值自动排序
*
* 关联性容器，使用二叉树实现
*
* 优点：根据key值快速找到value
*
* map不允许重复key元素，danmultimap允许
*
* 默认构造：map<T1, T2> mp;
* 拷贝构造：map(const map& map);
* 
* 赋值直接使用=
* 
* size()
* empty()
* swap()
* 
* insert()
* claer()
* erase(pos)
* erase(beg, end)
* erase(key)
* 
* find(key)
* count(key)
* 
* 排序：使用仿函数
*/