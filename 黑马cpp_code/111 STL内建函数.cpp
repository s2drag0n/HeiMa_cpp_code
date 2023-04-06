

/*
* 内建函数：STL提供的仿函数
* 需要引入头文件<functional>
* 
* 算术仿函数：实现四则运算
*   plus
*   minus
*   multiplies
*   divides
*   modulus:取模
*   negate：取反
*   例如：
*       negate<int> n;   cout << n(50) <<endl;
*       //打印结果为-50
*       plus<int> m;
* 
* 关系仿函数：返回bool
*   equal_to
*   not_equal_to
*   greater
*   greater_equal
*   less
*   less_equal
* 
* 逻辑仿函数：返回bool
*   logical_and
*   logical_or
*   logical_not
*/