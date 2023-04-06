

/*
* STL常用算法
* 算法主要头文件
*   <algorithm>     STL中最大的头文件，比较、交换、查找、遍历、复制、修改等
*   <numeric>       体积很小，只包括几个在序列上面进行简单数学运算的模板函数
*   <function>      定义了一些模板类，用于声明函数对象
* 
* 遍历算法
*   for_each        遍历容器        
*   for_each(iterator beg, iterator end, _fun)  其中_fun是一个普通函数（只需要函数名）或者仿函数（传入对象名())
*   transform       搬运元素到另一个容器，目标容器需要提前resize开辟空间
*   transform(iterator beg1, iterator end1, iterator beg2, _func)
* 
* 查找算法
*   find(beg, end, value)           找到返回迭代器，找不到返回end
*   find_id(beg, end, _Pred)        _Pred函数或者谓词
*   adjacent_find(beg, end)         查找相邻重复元素,返回相邻元素的第一个位置迭代器，没有则返回end
*   binary_search(beg, end, value)  二分查找，查到返回true，否则false；在无序序列中不可用
*   count(beg, end, value)
*   count_if(beg, end, _Pred) 
* 
* 排序算法
*   sort(beg, end, _Pred)               排序，默认从小到大，如果给定_Pred（此处必须使用谓词）则按照此规则
*   random_shuffle(beg, end)            洗牌
*   merge(beg1, end1, beg2, end2, dest) 合并（两个容器必须有序且顺序一致），存储到另一个容器，
*                                       参数全部都是迭代器，将前两个容器部分内容合并到新容器的开始dest位置
*                                       提前给目标容器分配内存
*   reverse(beg, end)                   反转
* 
* 拷贝和替换算法
*   copy(beg, end, dest)
*   replace(beg, end, oldvalue, newvalue)   将区间内旧元素替换成新元素
*   replace_if(beg, end, _Pred, newvalue)
*   swap(container c1, container c2)
* 
* 算术生成算法，属于<numeric>
*   accumulate(beg, end, value)         计算容器元素累计总和，value是初始值
*   fill(beg, end, value)               向容器中添加元素，将指定区间替换为value
* 
* 常用集合算法
*   set_intersection(beg1, end1, beg2, end2, dest)        必须有序，求两集合交集
*   set_union(beg1, end1, beg2, end2, dest)               并集
*   set_difference(beg1, end1, beg2, end2, dest)          差集
*   
*/